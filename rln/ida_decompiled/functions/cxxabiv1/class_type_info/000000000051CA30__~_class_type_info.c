/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CA30
 * Mangled: _ZN10__cxxabiv117__class_type_infoD2Ev
 * Demangled: __cxxabiv1::__class_type_info::~__class_type_info()
 *
 * Callers: 2
 *   0x0000000000202960  __cxxabiv1::__class_type_info::~__class_type_info()
 *   0x00000000002034B0  __cxxabiv1::__class_type_info::~__class_type_info()
 *
 * Callees: 1
 *   0x000000000051E970  nullsub_16
 *
 * Referenced strings: 2
 *   insn=0x000000000051CA30 string=0x000000000051CA34 "!"
 *   insn=0x000000000051CA34 string=0x000000000051CA38 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__class_type_info::~__class_type_info(__cxxabiv1::__class_type_info *this)
{
  *(_QWORD *)this = off_6D8ED0;
  nullsub_16();
}

