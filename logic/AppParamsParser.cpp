//
// Created by kubusabadi on 14.10.2021.
//

#include <iostream>
#include "AppParamsParser.h"

AppParamsParser::AppParamsParser() {
}

AppParamsParseResult AppParamsParser::parse(int argc, char **argv) {
    po::options_description desc("Allowed options");

    desc.add_options()
            ("help", "produce help message")
            ("no-gui", po::bool_switch(), "enter console mode")
            ;

    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
        std::cout << desc << "\n";
        return AppParamsParseResult::NOT_OK;
    }

    if (vm.count("no-gui")) {
        std::cout << "no-gui flag was set to "
                  << vm["no-gui"].as<bool>() << ".\n";
    } else {
        std::cout << "no_gui flag was not set.\n";
    }
    return AppParamsParseResult::OK;
}
