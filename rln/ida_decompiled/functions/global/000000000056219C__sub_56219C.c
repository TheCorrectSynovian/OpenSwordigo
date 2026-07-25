/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056219C
 * Mangled: sub_56219C
 * Demangled: sub_56219C
 *
 * Callers: 2
 *   0x00000000005713B0  sub_5713B0
 *   0x0000000000571470  sub_571470
 *
 * Callees: 1
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 7
 *   insn=0x00000000005621A8 string=0x00000000005621AC "a"
 *   insn=0x00000000005621CC string=0x00000000005621D0 "?"
 *   insn=0x00000000005621D0 string=0x00000000005621D4 " "
 *   insn=0x00000000005621DC string=0x00000000005621E0 "`N"
 *   insn=0x00000000005621DC string=0x00000000001F8570 "0'"
 *   insn=0x00000000005621E0 string=0x00000000005621E4 " "
 *   insn=0x00000000005621E4 string=0x00000000005621E8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56219C(__int64 result)
{
  unsigned __int64 v1; // x1
  __int64 v2; // x19
  unsigned __int64 v3; // x0

  if ( !*(_BYTE *)(result + 168) && !*(_QWORD *)(result + 152) )
  {
    v1 = *(_QWORD *)(result + 160);
    v2 = result;
    v3 = 4 * v1;
    if ( v1 > 0x1FC0000000000000LL )
      v3 = -1;
    *(_QWORD *)(v2 + 152) = operator new[](v3);
    result = 1;
    *(_BYTE *)(v2 + 168) = 1;
  }
  return result;
}

