#include "MathLog.h"

#include <iostream>

#define LOG(x) std::cout << x << std::endl;
#define PauseMP() std::cin.get();

namespace mge {
	namespace math {
		
		int returnAddTwo(int x, int y)
		{
			return x + y;
		}

		int returnAddTwo(int x, int y, bool log)
		{
			if (log == true) {
				std::cout << "The value of " << x << " + " << y << " is " << x + y << std::endl;
			}
			return x + y;
		}

	}
}