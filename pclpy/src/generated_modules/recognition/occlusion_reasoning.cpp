
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

#include <pcl/recognition/hv/occlusion_reasoning.h>



void defineRecognitionOcclusionReasoningFunctions(py::module &m) {
}

void defineRecognitionOcclusionReasoningClasses(py::module &sub_module) {
}