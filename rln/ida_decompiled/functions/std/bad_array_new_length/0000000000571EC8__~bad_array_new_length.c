/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571EC8
 * Mangled: _ZNSt20bad_array_new_lengthD2Ev
 * Demangled: std::bad_array_new_length::~bad_array_new_length()
 *
 * Callers: 2
 *   0x00000000001FAD00  std::bad_array_new_length::~bad_array_new_length()
 *   0x000000000056FC94  __cxa_throw_bad_array_new_length
 *
 * Callees: 1
 *   0x00000000001F4110  std::bad_alloc::~bad_alloc()
 *
 * Referenced strings: 3
 *   insn=0x0000000000571EC8 string=0x0000000000571ECC "!"
 *   insn=0x0000000000571ECC string=0x0000000000571ED0 "!@"
 *   insn=0x0000000000571ED8 string=0x00000000001F4110 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  *(_QWORD *)this = off_6DBFA0;
  std::bad_alloc::~bad_alloc(this);
}

