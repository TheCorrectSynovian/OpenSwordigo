/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CA44
 * Mangled: _ZN10__cxxabiv117__class_type_infoD0Ev
 * Demangled: __cxxabiv1::__class_type_info::~__class_type_info()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202960  __cxxabiv1::__class_type_info::~__class_type_info()
 *
 * Referenced strings: 1
 *   insn=0x000000000051CA64 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__class_type_info::~__class_type_info(__cxxabiv1::__class_type_info *this)
{
  __cxxabiv1::__class_type_info::~__class_type_info(this);
  operator delete(this);
}

