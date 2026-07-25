/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5DF4
 * Mangled: _ZN5boost9gregorian9bad_monthD0Ev
 * Demangled: boost::gregorian::bad_month::~bad_month()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 3
 *   insn=0x00000000004B5E00 string=0x00000000004B5E04 "}Q"
 *   insn=0x00000000004B5E10 string=0x00000000004B5E14 "'"
 *   insn=0x00000000004B5E14 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::gregorian::bad_month::~bad_month(boost::gregorian::bad_month *this)
{
  sub_54A3F8(this);
  operator delete(this);
}

