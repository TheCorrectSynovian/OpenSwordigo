/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E9E0
 * Mangled: _ZN10__cxxabiv121__vmi_class_type_infoD2Ev
 * Demangled: __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
 *
 * Callers: 1
 *   0x00000000001F9580  __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
 *
 * Callees: 1
 *   0x00000000002034B0  __cxxabiv1::__class_type_info::~__class_type_info()
 *
 * Referenced strings: 2
 *   insn=0x000000000051E9E0 string=0x000000000051E9E4 "!"
 *   insn=0x000000000051E9E4 string=0x000000000051E9E8 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__cxxabiv1::__vmi_class_type_info *this)
{
  *(_QWORD *)this = off_6D9A70;
  __cxxabiv1::__class_type_info::~__class_type_info(this);
}

