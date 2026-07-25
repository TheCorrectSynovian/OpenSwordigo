/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E258
 * Mangled: _ZN10__cxxabiv123__fundamental_type_infoD0Ev
 * Demangled: __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4940  __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 2
 *   insn=0x000000000051E268 string=0x00000000001F4940 "P'"
 *   insn=0x000000000051E278 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__fundamental_type_info::~__fundamental_type_info(
        __cxxabiv1::__fundamental_type_info *this)
{
  __cxxabiv1::__fundamental_type_info::~__fundamental_type_info(this);
  operator delete(this);
}

