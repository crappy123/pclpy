import pclpy
from pclpy import *
from pclpy import pcl
import os
import pclpy.view.vtk
import numpy as np


def roi_window():
    pc = pclpy.io.read("test.las", "PointXYZRGBA")
    viewer = pcl.visualization.PCLVisualizer("viewer", True)
    viewer.addPointCloud(pc)
    viewer.resetCamera()

    viewers = [viewer]

    def handle_event_area(event):
        # use x to toggle rectangle selection
        assert isinstance(event, pcl.visualization.AreaPickingEvent)
        indices = pcl.vectors.Int()
        event.getPointsIndices(indices)

        other_viewer = pcl.visualization.PCLVisualizer("viewer", True)
        rgb = np.array([pc.r[indices], pc.g[indices], pc.b[indices]]).T
        other_pc = pcl.PointCloud.PointXYZRGBA.from_array(pc.xyz[indices], rgb)
        other_viewer.addPointCloud(other_pc)
        other_viewer.resetCamera()
        viewers.append(other_viewer)

    viewer.registerAreaPickingCallback(handle_event_area)

    while not all(v.wasStopped() for v in viewers):
        for v in viewers:
            if not v.wasStopped():
                v.spinOnce(70)


roi_window()
