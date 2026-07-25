/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E244
 * Mangled: _ZN10__cxxabiv123__fundamental_type_infoD2Ev
 * Demangled: __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
 *
 * Callers: 1
 *   0x00000000001F4940  __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
 *
 * Callees: 1
 *   0x000000000051E970  nullsub_16
 *
 * Referenced strings: 2
 *   insn=0x000000000051E244 string=0x000000000051E248 "!"
 *   insn=0x000000000051E248 string=0x000000000051E24C "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__fundamental_type_info::~__fundamental_type_info(
        __cxxabiv1::__fundamental_type_info *this)
{
  *(_QWORD *)this = off_6D90F0;
  nullsub_16();
}

