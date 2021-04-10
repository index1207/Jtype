#pragma once
#ifndef __JTYPE__
#define __JTYPE__

#include <iostream>

using namespace std;

namespace Jtype {
	using byte = char;
	using uint = unsigned int;

	class String {
	public: // 持失切
		String(void) = default;

		String(const char* str) {
			m_str = new char[strlen(str) + 1];
			*m_str = *str;
		}

		~String(void) {
			delete[] m_str;
		}
	public: // 五社球
		char charAt(uint idx) {
			return m_str[idx];
		}

		int codePointAt(uint idx) {
			return static_cast<int>(this->m_str[idx]);
		}

		int codePointBefore(uint idx) {
			codePointAt(idx - 1);
		}

		int codePointCount(uint beginIdx, uint endIdx) {

		}

		int compareTo(String& anotherString) {

		}
	public:
		operator const char*() {
			return const_cast<const char*>(m_str);
		}
		void operator+(const char* adding_str) {
			strcat(m_str, adding_str);
		}
	private:
		char* m_str;
	};

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