
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

#include <pcl/sample_consensus/msac.h>



template <typename PointT>
void defineSampleConsensusMEstimatorSampleConsensus(py::module &m, std::string const & suffix) {
    using Class = pcl::MEstimatorSampleConsensus<PointT>;
    using Ptr = Class::Ptr;
    using ConstPtr = Class::ConstPtr;
    py::class_<Class, pcl::SampleConsensus<PointT>, boost::shared_ptr<Class>> cls(m, suffix.c_str());
    cls.def(py::init<pcl::SampleConsensusModel<PointT>::Ptr>(), "model"_a);
    cls.def(py::init<pcl::SampleConsensusModel<PointT>::Ptr, double>(), "model"_a, "threshold"_a);
    cls.def("computeModel", &Class::computeModel, "debug_verbosity_level"_a=0);
        
}

void defineSampleConsensusMsacFunctions(py::module &m) {
}

void defineSampleConsensusMsacClasses(py::module &sub_module) {
    py::module sub_module_MEstimatorSampleConsensus = sub_module.def_submodule("MEstimatorSampleConsensus", "Submodule MEstimatorSampleConsensus");
    defineSampleConsensusMEstimatorSampleConsensus<pcl::PointXYZ>(sub_module_MEstimatorSampleConsensus, "PointXYZ");
    defineSampleConsensusMEstimatorSampleConsensus<pcl::PointXYZI>(sub_module_MEstimatorSampleConsensus, "PointXYZI");
    defineSampleConsensusMEstimatorSampleConsensus<pcl::PointXYZRGB>(sub_module_MEstimatorSampleConsensus, "PointXYZRGB");
    defineSampleConsensusMEstimatorSampleConsensus<pcl::PointXYZRGBA>(sub_module_MEstimatorSampleConsensus, "PointXYZRGBA");
    defineSampleConsensusMEstimatorSampleConsensus<pcl::PointXYZRGBNormal>(sub_module_MEstimatorSampleConsensus, "PointXYZRGBNormal");
}