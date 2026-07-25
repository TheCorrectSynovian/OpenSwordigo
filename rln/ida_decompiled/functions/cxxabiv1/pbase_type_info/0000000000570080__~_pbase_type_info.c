/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570080
 * Mangled: _ZN10__cxxabiv117__pbase_type_infoD0Ev
 * Demangled: __cxxabiv1::__pbase_type_info::~__pbase_type_info()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7830  __cxxabiv1::__pbase_type_info::~__pbase_type_info()
 *
 * Referenced strings: 2
 *   insn=0x0000000000570090 string=0x00000000001F7830 "0'"
 *   insn=0x00000000005700A0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__pbase_type_info::~__pbase_type_info(__cxxabiv1::__pbase_type_info *this)
{
  __cxxabiv1::__pbase_type_info::~__pbase_type_info(this);
  operator delete(this);
}

