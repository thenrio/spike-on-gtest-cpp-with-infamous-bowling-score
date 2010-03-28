/*
 * bowling_score_test.cc
 *
 *  Created on: Mar 28, 2010
 *      Author: thenrio
 */
#include "bowling_score.h"
#include <gtest/gtest.h>

TEST(bowling_score, allGuttersShouldScore0) {
	vector<int> allGutters(20);
	ASSERT_EQ(0, score(allGutters));
}

TEST(bowling_score, shouldScoreSumOfThrows) {
	int scores[20] = {2, 0, 0, 0, 1, 0, 4, 0, 0, 5,
			9, 0, 4, 0, 0, 0, 4, 0, 8, 0};
	vector<int> throws(20);
	for(int i = 0; i < 20; ++i) {
		throws[i] = scores[i];
	}
	ASSERT_EQ(37, score(throws));
}
