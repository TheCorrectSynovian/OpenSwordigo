/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF724
 * Mangled: _ZN5Caver5Proto4ItemC2Ev
 * Demangled: Caver::Proto::Item::Item(void)
 *
 * Callers: 1
 *   0x0000000000202400  Caver::Proto::Item::Item(void)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x00000000002DF724 string=0x00000000002DF728 "ED"
 *   insn=0x00000000002DF728 string=0x00000000002DF72C ") "
 *   insn=0x00000000002DF72C string=0x00000000002DF730 ")"
 *   insn=0x00000000002DF734 string=0x00000000002DF738 "( "
 *   insn=0x00000000002DF738 string=0x00000000002DF73C ""
 *   insn=0x00000000002DF73C string=0x00000000002DF740 "!"
 *   insn=0x00000000002DF744 string=0x00000000002DF748 "H "
 *   insn=0x00000000002DF748 string=0x00000000002DF74C "\tG"
 *   insn=0x00000000002DF750 string=0x00000000002DF754 "H"
 *   insn=0x00000000002DF75C string=0x00000000002DF760 "H "
 *   insn=0x00000000002DF760 string=0x00000000002DF764 "}A"
 *   insn=0x00000000002DF770 string=0x00000000002DF774 "A"
 *   insn=0x00000000002DF774 string=0x00000000002DF778 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::Item::Item(Caver::Proto::Item *this)
{
  __int128 v1; // q0
  __int128 v2; // q1
  double result; // d0

  *(_QWORD *)&v1 = &Caver::Proto::Item::_default_name_;
  *(_QWORD *)&v2 = &Caver::Proto::Item::_default_short_description_;
  *((_QWORD *)&v1 + 1) = &Caver::Proto::Item::_default_title_;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::Item::_default_description_;
  *((_OWORD *)this + 1) = v1;
  *((_OWORD *)this + 2) = v2;
  *(_QWORD *)&result = 0x100000000LL;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)((char *)this + 60) = 0;
  *((_QWORD *)this + 1) = 0x100000000LL;
  *(_QWORD *)this = off_6C67F0;
  *(_QWORD *)((char *)this + 52) = 0;
  return result;
}

