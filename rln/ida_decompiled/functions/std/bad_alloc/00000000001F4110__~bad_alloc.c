/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4110
 * Mangled: ._ZNSt9bad_allocD2Ev
 * Demangled: std::bad_alloc::~bad_alloc()
 *
 * Callers: 2
 *   0x0000000000571E84  std::bad_array_length::~bad_array_length()
 *   0x0000000000571EC8  std::bad_array_new_length::~bad_array_new_length()
 *
 * Callees: 1
 *   0x000000000056FBB0  std::bad_alloc::~bad_alloc()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4118 string=0x00000000001F411C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  _ZNSt9bad_allocD2Ev(this);
}

