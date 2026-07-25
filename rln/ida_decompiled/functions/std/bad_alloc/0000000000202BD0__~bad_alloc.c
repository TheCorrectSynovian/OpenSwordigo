/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202BD0
 * Mangled: ._ZNSt9bad_allocD2Ev_0
 * Demangled: std::bad_alloc::~bad_alloc()
 *
 * Callers: 1
 *   0x000000000056FBC4  std::bad_alloc::~bad_alloc()
 *
 * Callees: 1
 *   0x000000000056FBB0  std::bad_alloc::~bad_alloc()
 *
 * Referenced strings: 1
 *   insn=0x0000000000202BD8 string=0x0000000000202BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  _ZNSt9bad_allocD2Ev(this);
}

