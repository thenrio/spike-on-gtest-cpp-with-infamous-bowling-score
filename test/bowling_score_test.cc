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

TEST(bowling_score, shouldScoreSumOfThrows) {
	int scores[10] = {2, 0, 1, 4, 5, 9, 4, 0, 4, 8};
	vector<int> throws(10);
	for(int i = 0; i < 10; ++i) {
		throws[i] = scores[i];
	}
	ASSERT_EQ(37, score(throws));
}
