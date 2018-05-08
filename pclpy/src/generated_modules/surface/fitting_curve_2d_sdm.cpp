
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

#include <pcl/surface/on_nurbs/fitting_curve_2d_sdm.h>



void defineSurfaceFittingCurve2dSdmFunctions(py::module &m) {
}

void defineSurfaceFittingCurve2dSdmClasses(py::module &sub_module) {
}