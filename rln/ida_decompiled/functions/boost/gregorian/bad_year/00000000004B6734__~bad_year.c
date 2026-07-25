/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6734
 * Mangled: _ZN5boost9gregorian8bad_yearD0Ev
 * Demangled: boost::gregorian::bad_year::~bad_year()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 2
 *   insn=0x00000000004B6740 string=0x00000000004B6744 "-O"
 *   insn=0x00000000004B6754 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::gregorian::bad_year::~bad_year(boost::gregorian::bad_year *this)
{
  sub_54A3F8(this);
  operator delete(this);
}

