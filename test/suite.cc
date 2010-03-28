/*
 * test_suite.cc
 *
 *  Created on: Mar 28, 2010
 *      Author: thenrio
 */
#include <gtest/gtest.h>

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
