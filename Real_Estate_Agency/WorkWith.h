#pragma once
#include<string> 
#include<istream>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
template<class T>
ref class WorkWith
{
public:
	virtual List<T^>^ read(String^ stream) = 0;

	static std::string tostring(String^ string);
};

template<class T>
inline std::string WorkWith<T>::tostring(String ^ msg)
{
	StreamWriter^ stream = nullptr;
	try {
		stream = gcnew StreamWriter("Temp.txt", false);
		stream->Write(msg);
	}
	finally{
			stream->Close();
	}
	std::ifstream sout;
	std::string str = "";
	try {
		sout.open("Temp.txt", std::ios::in);
		std::string tmp = "";
		while (!sout.eof())
		{
			sout >> tmp;
			str += tmp;
		}
	}
	finally{
		sout.close();
	}
	return str;
}
