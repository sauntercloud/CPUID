#pragma once
/*
EAX:
     31    28 27            20 19    16 1514 1312 11     8 7      4 3      0
	+--------+----------------+--------+----+----+--------+--------+--------+
	|########|Extended family |Extmodel|####|type|familyid|  model |stepping|
	+--------+----------------+--------+----+----+--------+--------+--------+

EBX:
	 31            24 23            16 15             8 7              0
	+----------------+----------------+----------------+----------------+
	| Initial APIC ID|LogicalProcessor|CLFLUSHLineSize |   Brand Index  |
	+----------------+----------------+----------------+----------------+

ECX:
	 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9  8  7  6  5  4  3  2  1  0
	+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
	|##|RD|FF|AX|OS|XS|AE|TS|PO|MO|X2|F2|F1|DC|PI|##|PD|XT|CX|FM|SD|L1|E3|T2|ES|SX|VM|CP|MN|DT|PC|S3|
	+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+


	RD - (add)RDRAND				RDRAND—Read Random Number
	FF - (add)F16C					half-precision convert instruction support
	AX - (add)AVX					AVX—Advanced Vector Extension
	OS - (add)OSXSAVE				XSAVE/XRSTOR—Enabled in the OS
	XS - (add)XSAVE:				XSAVE/XRSTOR—Extensions
	AE - (add)AES					AES Instructio
	TS - (add)TSCD					local APIC supports one-shot operation using TSC deadline value
	PO - (add)POPCNT				Pop Count Instruction
	MO - (add)MOVBE					MOVBE Instruction
	X2 - (add)X2APIC				Extended xAPIC Support
	F2 - (add)SSE4_2				SSE4.2 Extensions
	F1 - (add)SSE4_1				SSE4.1 Extensions
	DC - (add)DCA					Direct Cache Access 
	PI - (add)PCID					Process Context Identifiers
	PD - (add)PDCM					Perf/Debug Capability MSR
	XT - (add)xTPR					xTPR Update Control. Can disable sending Task Priority messages
	CX - (add)CX16					CMPXCHG16B Available
	FM - (add)FMA					Fused Multiply Add
	SD - (add)SDBG					DEBUG_INTERFACE MSR for silicon debug
	L1 - (add)CID					L1 Context ID
	E3 - (add)SSSE3					Supplemental SSE3
	T2 - (add)TM2					Thermal Monitor 2 supported
	ES - (add)EST					Enhanced SpeedStep Technology
	SX - (add)SMX					Safer Mode Extensions
	VM - (add)VMX					Virtual Machine Extensions
	CP - (add)DS_CPL				CPL-qualified debug store
	MN - (add)MONITOR				MONITOR/MWAIT
	DT - (add)DTES64				64-bit Debug Store
	PC - (add)PCLMULQDQ				Carryless Multiplication
	S3 - (add)PNI					SSE3 Extensions

EDX:
	 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1  0   
	+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
	|PB|IA|TM|HT|SS|S2|S1|FX|MM|AC|DS|##|CF|PN|P3|PT|CM|MC|PG|MT|SE|##|AP|CX|ME|PA|MS|TS|PS|DE|V8|FP|
	+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+

	PB - PBE		Pending Break Enable
	IA - IA64		IA-64 Processor 
	TM - TM			Thermal Monitor
	HT - HT			Hyperthreading
	SS - SS			Self-Snoop
	S2 - SSE2		SSE2 extensions
	S1 - SSE		SSE extensions
	FX - FXSR		FXSAVE/FXRSTOR instructions
	MM - MMX		MMX instructions
	AC - ACPI		Thermal Monitor and Clock Ctrl
	DS - DTS		Debug Store
	CF - CLFLUSH	CFLUSH instruction
	PN - PN			Processor serial number
	P3 - PSE36		Page Size Extension 36-bit
	PT - PAT		Page attribute table
	CM - CMOV		Conditional move/compare instruction
	MC - MCA		Machine Check Architecture
	PG - PGE		Page Global Enable
	MT - MTRR		Memory Type Range Registers
	SE - SEP		Fast System Call instructions, SYSENTER and SYSEXIT
	AP - APIC		APIC(Advanced Programmable Interrupt Controller) On-Chip
	CX - CX8		CMPXCHG8B Instruction Supported
	ME - MCE		Machine Check Exception
	PA - PAE		Physical Address Extension
	MS - MSR		Model Specific Registers RDMSR and WRMSR Instructions
	TS - TSC		TimeStamp Counter
	PS - PSE		Page Size extensions
	DE - DE			Debugging extensions
	V8 - VME		Virtual Mode Enhancements
	FP - FPU		Floating-point unit on-chip
*/


#define IDS_PROCESSOR_00B "Original OEM processor\0"
#define IDS_PROCESSOR_01B "Intel Overdrive ® processor\0"
#define IDS_PROCESSOR_10B "Dual processor\0"
#define IDS_PROCESSOR_11B "Intel reserved\0"


#define IDS_BRAND_INDEX_UNK "\0"
#define IDS_BRAND_INDEX_00H IDS_BRAND_INDEX_UNK
#define IDS_BRAND_INDEX_01H "Intel ® Celeron ® processor\0"
#define IDS_BRAND_INDEX_02H "Intel ® Pentium ® III processor\0"
#define IDS_BRAND_INDEX_03H "Intel ® Pentium ® III Xeon(tm) processor\nIntel ® Celeron ® processor\0"
#define IDS_BRAND_INDEX_04H "Intel ® Pentium ® III processor\0"
#define IDS_BRAND_INDEX_05H IDS_BRAND_INDEX_UNK
#define IDS_BRAND_INDEX_06H "Mobile Intel ® Pentium ® III processor-M\0"
#define IDS_BRAND_INDEX_07H "Mobile Intel ® Celeron ® processor\0"
#define IDS_BRAND_INDEX_08H "Intel ® Pentium ® 4 processor\0"
#define IDS_BRAND_INDEX_09H "Intel ® Pentium ® 4 processor\0"
#define IDS_BRAND_INDEX_0AH "Intel ® Celeron ® processor\0"
#define IDS_BRAND_INDEX_0BH "Intel ® Xeon(tm) processor\nIntel ® Xeon(tm) processor MP\0"
#define IDS_BRAND_INDEX_0CH "Intel ® Xeon(tm) processor MP\0"
#define IDS_BRAND_INDEX_0DH IDS_BRAND_INDEX_UNK
#define IDS_BRAND_INDEX_0EH "Mobile Intel ® Pentium ® 4 processor\nIntel ® Xeon(tm) processor\0"
#define IDS_BRAND_INDEX_0FH "Mobile Intel ® Celeron ® processor\0"
#define IDS_BRAND_INDEX_10H IDS_BRAND_INDEX_UNK
#define IDS_BRAND_INDEX_11H "Mobile Genuine Intel ® processor\0"
#define IDS_BRAND_INDEX_12H "Intel ® Celeron ® M processor\0"
#define IDS_BRAND_INDEX_13H "Mobile Intel ® Celeron ® processor\0"
#define IDS_BRAND_INDEX_14H "Intel ® Celeron ® processor\0"
#define IDS_BRAND_INDEX_15H "Mobile Genuine Intel ® processor\0"
#define IDS_BRAND_INDEX_16H "Intel ® Pentium ® M processor\0"
#define IDS_BRAND_INDEX_17H "Mobile Intel ® Celeron ® processor\0"


typedef union {
	struct {
		UINT SteppingID:4;         // 3..0
		UINT ModelID:4;            // 7..4
		UINT FamilyID:4;           // 11..8
      UINT ProcessorType:2;      // 13..12
      UINT Reserved2:2;          // 15..14
		UINT ExtendedModel:4;      // 19..16
		UINT ExtendedFamily:8;     // 27..20
		UINT Reserved:4;           // 31..28
	} CPU;
	UINT w;
} EAX1;

typedef union {
	struct { // low order
		UINT BrandIndex:8;
		UINT CLFLUSHLineSize:8;
		UINT LogicalProcessors:8;
		UINT InitialAPICID:8;
	} bits;  // high order
	UINT w;
} EBX1;

typedef union {
	struct { // low order
		UINT PNI:1;					// 0
		UINT PCLMULQDQ:1;			// 1
		UINT DTES64:1;				// 2
		UINT MONITOR:1;				// 3
		UINT DSCPL:1;				// 4
		UINT VMX:1;					// 5
		UINT SMX:1;					// 6 
		UINT EST:1;					// 7
		UINT TM2:1;					// 8
		UINT SSSE3:1;				// 9
		UINT CID:1;					// 10
		UINT SDBG:1;				// 11
		UINT FMA:1;					// 12
		UINT CX16:1;				// 13
		UINT xTPR:1;				// 14
		UINT PDCM:1;				// 15;
		UINT Reserved1:1;           // 16 
		UINT PCID:1;				// 17
		UINT DCA:1;					// 18
		UINT SSE4_1:1;				// 19
		UINT SSE4_2:1;				// 20
		UINT X2APIC:1;				// 21
		UINT MOVBE:1;				// 22
		UINT POPCNT:1;				// 23
		UINT TSCD:1;				// 24
		UINT AES:1;					// 25
		UINT XSAVE:1;				// 26
		UINT OSXSAVE:1;				// 27
		UINT AVX:1;					// 28
		UINT F16C:1;				// 29
		UINT RDRAND:1;				// 30
		UINT Reserved2:1;			// 31
	} CPU;  // high order
	UINT w;
} ECX1;

typedef union {
	struct { // low order
		UINT FPU:1;                  // 0
		UINT VME:1;                  // 1
		UINT DE:1;                   // 2
		UINT PSE:1;                  // 3
		UINT MSR:1;                  // 4
		UINT TSC:1;                  // 5
		UINT PAE:1;                  // 6
		UINT MCE:1;                  // 7
		UINT CX8:1;                  // 8
		UINT APIC:1;                 // 9
		UINT reserved1:1;            // 10
		UINT SEP:1;                  // 11
		UINT MTRR:1;                 // 12
		UINT PGE:1;                  // 13
		UINT MCA:1;                  // 14
		UINT CMOV:1;                 // 15
		UINT PAT:1;                  // 16
		UINT PSE36:1;                // 17     
		UINT PSN:1;                  // 18
		UINT CLFSH:1;                // 19     
		UINT Reserved2:1;            // 20
		UINT DS:1;                   // 21
		UINT ACPI:1;                 // 22
		UINT MMX:1;                  // 23
		UINT FXSR:1;                 // 24
		UINT SSE:1;                  // 25
		UINT SSE2:1;                 // 26     
		UINT SS:1;                   // 27
		UINT HTT:1;                  // 28     
		UINT TM:1;                   // 29
		UINT IA64:1;				// 30
		UINT PBE:1;                  // 31
	} CPU;  // high order
	UINT w;
} EDX1;


#define DEFINE_SUPPORT_FUNCTION_DECLEAR(FUNCTION) \
	bool isSupport##FUNCTION(); \
	string desc##FUNCTION();
#define DEFINE_SUPPORT_FUNCTION_IMPLEMENT(REG,FUNCTION,DESC) \
	bool CBasicCPU1::isSupport##FUNCTION() \
	{ \
		return (bool)REG##.CPU.##FUNCTION; \
	};  \
	string CBasicCPU1::desc##FUNCTION() \
	{ \
		return DESC; \
	};

class CBasicCPU1
{
public:
	CBasicCPU1();
//eax
	int steppingID();
	int baseModelID();
	int baseFamilyID();
	int modelID();
	int familyID();
	string processorTypeName();
//ebx
	string brandName();
	int clflush();
	int logicalProcessors();
	int initialAPICID();
//ecx
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PNI)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PCLMULQDQ)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(DTES64)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(MONITOR)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(DSCPL)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(VMX)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SMX)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(EST)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(TM2)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SSSE3)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(CID)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SDBG)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(FMA)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(CX16)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(xTPR)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PDCM)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PCID)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(DCA)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SSE4_1)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SSE4_2)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(X2APIC)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(MOVBE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(POPCNT)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(TSCD)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(AES)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(XSAVE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(OSXSAVE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(AVX)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(F16C)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(RDRAND)

//edx
	DEFINE_SUPPORT_FUNCTION_DECLEAR(FPU)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(VME)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(DE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PSE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(TSC)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(MSR)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PAE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(MCE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(CX8)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(APIC)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SEP)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(MTRR)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PGE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(MCA)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(CMOV)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PAT)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PSE36)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PSN)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(CLFSH)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(DS)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(ACPI)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(MMX)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(FXSR)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SSE)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SSE2)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(SS)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(HTT)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(TM)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(IA64)
	DEFINE_SUPPORT_FUNCTION_DECLEAR(PBE)


	string dump();
private:
	int _model;
	int _famliy;
	string _processortype;
	string _brandname;
private:
	EAX1 _eax;
	EBX1 _ebx;
	ECX1 _ecx;
	EDX1 _edx;
};