#pragma once

#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/custom_reaction>

#include "../../header/def.hpp"
#include "../../event/event.hpp"
#include "../camera_sm.hpp"

class focusing_st;

class shooting_st : public bsc::simple_state<shooting_st, camera_sm, focusing_st> {
public:
	focusing_st();
	~focusing_st();

	typedef bsc::custom_reaction<shutter_half_ev> reactions;
	bsc::result react(const shutter_half_ev &evt);
};
