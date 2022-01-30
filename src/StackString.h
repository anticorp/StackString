/*
 Name:		StackString.h
 Created:	1/29/2022 11:05:27 PM
 Author:	Robert
 Editor:	http://www.visualmicro.com
*/

#ifndef _StackString_h
#define _StackString_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

namespace ststr
{
	class STRING8
	{
	public:
		STRING8() {}
		STRING8(char c);
		const char* ChArr();
		void Add(const char*);
		bool Append(char c);
		bool Reset();
		~STRING8();
		static int MaxStringSize() { return mMaxSize; }
		operator const char* () { return ChArr(); }
	private:
		static const int mMaxSize = 8;
		char chArr[mMaxSize] = { '\0' };
		char standIn = '\0';
		int count = 0;
	};
	class STRING16
	{
	public:
		STRING16() {}
		STRING16(char c);
		const char* ChArr();
		void Add(const char*);
		bool Append(char c);
		bool Reset();
		~STRING16();
		static int MaxStringSize() { return mMaxSize; }
		operator const char* () { return ChArr(); }
	private:
		static const int mMaxSize = 16;
		char chArr[mMaxSize] = { '\0' };
		char standIn = '\0';
		int count = 0;
	};		
}


#endif

