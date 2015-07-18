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

enum class megabool {
    megatrue,
    megafalse,
    megamaybe,
    megaultra
};

struct ultrabool {
    template <class T>
    ultrabool(T &&) {
    }
};

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

bool
operator==(ultrabool a, ultrabool b) {
    return darkurza_bool();
}

#endif
