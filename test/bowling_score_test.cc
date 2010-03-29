/*
 * bowling_score_test.cc
 *
 *  Created on: Mar 28, 2010
 *      Author: thenrio
 */
#include "bowling_score.h"
#include <gtest/gtest.h>

void init(vector<int>& throws, int* values) {
	for(int i = 0; i < throws.size(); ++i) {
		throws[i] = values[i];
	}
}

TEST(score, allGuttersShouldScore0) {
	vector<int> allGutters(20);
	ASSERT_EQ(0, score(allGutters));
}

TEST(score, shouldScoreSumOfThrowsForRegularFrames) {
	vector<int> throws(20);
	init(throws, (int[]){2, 0, 0, 0, 1, 0, 4, 0, 0, 5,
			9, 0, 4, 0, 0, 0, 4, 0, 8, 0});
	ASSERT_EQ(37, score(throws));
}

TEST(score, strikeFrameShouldScore10Plus2NextThrows) {
	vector<int> throws(19);
	init(throws, (int[]){10, 7, 2, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
	ASSERT_EQ(28, score(throws));
}

TEST(score, spareFrameShouldScore10PlusNextThrow) {
	vector<int> throws(20);
	init(throws, (int[]){8, 2, 7, 2, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
	ASSERT_EQ(26, score(throws));
}

TEST(is_strike, throwOf10ShouldBeStrike) {
	ASSERT_TRUE(is_strike(10));
	ASSERT_FALSE(is_strike(2));
}

TEST(is_spare, sumOf10ShouldBeSpare) {
	ASSERT_TRUE(is_spare(8, 2));
	ASSERT_FALSE(is_spare(8, 1));
}
