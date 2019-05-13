#pragma once

#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/custom_reaction.hpp>

#include "../../header/def.hpp"
#include "../../event/event.hpp"
#include "../camera_sm.hpp"

class idle_st;

class not_shooting : public bsc::simple_state<not_shooting, camera_sm, idl_st> {
public:
	not_shooting();
	~not_shooting();

	typedef bsc::custom_reaction<config_ev> reactions;
	bsc::result react(const config_ev &evt);
};
