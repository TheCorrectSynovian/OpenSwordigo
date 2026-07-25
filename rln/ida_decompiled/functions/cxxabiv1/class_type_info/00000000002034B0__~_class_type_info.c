/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002034B0
 * Mangled: ._ZN10__cxxabiv117__class_type_infoD2Ev_0
 * Demangled: __cxxabiv1::__class_type_info::~__class_type_info()
 *
 * Callers: 2
 *   0x000000000051E6EC  __cxxabiv1::__si_class_type_info::~__si_class_type_info()
 *   0x000000000051E9E0  __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
 *
 * Callees: 1
 *   0x000000000051CA30  __cxxabiv1::__class_type_info::~__class_type_info()
 *
 * Referenced strings: 2
 *   insn=0x00000000002034B4 string=0x000000000051CA30 "A"
 *   insn=0x00000000002034B8 string=0x00000000002034BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall __cxxabiv1::__class_type_info::~__class_type_info(__cxxabiv1::__class_type_info *this)
{
  _ZN10__cxxabiv117__class_type_infoD2Ev(this);
}

