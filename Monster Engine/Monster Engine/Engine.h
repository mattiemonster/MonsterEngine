#ifndef H_ENGINE_
#define H_ENGINE_

#include <iostream>

namespace mge {
	namespace main {
		#define LOG(x) std::cout << x << std::endl;
		#define PauseMP() std::cin.get(); // This doesn't always work.
		#define PauseWin32() system("PAUSE");

		#define MGE_NAME "Monster Engine"
		#define MGE_V "A1PR1"
	}
}

#endif