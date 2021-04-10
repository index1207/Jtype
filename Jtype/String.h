#pragma once
#ifndef __JTYPE_STRING__
#define __JTYPE_STRING__

#include <iostream>

using namespace std;

using byte = char;

namespace Jtype {
	class String {
	public:
		String(void) {
			m_str = new char;
			empty = true;
		}

		String(const char* str) {
			m_str = new char[strlen(str) + 1];

			if (str == "") {
				this->empty = true;
			}
			else {
				strcpy(m_str, str);
				this->empty = false;
			}
		}

		~String(void) {
			delete[] m_str;
		}
	public:
		bool isEmpty(void) const {
			return this->empty;
		}
		char charAt(size_t idx) const {
			return m_str[idx];
		}
		size_t length(void) const {
			return strlen(m_str);
		}

		int codePointAt(size_t idx) const {
			return static_cast<int>(this->m_str[idx]);
		}

		int codePointBefore(size_t idx) const {
			return codePointAt(idx - 1);
		}

		int codePointCount(size_t beginIdx, size_t endIdx) {

		}
		int compareTo(String& anotherString) {

		}
	public:
		operator const char* () {
			return const_cast<const char*>(m_str);
		}
		void operator=(const char* s) {
			strcpy(this->m_str, s);
		}
		bool operator==(const char* str) {
			if (strcmp(this->m_str, str) == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		bool operator==(String& r_str) {
			if (strcmp(this->m_str, r_str.m_str) == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		char operator[](size_t idx) {
			return m_str[idx];
		}
		void operator+=(String& rStr) {
			strcat(this->m_str, rStr.m_str);
		}
		void operator+=(const char* rStr) {
			size_t buf = strlen(rStr) + strlen(m_str) + 1;

			char* tmp = (char*)realloc(m_str, buf);

			if (tmp != nullptr) {
				m_str = tmp;
			}

			strcat_s(m_str, buf, rStr);
		}
	private:
	
	private:
		char* m_str;
		bool empty = true;
	};
}
#endif