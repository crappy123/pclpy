
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/eigen.h>
#include <pybind11/stl.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;


#include <pcl/surface/3rdparty/poisson4/hash.h>



void defineSurfaceHashFunctions(py::module &m) {
}

void defineSurfaceHashClasses(py::module &sub_module) {
}