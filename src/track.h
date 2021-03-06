#pragma once

#include <string>

namespace memory {
    void set_scope(std::string s);
    void init();
    void track(void* addr, size_t size);
    void release(void* addr);
}