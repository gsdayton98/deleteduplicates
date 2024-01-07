// -*- mode: c++ -*-
////
// @copyright 2024 Glen S. Dayton.  All rights reserved.
//  @author Glen S. Dayton
//
//  Test implementation of deleteDuplicates function,
//
//  @param argc The number of elements in the argv array
//  @param argv The command line arguments passed to the
//              application.
//
//  Run Boost_Tests_Run --help to see command line arguments,
//
//  @return Completion code, typically 0 for success
#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedMacroInspection"
#define BOOST_TEST_MODULE test_deleteDuplicates_suite
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN  // in only one cpp file
#pragma clang diagnostic pop

#include <boost/test/unit_test.hpp>
#include "deleteduplicates.hpp"


BOOST_AUTO_TEST_SUITE(test_deleteDuplicates_suite)

    BOOST_AUTO_TEST_CASE(test_deleteDuplicates)
    {
        std::vector<int> sample = { 3, 2, 3, 5, 1, 4, 3, 9, 8, 7, 6};
        std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        auto out = deleteDuplicates(sample.begin(), sample.end());

        BOOST_CHECK_EQUAL_COLLECTIONS(expected.begin(), expected.end(), out, sample.end());
    }

    BOOST_AUTO_TEST_CASE(test_deleteDuplicates_empty_case)
    {
        std::vector<int> sample;
        std::vector<int> expected;

        auto out = deleteDuplicates(sample.begin(), sample.end());

        BOOST_CHECK_EQUAL_COLLECTIONS(expected.begin(), expected.end(), out, sample.end());
    }

    BOOST_AUTO_TEST_CASE(test_deleteDuplicates_all_duplicates)
    {
        std::vector<int> sample = {2, 2, 2, 2, 2, 2};
        std::vector<int> expected = {2};

        auto out = deleteDuplicates(sample.begin(), sample.end());

        BOOST_CHECK_EQUAL_COLLECTIONS(expected.begin(), expected.end(), out, sample.end());
    }

BOOST_AUTO_TEST_SUITE_END()
