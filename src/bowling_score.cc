/*
 * bowling_score.cc
 *
 *  Created on: Mar 28, 2010
 *      Author: thenrio
 */
#include "bowling_score.h"

int score(const vector<int>& throws) {
	int score = 0;
	for (int frame = 0, current_throw = 0; frame < 10; ++frame) {
		score += throws[current_throw] + throws[current_throw+1];
		bool strike = is_strike(throws[current_throw]);
		if(strike) {
			score += throws[current_throw+2];
			current_throw += 1;
		}
		else {
			current_throw += 2;
		}
	}
	return score;
}

bool is_strike(int a_throw) {
	return (a_throw == 10);
}
