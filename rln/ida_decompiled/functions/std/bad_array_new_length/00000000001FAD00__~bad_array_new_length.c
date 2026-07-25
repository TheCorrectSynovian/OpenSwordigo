/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAD00
 * Mangled: ._ZNSt20bad_array_new_lengthD2Ev
 * Demangled: std::bad_array_new_length::~bad_array_new_length()
 *
 * Callers: 1
 *   0x0000000000571EDC  std::bad_array_new_length::~bad_array_new_length()
 *
 * Callees: 1
 *   0x0000000000571EC8  std::bad_array_new_length::~bad_array_new_length()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAD08 string=0x00000000001FAD0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  _ZNSt20bad_array_new_lengthD2Ev(this);
}

