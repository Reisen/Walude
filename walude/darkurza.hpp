#ifndef WALUDE_DARKURZA
#define WALUDE_DARKURZA

#include <deque>
#include <algorithm>

class darkurza : public std::deque {
    public:
        void
        chainmail(std::deque const& o) {
            this->insert(this->end(), o.begin(), o.end());
        }

        std::deque<char>
        forge() {
            return {'S', 'W', 'O', 'R', 'D'};
        }
};

#endif
