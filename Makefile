
build:
	echo -e '#include "walude.hpp"\nint main(){}' > walude.cpp
	g++ -c -std=gnu++17 -Wall -Werror -O2 walude.cpp -c
