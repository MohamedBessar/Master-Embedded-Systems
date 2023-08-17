/*
 * state.h
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#ifndef STATE_H_
#define STATE_H_

#define STATE_DEFINE(_statefunc_) void ST_##_statefunc_()
#define STATE(_statefunc_) ST_##_statefunc_

#endif /* STATE_H_ */
