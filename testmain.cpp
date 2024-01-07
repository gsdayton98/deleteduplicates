// -*-mode: c++-*-
#include <cstdlib>
#include "deleteduplicates.hpp"
#include <exception>
#include <iostream>
#include <iterator>
#include <vector>

int main(int, char *argv[]) {
    int returnCode = EXIT_FAILURE;
    try
    {
        std::vector<int> sample = { 3, 2, 3, 5, 1, 4, 3, 9, 8, 7, 6};

        std::cout << "Input" << std::endl;
        std::copy(sample.begin(), sample.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;

        auto out = deleteDuplicates(sample.begin(), sample.end());
       
        std::cout << "Output" << std::endl;
        std::copy(out, sample.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;
        returnCode = EXIT_SUCCESS;
    } catch (const std::exception &ex) {
        std::cerr << argv[0] << ": Exception " << ex.what() << std::endl;
    }
    return returnCode;
}


