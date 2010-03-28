/*
 * bowling_score_test.cc
 *
 *  Created on: Mar 28, 2010
 *      Author: thenrio
 */
#include "bowling_score.h"
#include <gtest/gtest.h>

TEST(bowling_score, allGuttersShouldScore0) {
	vector<int> allGutters(10);
	ASSERT_EQ(0, score(allGutters));
}
