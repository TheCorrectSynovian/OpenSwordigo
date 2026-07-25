/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB720
 * Mangled: ._ZNSt8bad_castD2Ev_0
 * Demangled: std::bad_cast::~bad_cast()
 *
 * Callers: 1
 *   0x000000000051C998  std::bad_cast::~bad_cast()
 *
 * Callees: 1
 *   0x000000000051C984  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB724 string=0x000000000051C984 "A"
 *   insn=0x00000000001FB728 string=0x00000000001FB72C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  _ZNSt8bad_castD2Ev(this);
}

