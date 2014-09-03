// CPUID.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CPUIDDetail/BasicCPU0.h"
#include "CPUIDDetail/BasicCPU1.h"

class CCPUInfo
{
public:
	CCPUInfo();


public:
	CBasicCPU0 * _basiccpu0;
	CBasicCPU1 * _basiccpu1;

};
CCPUInfo::CCPUInfo()
{
	_basiccpu0 = new CBasicCPU0;
	_basiccpu1 = new CBasicCPU1();
}


int _tmain(int argc, _TCHAR* argv[])
{
	CCPUInfo cpu;
	cout<< cpu._basiccpu0->dump()<<endl;
	cout<< cpu._basiccpu1->dump()<<endl;
	return 0;
}

