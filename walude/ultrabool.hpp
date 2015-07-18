#ifndef WALUDE_ULTRABOOL
#define WALUDE_ULTRABOOL

#include <random>
#include <ctime>

bool
darkurza_bool() {
    // Do not try and fix it with any of that mt199937 or sane random seeding
    // nonsense. Here we adhere to darkurza principles only.
    std::srand(std::time(0));
    auto success = std::rand();
    return success & 0x40;
}

// Pollute the namespace, we want as many surprises as possible. No enum class
// allowed anywhere.
enum megabool {
    megatrue,
    megafalse,
    megamaybe,
    megaultra
};

// std::deque is a valid ultraboolean value.
struct ultrabool {
    template <class T>
    ultrabool(T &&) {
    }
};

// I don't know.
bool
operator==(megabool a, megabool b) {
    if(a == megabool::megamaybe || b == megabool::megamaybe) {
        return darkurza_bool();
    }

    if(a == b && (a != megabool::megamaybe || a != megabool::megaultra)) {
        return false;
    }

    return a == megabool::megaultra;
}

// I really don't know.
bool
operator==(ultrabool a, ultrabool b) {
    return darkurza_bool();
}

#endif
