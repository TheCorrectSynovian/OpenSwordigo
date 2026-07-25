/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E220
 * Mangled: _ZN10__cxxabiv120__function_type_infoD0Ev
 * Demangled: __cxxabiv1::__function_type_info::~__function_type_info()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8160  __cxxabiv1::__function_type_info::~__function_type_info()
 *
 * Referenced strings: 2
 *   insn=0x000000000051E230 string=0x00000000001F8160 "0'"
 *   insn=0x000000000051E240 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__function_type_info::~__function_type_info(__cxxabiv1::__function_type_info *this)
{
  __cxxabiv1::__function_type_info::~__function_type_info(this);
  operator delete(this);
}

