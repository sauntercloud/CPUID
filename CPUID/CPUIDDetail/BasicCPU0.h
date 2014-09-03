#pragma once
class CBasicCPU0
{
public:
	CBasicCPU0();

public:
	bool isIntelCPU();
	bool isAMDCPU();
	int maxLevelSupport();
	string cupVendor();

	string dump();
private:
	int _maximumlevel;
	char _vendorid[13];
	bool _isIntel;
	bool _isAMD;
};