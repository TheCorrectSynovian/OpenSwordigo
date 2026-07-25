/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E20C
 * Mangled: _ZN10__cxxabiv120__function_type_infoD2Ev
 * Demangled: __cxxabiv1::__function_type_info::~__function_type_info()
 *
 * Callers: 1
 *   0x00000000001F8160  __cxxabiv1::__function_type_info::~__function_type_info()
 *
 * Callees: 1
 *   0x000000000051E970  nullsub_16
 *
 * Referenced strings: 2
 *   insn=0x000000000051E20C string=0x000000000051E210 "!DG"
 *   insn=0x000000000051E210 string=0x000000000051E214 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__function_type_info::~__function_type_info(__cxxabiv1::__function_type_info *this)
{
  *(_QWORD *)this = off_6D9090;
  nullsub_16();
}

