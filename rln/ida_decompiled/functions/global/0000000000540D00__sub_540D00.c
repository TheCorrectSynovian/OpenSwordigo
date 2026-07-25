/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540D00
 * Mangled: sub_540D00
 * Demangled: sub_540D00
 *
 * Callers: 1
 *   0x00000000003C1890  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *
 * Callees: 1
 *   0x0000000000540A88  sub_540A88
 *
 * Referenced strings: 9
 *   insn=0x0000000000540D04 string=0x0000000000540D08 "B"
 *   insn=0x0000000000540D0C string=0x0000000000540D10 "D"
 *   insn=0x0000000000540D10 string=0x0000000000540D14 "B\t"
 *   insn=0x0000000000540D18 string=0x0000000000540D1C "_ "
 *   insn=0x0000000000540D20 string=0x0000000000540D24 "_"
 *   insn=0x0000000000540D24 string=0x0000000000540D28 "`"
 *   insn=0x0000000000540D28 string=0x0000000000540D2C "!|@"
 *   insn=0x0000000000540D2C string=0x0000000000540D30 "V"
 *   insn=0x0000000000540D38 string=0x0000000000540D3C "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_540D00(_QWORD *a1, __int64 a2)
{
  int v2; // w2

  v2 = *(_DWORD *)((_BYTE *)a1 + *(_QWORD *)(*a1 - 24LL) + 24) & 0x4A;
  if ( v2 == 8 || v2 == 64 )
    a2 = (unsigned int)a2;
  else
    a2 = (int)a2;
  return sub_540A88(a1, a2);
}

