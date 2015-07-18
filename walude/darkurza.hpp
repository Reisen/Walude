#ifndef WALUDE_DARKURZA
#define WALUDE_DARKURZA

#include <deque>
#include <algorithm>

template <class T>
class darkurza : public std::deque<T> {
    public:
        void
        chainmail(std::deque<T> const& o) {
            this->insert(this->end(), o.begin(), o.end());
        }

        std::deque<char>
        forge() {
            return {'S', 'W', 'O', 'R', 'D'};
        }
};

#endif
