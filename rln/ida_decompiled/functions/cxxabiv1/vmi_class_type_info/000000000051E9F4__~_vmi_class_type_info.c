/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E9F4
 * Mangled: _ZN10__cxxabiv121__vmi_class_type_infoD0Ev
 * Demangled: __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9580  __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
 *
 * Referenced strings: 3
 *   insn=0x000000000051EA04 string=0x00000000001F9580 "0'"
 *   insn=0x000000000051EA10 string=0x000000000051EA14 "'b"
 *   insn=0x000000000051EA14 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__cxxabiv1::__vmi_class_type_info *this)
{
  __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(this);
  operator delete(this);
}

