/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051C998
 * Mangled: _ZNSt8bad_castD0Ev
 * Demangled: std::bad_cast::~bad_cast()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB720  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 4
 *   insn=0x000000000051C9A4 string=0x000000000051C9A8 "^{"
 *   insn=0x000000000051C9A8 string=0x00000000001FB720 "0'"
 *   insn=0x000000000051C9B4 string=0x000000000051C9B8 ">j"
 *   insn=0x000000000051C9B8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  std::bad_cast::~bad_cast(this);
  operator delete(this);
}

