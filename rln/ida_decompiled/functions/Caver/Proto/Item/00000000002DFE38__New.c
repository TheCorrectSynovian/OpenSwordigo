/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DFE38
 * Mangled: _ZNK5Caver5Proto4Item3NewEv
 * Demangled: Caver::Proto::Item::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 15
 *   insn=0x00000000002DFE44 string=0x00000000002DFE48 "( "
 *   insn=0x00000000002DFE44 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DFE48 string=0x00000000002DFE4C "ED"
 *   insn=0x00000000002DFE4C string=0x00000000002DFE50 ") "
 *   insn=0x00000000002DFE50 string=0x00000000002DFE54 ")"
 *   insn=0x00000000002DFE58 string=0x00000000002DFE5C "( "
 *   insn=0x00000000002DFE5C string=0x00000000002DFE60 ""
 *   insn=0x00000000002DFE60 string=0x00000000002DFE64 "!"
 *   insn=0x00000000002DFE68 string=0x00000000002DFE6C "H "
 *   insn=0x00000000002DFE6C string=0x00000000002DFE70 "\tG"
 *   insn=0x00000000002DFE74 string=0x00000000002DFE78 "H"
 *   insn=0x00000000002DFE80 string=0x00000000002DFE84 "H "
 *   insn=0x00000000002DFE84 string=0x00000000002DFE88 "}A"
 *   insn=0x00000000002DFE94 string=0x00000000002DFE98 "A"
 *   insn=0x00000000002DFE98 string=0x00000000002DFE9C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::Item::New(Caver::Proto::Item *this)
{
  __int64 v1; // x0
  __int128 v2; // q0
  __int128 v3; // q1
  double result; // d0

  v1 = operator new(0x48u);
  *(_QWORD *)&v2 = &Caver::Proto::Item::_default_name_;
  *(_QWORD *)&v3 = &Caver::Proto::Item::_default_short_description_;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::Item::_default_title_;
  *((_QWORD *)&v3 + 1) = &Caver::Proto::Item::_default_description_;
  *(_OWORD *)(v1 + 16) = v2;
  *(_OWORD *)(v1 + 32) = v3;
  *(_QWORD *)&result = 0x100000000LL;
  *(_BYTE *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 60) = 0;
  *(_QWORD *)(v1 + 8) = 0x100000000LL;
  *(_QWORD *)v1 = off_6C67F0;
  *(_QWORD *)(v1 + 52) = 0;
  return result;
}

