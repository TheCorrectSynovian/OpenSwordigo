/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D3A4
 * Mangled: _ZNSt13bad_exceptionD2Ev
 * Demangled: std::bad_exception::~bad_exception()
 *
 * Callers: 3
 *   0x0000000000203130  std::bad_exception::~bad_exception()
 *   0x000000000051DEF0  __cxa_call_unexpected
 *   0x0000000000565260  sub_565260
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 3
 *   insn=0x000000000051D3A4 string=0x000000000051D3A8 "!"
 *   insn=0x000000000051D3A8 string=0x000000000051D3AC "!@"
 *   insn=0x000000000051D3B0 string=0x000000000051D3B4 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  *(_QWORD *)this = off_6D8FE0;
  std::exception::~exception(this);
}

