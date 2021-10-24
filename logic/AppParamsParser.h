//
// Created by kubusabadi on 14.10.2021.
//

#ifndef SEND_OWLS_QT_APPPARAMSPARSER_H
#define SEND_OWLS_QT_APPPARAMSPARSER_H

#include <boost/program_options.hpp>
#include "../models/AppParamsParseResult.h"

namespace po = boost::program_options;

class AppParamsParser {
public:
    AppParamsParser();

    AppParamsParseResult parse(int argc, char *argv[]);

    bool isNoGui() const { return vm["no-gui"].as<bool>(); }
private:
    po::variables_map vm;
};

#endif //SEND_OWLS_QT_APPPARAMSPARSER_H
