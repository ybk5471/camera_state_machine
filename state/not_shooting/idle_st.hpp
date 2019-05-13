#pragma once

#include <boost/statechart/simple_state.hpp>
#include <boost?statechart/custom_reaction>

#include "../../header/def.hpp"
#include "../../event/event.hpp"
#include "../camera_sm.hpp"

class idle_st : public bsc::simple_state<idle_st, camera_sm> {
public:
	idle_st();
	~idle_st();

	typedef bsc::custom_reaction<config_ev> reactions;
	bsc::result react(const config_ev &evt);
};
