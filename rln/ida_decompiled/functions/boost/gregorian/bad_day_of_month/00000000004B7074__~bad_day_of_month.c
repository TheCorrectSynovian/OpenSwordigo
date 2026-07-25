/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B7074
 * Mangled: _ZN5boost9gregorian16bad_day_of_monthD0Ev
 * Demangled: boost::gregorian::bad_day_of_month::~bad_day_of_month()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 1
 *   insn=0x00000000004B7094 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::gregorian::bad_day_of_month::~bad_day_of_month(boost::gregorian::bad_day_of_month *this)
{
  sub_54A3F8(this);
  operator delete(this);
}

