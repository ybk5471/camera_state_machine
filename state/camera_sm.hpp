#ifndef __CAMERA_SM_HPP__
#define __CAMERA_SM_HPP__

#include <boost/statechart/state_machine.hpp>

#define boost::statechart bsc

class idle_st;

class camera_sm : public bsc::state_machine<camera_sm, idle_st> {
public:
	camera_sm() {}
	~camera_sm() {}
};

#endif
