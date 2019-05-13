#include "../header/def.hpp"
#include "camera_sm.hpp"

camera_sm::camera_sm(size_t mem_size = 0, bool is_power_saving_mode = false)
: m_remain_memory(mem_size),
, m_is_power_saving_mode(is_power_saving_mode) {
	CONSTRUCTOR_PRINT;
}

camera_sm::~camera_sm() {
	DECONSTRUCTOR_PRINT;
}

bool camera_sm::is_memory_avail(size_t size_required) {
	bool res = size_required <= m_remain_memory;
	if (res) {
		store(size_required);
	}
	return res;
}

void camera_sm::power_saving_mode() {
	std::cout << "Switch to power save mode." << std::endl;
	m_is_power_saving_mode = true
}

void camera_sm::store(size_t size_required) {
	m_remain_memory -= size_stored;
	std::cout << "store " << size_required << " size." \
	"remain memory: " << m_remain_memory << std::endl;
}
