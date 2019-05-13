#ifndef __EVENT_HPP__
#define __EVENT_HPP__

#include <iostream>
#include <boost/statechart/event.hpp>

#include "../header/def.hpp"

class config_ev : public bsc::event<config_ev> {
public:
	config_ev() { CONSTRUCTOR_PRINT; }
	~config_ev() { DECONSTRUCTOR_PRINT; }
};

class shutter_half_ev : public bsc::event<shutter_half_ev> {
public:
	shutter_half_ev() { CONSTRUCTOR_PRINT; }
	~shutter_half_ev() { DECONSTRUCTOR_PRINT; }
};

class shutter_full_ev : public bsc::event<shutter_full_ev> {
public:
	shutter_full_ev() { CONSTRUCTOR_PRINT; }
	~shutter_full_ev() { DECONSTRUCTOR_PRINT; }
};

class shutter_release_ev : public bsc::event<shutter_release_ev> {
public:
	shutter_release_ev() { CONSTRUCTOR_PRINT; }
	~shutter_release_ev() {}
};

class focus_ev : public bsc::event<focus_ev> {
public:
	focus_ev() { CONSTRUCTOR_PRINT; }
	~focus_ev() { DECONSTRUCTOR_PRINT; }
};

#endif
