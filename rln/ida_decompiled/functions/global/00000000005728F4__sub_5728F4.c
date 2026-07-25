/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005728F4
 * Mangled: sub_5728F4
 * Demangled: sub_5728F4
 *
 * Callers: 2
 *   0x0000000000572B14  sub_572B14
 *   0x00000000005764B0  sub_5764B0
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x0000000000571FA0  sub_571FA0
 *
 * Referenced strings: 36
 *   insn=0x00000000005728F4 string=0x00000000005728F8 "#|@"
 *   insn=0x000000000057290C string=0x0000000000572910 "B"
 *   insn=0x0000000000572910 string=0x0000000000572914 "_"
 *   insn=0x0000000000572914 string=0x0000000000572918 "K"
 *   insn=0x0000000000572924 string=0x0000000000572928 "d"
 *   insn=0x0000000000572928 string=0x000000000057292C "?$"
 *   insn=0x0000000000572934 string=0x0000000000572938 ""
 *   insn=0x0000000000572938 string=0x000000000057293C "a"
 *   insn=0x0000000000572938 string=0x0000000000572978 "`*@"
 *   insn=0x000000000057293C string=0x00000000005A0650 "_GLOBAL_"
 *   insn=0x0000000000572940 string=0x0000000000572944 "!@"
 *   insn=0x000000000057294C string=0x0000000000572950 "@"
 *   insn=0x000000000057294C string=0x00000000001F5190 "P'"
 *   insn=0x0000000000572954 string=0x0000000000572958 "?|"
 *   insn=0x000000000057295C string=0x0000000000572960 "?"
 *   insn=0x0000000000572964 string=0x0000000000572968 "@"
 *   insn=0x000000000057296C string=0x0000000000572970 "?"
 *   insn=0x0000000000572978 string=0x000000000057297C "a.@"
 *   insn=0x0000000000572998 string=0x000000000057299C "#"
 *   insn=0x000000000057299C string=0x00000000005729A0 "d"
 *   insn=0x00000000005729A8 string=0x00000000005729AC "`*"
 *   insn=0x00000000005729AC string=0x00000000005729B0 "a"
 *   insn=0x00000000005729B4 string=0x00000000005729B8 "B"
 *   insn=0x00000000005729B8 string=0x00000000005729BC "#"
 *   insn=0x00000000005729C4 string=0x00000000005729C8 "u"
 *   insn=0x00000000005729C8 string=0x00000000005729CC "t"
 *   insn=0x00000000005729FC string=0x0000000000572A00 "B"
 *   insn=0x0000000000572A10 string=0x0000000000572A14 "!"
 *   insn=0x0000000000572A14 string=0x0000000000572A18 "cR@"
 *   insn=0x0000000000572A20 string=0x0000000000572A24 "a"
 *   insn=0x0000000000572A24 string=0x0000000000572A28 "cX"
 *   insn=0x0000000000572A24 string=0x00000000005A0660 "(anonymous namespace)"
 *   insn=0x0000000000572A28 string=0x0000000000572A2C "!"
 *   insn=0x0000000000572A2C string=0x0000000000572A30 "t"
 *   insn=0x0000000000572A30 string=0x0000000000572A34 "tR"
 *   insn=0x0000000000572A40 string=0x0000000000572A44 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5728F4(__int64 a1, int a2)
{
  unsigned __int8 *v2; // x21
  int v3; // w4
  int v6; // w1
  int v7; // w0
  __int64 v8; // x4
  __int64 v9; // x1
  __int64 v10; // x3
  __int64 result; // x0

  v2 = *(unsigned __int8 **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 8) - (_QWORD)v2 < a2 )
    return 0;
  v3 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = &v2[a2];
  if ( (v3 & 4) != 0 && v2[a2] == 36 )
    *(_QWORD *)(a1 + 24) = &v2[a2 + 1];
  if ( a2 <= 9 || memcmp(v2, "_GLOBAL_", 8u) || (v6 = v2[8], v6 != 95 && v6 != 46) && v6 != 36 || v2[9] != 78 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 < *(_DWORD *)(a1 + 44) )
    {
      v8 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 40) = v7 + 1;
      v9 = 24LL * v7;
      v10 = v8 + v9;
      if ( a2 != 0 && v2 != 0 )
      {
        if ( v10 )
        {
          *(_DWORD *)(v8 + 24LL * v7) = 0;
          result = v8 + v9;
          *(_QWORD *)(v10 + 8) = v2;
          *(_DWORD *)(v10 + 16) = a2;
          return result;
        }
      }
    }
    return 0;
  }
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) + 22 - a2;
  return sub_571FA0(a1, (__int64)"(anonymous namespace)", 21);
}

