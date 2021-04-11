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
		Byte(void) {
			m_byte = new __int8(0);
		}
		Byte(int num) {
			m_byte = new __int8(num);
		}
		~Byte(void) {
			delete m_byte;
		}
	public:
		operator int() {
			return *m_byte;
		}
	public:
		static int MAX_VALUE;
		static int MIN_VALUE;
	private:
		__int8* m_byte;
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