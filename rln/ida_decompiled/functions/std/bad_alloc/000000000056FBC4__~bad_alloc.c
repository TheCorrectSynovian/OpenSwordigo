/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FBC4
 * Mangled: _ZNSt9bad_allocD0Ev
 * Demangled: std::bad_alloc::~bad_alloc()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202BD0  std::bad_alloc::~bad_alloc()
 *
 * Referenced strings: 1
 *   insn=0x000000000056FBE4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  std::bad_alloc::~bad_alloc(this);
  operator delete(this);
}

