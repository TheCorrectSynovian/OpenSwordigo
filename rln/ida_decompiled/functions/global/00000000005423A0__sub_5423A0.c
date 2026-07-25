/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005423A0
 * Mangled: sub_5423A0
 * Demangled: sub_5423A0
 *
 * Callers: 13
 *   0x000000000054230C  sub_54230C
 *   0x00000000005424A0  sub_5424A0
 *   0x0000000000542648  sub_542648
 *   0x0000000000542808  sub_542808
 *   0x0000000000542B74  sub_542B74
 *   0x000000000054307C  sub_54307C
 *   0x00000000005434B0  sub_5434B0
 *   0x00000000005436D8  sub_5436D8
 *   0x00000000005438F0  sub_5438F0
 *   0x0000000000543B08  sub_543B08
 *   0x0000000000543D20  sub_543D20
 *   0x0000000000543F40  sub_543F40
 *   0x0000000000544160  sub_544160
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000541E9C  sub_541E9C
 *
 * Referenced strings: 13
 *   insn=0x00000000005423AC string=0x00000000005423B0 " "
 *   insn=0x00000000005423B0 string=0x00000000005423B4 "a"
 *   insn=0x00000000005423BC string=0x00000000005423C0 """
 *   insn=0x00000000005423C0 string=0x00000000005423C4 "@l@"
 *   insn=0x00000000005423C4 string=0x00000000005423C8 " "
 *   insn=0x00000000005423C8 string=0x00000000005423CC "C @"
 *   insn=0x00000000005423C8 string=0x00000000005423EC "C @"
 *   insn=0x00000000005423DC string=0x00000000005423E0 " "
 *   insn=0x00000000005423E4 string=0x00000000005423E8 """
 *   insn=0x00000000005423F0 string=0x00000000005423F4 " "
 *   insn=0x00000000005423F4 string=0x00000000005423F8 "`"
 *   insn=0x0000000000542410 string=0x0000000000542414 "a"
 *   insn=0x0000000000542414 string=0x0000000000542418 "j|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5423A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // x0
  __int64 v4; // x2
  __int64 v5; // x2
  char *v6; // x0
  int v7; // w3
  __int64 result; // x0

  v3 = *a2;
  *(_QWORD *)(a1 + 8) = a2;
  v4 = *(_QWORD *)(v3 - 24);
  *(_BYTE *)a1 = 0;
  v5 = (__int64)a2 + v4;
  v6 = *(char **)(v5 + 216);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v5 + 32);
    if ( v7 )
      return sub_5215C0(v5, v7 | 4u);
    sub_541E9C(v6);
    v5 = (__int64)a2 + *(_QWORD *)(*a2 - 24);
  }
  v7 = *(_DWORD *)(v5 + 32);
  if ( !v7 )
  {
    result = 1;
    *(_BYTE *)a1 = 1;
    return result;
  }
  return sub_5215C0(v5, v7 | 4u);
}

