/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D41C
 * Mangled: _ZN10__cxxabiv115__forced_unwindD0Ev
 * Demangled: __cxxabiv1::__forced_unwind::~__forced_unwind()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5040  __cxxabiv1::__forced_unwind::~__forced_unwind()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 2
 *   insn=0x000000000051D42C string=0x00000000001F5040 "P'"
 *   insn=0x000000000051D43C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__forced_unwind::~__forced_unwind(__cxxabiv1::__forced_unwind *this)
{
  __cxxabiv1::__forced_unwind::~__forced_unwind(this);
  operator delete(this);
}

