/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053FC7C
 * Mangled: sub_53FC7C
 * Demangled: sub_53FC7C
 *
 * Callers: 13
 *   0x000000000053FBE8  sub_53FBE8
 *   0x000000000053FD7C  sub_53FD7C
 *   0x000000000053FF24  sub_53FF24
 *   0x00000000005400E4  sub_5400E4
 *   0x0000000000540490  sub_540490
 *   0x0000000000540A88  sub_540A88
 *   0x0000000000540D40  sub_540D40
 *   0x0000000000540F84  sub_540F84
 *   0x00000000005411B8  sub_5411B8
 *   0x00000000005413EC  sub_5413EC
 *   0x0000000000541620  sub_541620
 *   0x0000000000541868  sub_541868
 *   0x0000000000541AB0  sub_541AB0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000053F778  sub_53F778
 *
 * Referenced strings: 12
 *   insn=0x000000000053FC80 string=0x000000000053FC84 "#"
 *   insn=0x000000000053FC90 string=0x000000000053FC94 "b"
 *   insn=0x000000000053FC98 string=0x000000000053FC9C """
 *   insn=0x000000000053FC9C string=0x000000000053FCA0 "@l@"
 *   insn=0x000000000053FCA4 string=0x000000000053FCA8 "C @"
 *   insn=0x000000000053FCA4 string=0x000000000053FCC0 "b"
 *   insn=0x000000000053FCB8 string=0x000000000053FCBC "#"
 *   insn=0x000000000053FCC0 string=0x000000000053FCC4 """
 *   insn=0x000000000053FCC4 string=0x000000000053FCC8 "C @"
 *   insn=0x000000000053FCCC string=0x000000000053FCD0 " "
 *   insn=0x000000000053FCD0 string=0x000000000053FCD4 "`"
 *   insn=0x000000000053FCEC string=0x000000000053FCF0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53FC7C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x3
  __int64 v4; // x2
  __int64 v5; // x2
  char *v6; // x0
  int v7; // w3
  __int64 result; // x0
  _QWORD *v9; // [xsp+28h] [xbp+28h]

  v2 = *a2;
  *(_QWORD *)(a1 + 8) = a2;
  v4 = *(_QWORD *)(v2 - 24);
  *(_BYTE *)a1 = 0;
  v5 = (__int64)a2 + v4;
  v6 = *(char **)(v5 + 216);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v5 + 32);
    if ( v7 )
      return sub_520C14(v5, v7 | 4u);
    v9 = a2;
    sub_53F778(v6);
    a2 = v9;
    v2 = *v9;
  }
  v5 = (__int64)a2 + *(_QWORD *)(v2 - 24);
  v7 = *(_DWORD *)(v5 + 32);
  if ( !v7 )
  {
    result = 1;
    *(_BYTE *)a1 = 1;
    return result;
  }
  return sub_520C14(v5, v7 | 4u);
}

