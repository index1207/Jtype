#pragma once
#ifndef __JTYPE__
#define __JTYPE__

#include <iostream>

#include "Jtype/String.h"

using namespace std;

namespace Jtype {
	using byte = char;
	using uint = unsigned int;

	class Byte {
	public:
		static int MAX_VALUE;
		static int MIN_VALUE;
	};
	
	class Short {
	public:
		static int MAX_VALUE;
		static int MIN_VALUE;
	};

	class Integer {
	public:
		static int MAX_VALUE;
		static int MIN_VALUE;
	};
}


#endif // !__JTYPE__