#ifndef __CAMERA_SM_HPP__
#define __CAMERA_SM_HPP__

#include <cstddef>
#include <boost/statechart/state_machine.hpp>

class not_shooting_st;

class camera_sm : public bsc::state_machine<camera_sm, not_shooting_st> {
public:
	camera_sm();
	~camera_sm();

	bool is_memory_avail(size_t size_required);
	void power_saving_mode();

private:
	void store(size_t size_required);

private:
	size_t m_remain_memory;
	bool m_is_power_memory_mode;
};

#endif
