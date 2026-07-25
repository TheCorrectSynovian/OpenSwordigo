/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D444
 * Mangled: _ZN10__cxxabiv119__foreign_exceptionD0Ev
 * Demangled: __cxxabiv1::__foreign_exception::~__foreign_exception()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB890  __cxxabiv1::__foreign_exception::~__foreign_exception()
 *
 * Referenced strings: 2
 *   insn=0x000000000051D454 string=0x00000000001FB890 "0'"
 *   insn=0x000000000051D464 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__foreign_exception::~__foreign_exception(__cxxabiv1::__foreign_exception *this)
{
  __cxxabiv1::__foreign_exception::~__foreign_exception(this);
  operator delete(this);
}

