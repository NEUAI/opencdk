//
// Created by 艾峥鹏 on 2021/8/15.
//

#include <opencdk.h>
#include <iostream>
#include <exception>

int main(int argc, char *argv[]) {
    try {
        Main::main();
        return EXIT_SUCCESS;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}
