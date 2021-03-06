#pragma once

#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/custom_reaction.hpp>

#include "../../header/def.hpp"
#include "../../event/event.hpp"
#include "../camera_sm.hpp"

class storing_st : public bsc::simple_state<storing_st, shooting_st> {
public:
	storing_st();
	~storing_st();

	typedef bsc::custom_reaction<shutter_full_ev> reactions;
	bsc::result react(const shutter_full_ev &evt);
};
