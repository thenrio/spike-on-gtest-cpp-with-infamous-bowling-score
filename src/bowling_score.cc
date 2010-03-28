/*
 * bowling_score.cc
 *
 *  Created on: Mar 28, 2010
 *      Author: thenrio
 */
#include "bowling_score.h"
#include <numeric>
using std::accumulate;

int score(const vector<int>& throws) {
	return accumulate(throws.begin(), throws.end(), 0);
}

bool is_strike(int a_throw) {
	return true;
}
