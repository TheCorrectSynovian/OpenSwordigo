/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E6EC
 * Mangled: _ZN10__cxxabiv120__si_class_type_infoD2Ev
 * Demangled: __cxxabiv1::__si_class_type_info::~__si_class_type_info()
 *
 * Callers: 1
 *   0x00000000001FC660  __cxxabiv1::__si_class_type_info::~__si_class_type_info()
 *
 * Callees: 1
 *   0x00000000002034B0  __cxxabiv1::__class_type_info::~__class_type_info()
 *
 * Referenced strings: 3
 *   insn=0x000000000051E6EC string=0x000000000051E6F0 "!"
 *   insn=0x000000000051E6F0 string=0x000000000051E6F4 "!@"
 *   insn=0x000000000051E6F8 string=0x000000000051E6FC "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__cxxabiv1::__si_class_type_info *this)
{
  *(_QWORD *)this = off_6D99E0;
  __cxxabiv1::__class_type_info::~__class_type_info(this);
}

