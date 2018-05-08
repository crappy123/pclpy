
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/eigen.h>
#include <pybind11/stl.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
#include "../../make_opaque_vectors.hpp"

#include <pcl/visualization/vtk/vtkVertexBufferObject.h>



void defineVisualizationVtkVertexBufferObjectFunctions(py::module &m) {
}

void defineVisualizationVtkVertexBufferObjectClasses(py::module &sub_module) {
}