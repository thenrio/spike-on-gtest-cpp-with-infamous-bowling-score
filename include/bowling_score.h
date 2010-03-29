/*
 * bowling_score.h
 *
 *  Created on: Mar 28, 2010
 *      Author: thenrio
 */

#ifndef BOWLING_SCORE_H_
#define BOWLING_SCORE_H_

#include <vector>
using namespace std;

int score(const vector<int>& throws);

bool is_strike(int a_throw);

bool is_spare(int first, int second);

#endif /* BOWLING_SCORE_H_ */
