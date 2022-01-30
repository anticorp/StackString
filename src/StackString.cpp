/*
 Name:		StackString.cpp
 Created:	1/29/2022 11:05:27 PM
 Author:	Robert
 Editor:	http://www.visualmicro.com
*/

#include "StackString.h"

namespace ststr
{
	STRING16::STRING16(char c)
	{
		standIn = c;
	}
	const char* STRING16::ChArr()
	{
		if (count < 1)
		{
			return &standIn;
		}
		return chArr;
	}
	void STRING16::Add(const char* c)
	{
		int I = 0;
		while (true)
		{
			if (count >= mMaxSize) return;
			if (c[I] == '\0')
			{
				chArr[count] = '\0';
				return;
			}
			chArr[count] = c[I];
			I++;
			count++;
		}
	}
	bool STRING16::Append(char c)
	{
		if (count >= mMaxSize) return false;
		chArr[count] = c;
		count++;
		return true;
	}
	bool STRING16::Reset()
	{
		int I = 0;
		while (true)
		{
			chArr[I] = '\0';
			I = (I + 1) % (count + 1);
			if (!I) break;
		}
		count = 0;
		return false;
	}
	STRING16::~STRING16()
	{
		Reset();
	}
	STRING8::STRING8(char c)
	{
		standIn = c;
	}
	const char* STRING8::ChArr()
	{
		if (count < 1)
		{
			return &standIn;
		}
		return chArr;
	}
	void STRING8::Add(const char* c)
	{
		int I = 0;
		while (true)
		{
			if (count >= mMaxSize) return;
			if (c[I] == '\0')
			{
				chArr[count] = '\0';
				return;
			}
			chArr[count] = c[I];
			I++;
			count++;
		}
	}
	bool STRING8::Append(char c)
	{
		if (count >= mMaxSize) return false;
		chArr[count] = c;
		count++;
		return true;
	}
	bool STRING8::Reset()
	{
		int I = 0;
		while (true)
		{
			chArr[I] = '\0';
			I = (I + 1) % (count + 1);
			if (!I) break;
		}
		count = 0;
		return false;
	}
	STRING8::~STRING8()
	{
		Reset();
	}
}
