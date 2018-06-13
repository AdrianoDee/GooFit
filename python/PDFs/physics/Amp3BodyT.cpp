#include <goofit/Python.h>

#include <pybind11/stl.h>

#include <goofit/PDFs/physics/Amp3BodyT.h>
#include <goofit/PDFs/physics/DalitzPlotHelpers.h>
#include <goofit/PDFs/physics/MixingTimeResolution_Aux.h>
#include <goofit/Variable.h>
#include <goofit/docs/PDFs/physics/Amp3BodyT.h>

using namespace GooFit;

void init_Amp3BodyT(py::module &m) {
    py::class_<Amp3BodyT, Amp3BodyBase>(m, "Amp3BodyT")
        .def(py::init<std::string,
                      Observable,
                      Observable,
                      Observable,
                      Observable,
                      EventNumber,
                      DecayInfo3t,
                      MixingTimeResolution *,
                      GooPdf *>(),
             "name"_a,
             "dtime"_a,
             "sigmat"_a,
             "m12"_a,
             "m13"_a,
             "eventNumber"_a,
             "decay"_a,
             "r"_a,
             "eff"_a,
             py::keep_alive<1, 8>(),
             py::keep_alive<1, 9>(),
             py::keep_alive<1, 10>())
        .def(py::init<std::string,
                      Observable,
                      Observable,
                      Observable,
                      Observable,
                      EventNumber,
                      DecayInfo3t,
                      MixingTimeResolution *,
                      GooPdf *,
                      Observable *>(),
             "name"_a,
             "dtime"_a,
             "sigmat"_a,
             "m12"_a,
             "m13"_a,
             "eventNumber"_a,
             "decay"_a,
             "r"_a,
             "eff"_a,
             "mistag"_a,
             py::keep_alive<1, 7>(),
             py::keep_alive<1, 8>(),
             py::keep_alive<1, 9>(),
             py::keep_alive<1, 10>(),
             py::keep_alive<1, 11>())
        .def(py::init<std::string,
                      Observable,
                      Observable,
                      Observable,
                      Observable,
                      EventNumber,
                      DecayInfo3t,
                      std::vector<MixingTimeResolution *> &,
                      GooPdf *,
                      Observable>(),
             "name"_a,
             "dtime"_a,
             "sigmat"_a,
             "m12"_a,
             "m13"_a,
             "eventNumber"_a,
             "decay"_a,
             "r"_a,
             "eff"_a,
             "md0"_a,
             py::keep_alive<1, 7>(),
             py::keep_alive<1, 9>(),
             py::keep_alive<1, 10>())
        .def(py::init<std::string,
                      Observable,
                      Observable,
                      Observable,
                      Observable,
                      EventNumber,
                      DecayInfo3t,
                      std::vector<MixingTimeResolution *> &,
                      GooPdf *,
                      Observable,
                      Observable *>(),
             "name"_a,
             "dtime"_a,
             "sigmat"_a,
             "m12"_a,
             "m13"_a,
             "eventNumber"_a,
             "decay"_a,
             "r"_a,
             "eff"_a,
             "md0"_a,
             "mistag"_a,
             py::keep_alive<1, 7>(),
             py::keep_alive<1, 8>(),
             py::keep_alive<1, 9>(),
             py::keep_alive<1, 10>(),
             py::keep_alive<1, 11>())

        .def_static("help", []() { return HelpPrinter(Amp3BodyT_docs); })

        ;
}