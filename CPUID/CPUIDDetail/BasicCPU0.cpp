#include "stdafx.h"
#include "BasicCPU0.h"
/*
	GenuineIntel 	Intel processor
	UMC UMC UMC  	UMC processor
	AuthenticAMD 	AMD processor
	CyrixInstead 	Cyrix processor
	NexGenDriven 	NexGen processor
	CentaurHauls 	Centaur processor
	RiseRiseRise 	Rise Technology processor
	SiS SiS SiS  	SiS processor
	GenuineTMx86 	Transmeta processor
	Geode by NSC 	National Semiconductor processor
*/
CBasicCPU0::CBasicCPU0()
{
	int cpuinfo[4];

	__cpuidex(cpuinfo,0,0);
	_maximumlevel = cpuinfo[0];
	*(int*)&_vendorid[0] = cpuinfo[1];
	*(int*)&_vendorid[4] = cpuinfo[3];
	*(int*)&_vendorid[8] = cpuinfo[2];
	*(int*)&_vendorid[12] = '\0';

	_isIntel = (0==stricmp(_vendorid,"GenuineIntel"));
	_isAMD = (0==stricmp(_vendorid,"AuthenticAMD"));
}
bool CBasicCPU0::isIntelCPU()
{
	return _isIntel;
}
bool CBasicCPU0::isAMDCPU()
{
	return _isAMD;
}
int CBasicCPU0::maxLevelSupport()
{
	return _maximumlevel;
}
string CBasicCPU0::cupVendor()
{
	return _vendorid;
}
string CBasicCPU0::dump()
{
	ostringstream oss;
	oss << "max value for basic cpu id:\t" << maxLevelSupport() <<endl;
	oss << "cpu vendor id:             \t" << cupVendor() <<endl;
	return oss.str();
}