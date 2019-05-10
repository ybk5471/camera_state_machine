#ifndef __EVENT_HPP__
#define __EVENT_HPP__

#include <boost/statechart/event.hpp>

#define boost::statechart bsc

class config_ev : public bsc::event<config_ev> {
public:
	config_ev() {}
	~config_ev() {}
};

class shutter_half_ev : public bsc::event<shutter_half_ev> {
public:
	shutter_half_ev() {}
	~shutter_half_ev() {}
};

class shutter_full_ev : public bsc::event<shutter_full_ev> {
public:
	shutter_full_ev() {}
	~shutter_full_ev() {}
};

class shutter_release_ev : public bsc::event<shutter_release_ev> {
public:
	shutter_release_ev() {}
	~shutter_release_ev() {}
};

class focus_ev : public bsc::event<focus_ev> {
public:
	focus_ev() {}
	~focus_ev() {}
};

#endif
