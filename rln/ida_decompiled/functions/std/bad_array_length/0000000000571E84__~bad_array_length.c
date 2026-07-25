/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571E84
 * Mangled: _ZNSt16bad_array_lengthD2Ev
 * Demangled: std::bad_array_length::~bad_array_length()
 *
 * Callers: 2
 *   0x00000000001FBFA0  std::bad_array_length::~bad_array_length()
 *   0x000000000056FCC8  __cxa_throw_bad_array_length
 *
 * Callees: 1
 *   0x00000000001F4110  std::bad_alloc::~bad_alloc()
 *
 * Referenced strings: 3
 *   insn=0x0000000000571E84 string=0x0000000000571E88 "!"
 *   insn=0x0000000000571E88 string=0x0000000000571E8C "!@"
 *   insn=0x0000000000571E94 string=0x00000000001F4110 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_array_length::~bad_array_length(std::bad_array_length *this)
{
  *(_QWORD *)this = off_6DBF50;
  std::bad_alloc::~bad_alloc(this);
}

