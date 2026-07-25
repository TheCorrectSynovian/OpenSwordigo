/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF784
 * Mangled: _ZN5Caver5Proto4Item10SharedCtorEv
 * Demangled: Caver::Proto::Item::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000002DF784 string=0x00000000002DF788 ") "
 *   insn=0x00000000002DF788 string=0x00000000002DF78C ")ED"
 *   insn=0x00000000002DF78C string=0x00000000002DF790 "* "
 *   insn=0x00000000002DF794 string=0x00000000002DF798 "( "
 *   insn=0x00000000002DF798 string=0x00000000002DF79C "J"
 *   insn=0x00000000002DF79C string=0x00000000002DF7A0 ""
 *   insn=0x00000000002DF7A0 string=0x00000000002DF7A4 "!"
 *   insn=0x00000000002DF7A4 string=0x00000000002DF7A8 "B"
 *   insn=0x00000000002DF7AC string=0x00000000002DF7B0 "H "
 *   insn=0x00000000002DF7B0 string=0x00000000002DF7B4 "\tG"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::Item::SharedCtor(Caver::Proto::Item *this)
{
  double result; // d0
  __int128 v2; // q1
  __int128 v3; // q2

  *(_QWORD *)&result = 0x100000000LL;
  *(_QWORD *)&v2 = &Caver::Proto::Item::_default_name_;
  *(_QWORD *)&v3 = &Caver::Proto::Item::_default_short_description_;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::Item::_default_title_;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)((char *)this + 60) = 0;
  *((_QWORD *)this + 1) = 0x100000000LL;
  *((_QWORD *)&v3 + 1) = &Caver::Proto::Item::_default_description_;
  *((_OWORD *)this + 1) = v2;
  *((_OWORD *)this + 2) = v3;
  *(_QWORD *)((char *)this + 52) = 0;
  return result;
}

