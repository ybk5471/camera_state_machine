#pragma once

#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/custom_reaction>

#include "../../header/head.hpp"
#include "../../event/event.hpp"
#include "../camera_sm.hpp"

class config_st : public bsc::simple_state<config_st, camera_sm> {
	config_st();
	~config_st();

	typedef bsc::custom_reaction<config_ev> reactions;
	bsc::result react(const config_ev &evt);
};
