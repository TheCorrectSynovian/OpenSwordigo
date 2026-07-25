/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571EDC
 * Mangled: _ZNSt20bad_array_new_lengthD0Ev
 * Demangled: std::bad_array_new_length::~bad_array_new_length()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAD00  std::bad_array_new_length::~bad_array_new_length()
 *
 * Referenced strings: 2
 *   insn=0x0000000000571EEC string=0x00000000001FAD00 "0'"
 *   insn=0x0000000000571EFC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  std::bad_array_new_length::~bad_array_new_length(this);
  operator delete(this);
}

