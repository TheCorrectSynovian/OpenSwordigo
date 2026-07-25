/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057006C
 * Mangled: _ZN10__cxxabiv117__pbase_type_infoD2Ev
 * Demangled: __cxxabiv1::__pbase_type_info::~__pbase_type_info()
 *
 * Callers: 2
 *   0x00000000001F6720  __cxxabiv1::__pbase_type_info::~__pbase_type_info()
 *   0x00000000001F7830  __cxxabiv1::__pbase_type_info::~__pbase_type_info()
 *
 * Callees: 1
 *   0x000000000051E970  nullsub_16
 *
 * Referenced strings: 3
 *   insn=0x000000000057006C string=0x0000000000570070 "!|E"
 *   insn=0x0000000000570070 string=0x0000000000570074 "!@"
 *   insn=0x0000000000570078 string=0x000000000057007C "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__pbase_type_info::~__pbase_type_info(__cxxabiv1::__pbase_type_info *this)
{
  *(_QWORD *)this = off_6DBB50;
  nullsub_16();
}

