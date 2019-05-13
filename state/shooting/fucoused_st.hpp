#pragma once

#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/custom_reaction.hpp>

#include "../../header/def.hpp"
#include "../../event/event.hpp"
#include "../camera_sm.hpp"

class focused_st : public bsc::simple_state<focused_st, shooting_st> {
public:
	focused_st();
	~focused_st();

	typedef bsc::custom_reaction<focus_ev> reactions;
	bsc::result react(const focus_ev &evt);
};
