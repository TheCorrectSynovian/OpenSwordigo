/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368970
 * Mangled: _ZN5boost12bad_weak_ptrD0Ev
 * Demangled: boost::bad_weak_ptr::~bad_weak_ptr()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 2
 *   insn=0x000000000036898C string=0x0000000000368990 "H:"
 *   insn=0x0000000000368990 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::bad_weak_ptr::~bad_weak_ptr(boost::bad_weak_ptr *this)
{
  std::exception::~exception(this);
  operator delete(this);
}

