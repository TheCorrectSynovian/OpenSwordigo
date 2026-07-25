/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D3F4
 * Mangled: _ZNSt13bad_exceptionD0Ev
 * Demangled: std::bad_exception::~bad_exception()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203130  std::bad_exception::~bad_exception()
 *
 * Referenced strings: 2
 *   insn=0x000000000051D400 string=0x000000000051D404 "K"
 *   insn=0x000000000051D414 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  std::bad_exception::~bad_exception(this);
  operator delete(this);
}

