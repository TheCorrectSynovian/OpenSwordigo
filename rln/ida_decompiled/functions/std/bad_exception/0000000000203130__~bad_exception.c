/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203130
 * Mangled: ._ZNSt13bad_exceptionD2Ev
 * Demangled: std::bad_exception::~bad_exception()
 *
 * Callers: 1
 *   0x000000000051D3F4  std::bad_exception::~bad_exception()
 *
 * Callees: 1
 *   0x000000000051D3A4  std::bad_exception::~bad_exception()
 *
 * Referenced strings: 2
 *   insn=0x0000000000203134 string=0x000000000051D3A4 "A"
 *   insn=0x0000000000203138 string=0x000000000020313C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  _ZNSt13bad_exceptionD2Ev(this);
}

