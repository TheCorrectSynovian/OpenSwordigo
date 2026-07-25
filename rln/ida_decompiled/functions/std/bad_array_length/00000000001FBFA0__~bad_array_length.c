/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBFA0
 * Mangled: ._ZNSt16bad_array_lengthD2Ev
 * Demangled: std::bad_array_length::~bad_array_length()
 *
 * Callers: 1
 *   0x0000000000571E98  std::bad_array_length::~bad_array_length()
 *
 * Callees: 1
 *   0x0000000000571E84  std::bad_array_length::~bad_array_length()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBFA8 string=0x00000000001FBFAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::bad_array_length::~bad_array_length(std::bad_array_length *this)
{
  _ZNSt16bad_array_lengthD2Ev(this);
}

