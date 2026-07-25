/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E5D0
 * Mangled: _ZN10__cxxabiv119__pointer_type_infoD0Ev
 * Demangled: __cxxabiv1::__pointer_type_info::~__pointer_type_info()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3870  __cxxabiv1::__pointer_type_info::~__pointer_type_info()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 3
 *   insn=0x000000000051E5E0 string=0x00000000001F3870 "P'"
 *   insn=0x000000000051E5EC string=0x000000000051E5F0 "0c"
 *   insn=0x000000000051E5F0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__pointer_type_info::~__pointer_type_info(__cxxabiv1::__pointer_type_info *this)
{
  __cxxabiv1::__pointer_type_info::~__pointer_type_info(this);
  operator delete(this);
}

