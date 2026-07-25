/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E5BC
 * Mangled: _ZN10__cxxabiv119__pointer_type_infoD2Ev
 * Demangled: __cxxabiv1::__pointer_type_info::~__pointer_type_info()
 *
 * Callers: 1
 *   0x00000000001F3870  __cxxabiv1::__pointer_type_info::~__pointer_type_info()
 *
 * Callees: 1
 *   0x00000000001F6720  __cxxabiv1::__pbase_type_info::~__pbase_type_info()
 *
 * Referenced strings: 4
 *   insn=0x000000000051E5BC string=0x000000000051E5C0 "!"
 *   insn=0x000000000051E5C0 string=0x000000000051E5C4 "!@"
 *   insn=0x000000000051E5C8 string=0x000000000051E5CC "U`"
 *   insn=0x000000000051E5CC string=0x00000000001F6720 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__pointer_type_info::~__pointer_type_info(__cxxabiv1::__pointer_type_info *this)
{
  *(_QWORD *)this = off_6D9970;
  __cxxabiv1::__pbase_type_info::~__pbase_type_info(this);
}

