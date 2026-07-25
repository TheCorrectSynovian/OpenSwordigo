/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571E98
 * Mangled: _ZNSt16bad_array_lengthD0Ev
 * Demangled: std::bad_array_length::~bad_array_length()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBFA0  std::bad_array_length::~bad_array_length()
 *
 * Referenced strings: 3
 *   insn=0x0000000000571EA4 string=0x0000000000571EA8 ">("
 *   insn=0x0000000000571EA8 string=0x00000000001FBFA0 "0'"
 *   insn=0x0000000000571EB8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_array_length::~bad_array_length(std::bad_array_length *this)
{
  std::bad_array_length::~bad_array_length(this);
  operator delete(this);
}

