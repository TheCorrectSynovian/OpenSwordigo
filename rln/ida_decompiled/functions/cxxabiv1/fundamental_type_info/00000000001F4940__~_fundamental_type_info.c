/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4940
 * Mangled: ._ZN10__cxxabiv123__fundamental_type_infoD2Ev
 * Demangled: __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
 *
 * Callers: 1
 *   0x000000000051E258  __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
 *
 * Callees: 1
 *   0x000000000051E244  __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4944 string=0x000000000051E244 "A"
 *   insn=0x00000000001F4948 string=0x00000000001F494C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall __cxxabiv1::__fundamental_type_info::~__fundamental_type_info(
        __cxxabiv1::__fundamental_type_info *this)
{
  _ZN10__cxxabiv123__fundamental_type_infoD2Ev(this);
}

