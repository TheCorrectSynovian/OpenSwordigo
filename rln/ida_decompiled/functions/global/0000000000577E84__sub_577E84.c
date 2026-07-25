/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000577E84
 * Mangled: sub_577E84
 * Demangled: sub_577E84
 *
 * Callers: 1
 *   0x0000000000574B04  sub_574B04
 *
 * Callees: 3
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005761AC  sub_5761AC
 *
 * Referenced strings: 30
 *   insn=0x0000000000577E90 string=0x0000000000577E94 """
 *   insn=0x0000000000577E94 string=0x0000000000577E98 "_"
 *   insn=0x0000000000577E9C string=0x0000000000577EB0 """
 *   insn=0x0000000000577EB4 string=0x0000000000577EB8 "#"
 *   insn=0x0000000000577EC0 string=0x0000000000577F7C """
 *   insn=0x0000000000577EC4 string=0x0000000000577EC8 "@"
 *   insn=0x0000000000577EC8 string=0x0000000000577F90 "B"
 *   insn=0x0000000000577ECC string=0x0000000000577ED0 ""
 *   insn=0x0000000000577EE4 string=0x0000000000577EE8 " "
 *   insn=0x0000000000577EF0 string=0x0000000000577EF4 "!"
 *   insn=0x0000000000577EF8 string=0x0000000000571F00 "$"
 *   insn=0x0000000000577EFC string=0x0000000000577F00 "c"
 *   insn=0x0000000000577F00 string=0x0000000000577F04 "a"
 *   insn=0x0000000000577F04 string=0x0000000000577F08 "?H"
 *   insn=0x0000000000577F0C string=0x0000000000577F10 "?<"
 *   insn=0x0000000000577F10 string=0x0000000000577F14 "@"
 *   insn=0x0000000000577F14 string=0x0000000000577F18 " "
 *   insn=0x0000000000577F18 string=0x0000000000577F1C "?"
 *   insn=0x0000000000577F18 string=0x0000000000577F9C "`R@"
 *   insn=0x0000000000577F20 string=0x0000000000577F24 "c"
 *   insn=0x0000000000577F24 string=0x0000000000577F28 "c"
 *   insn=0x0000000000577F3C string=0x0000000000577F40 "`R@"
 *   insn=0x0000000000577F48 string=0x0000000000577F4C "c"
 *   insn=0x0000000000577F4C string=0x0000000000577F50 "`R"
 *   insn=0x0000000000577F50 string=0x0000000000577F54 "c"
 *   insn=0x0000000000577F64 string=0x0000000000577F68 "c"
 *   insn=0x0000000000577F68 string=0x0000000000577F6C "a"
 *   insn=0x0000000000577F6C string=0x0000000000577F70 "?"
 *   insn=0x0000000000577F70 string=0x0000000000577F74 "a"
 *   insn=0x0000000000577F80 string=0x0000000000577F84 "#@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_577E84(__int64 a1)
{
  _BYTE *v1; // x1
  _BYTE *v3; // x2
  int v4; // w3
  __int64 v6; // x0
  __int64 v7; // x3
  __int64 v8; // x2
  _BYTE *v9; // x3
  int v10; // w1
  int v11; // w1
  int v12; // w0
  __int64 v13; // [xsp+28h] [xbp+28h]

  v1 = *(_BYTE **)(a1 + 24);
  if ( *v1 != 70 )
    return 0;
  v3 = v1 + 1;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  v4 = (unsigned __int8)v1[1];
  if ( v4 == 89 )
  {
    v3 = v1 + 2;
    *(_QWORD *)(a1 + 24) = v1 + 2;
    if ( v1[2] != 74 )
      goto LABEL_5;
LABEL_16:
    *(_QWORD *)(a1 + 24) = v3 + 1;
    goto LABEL_5;
  }
  if ( v4 == 74 )
    goto LABEL_16;
LABEL_5:
  v6 = sub_574B04(a1);
  if ( v6 && (v13 = v6, (v7 = sub_5761AC(a1)) != 0) )
    v8 = sub_571F00(a1, 41, v13, v7);
  else
    v8 = 0;
  v9 = *(_BYTE **)(a1 + 24);
  v10 = (unsigned __int8)*v9;
  if ( v10 == 79 )
  {
    v11 = 32;
    v12 = *(_DWORD *)(a1 + 80) + 3;
    goto LABEL_13;
  }
  if ( v10 == 82 )
  {
    v11 = 31;
    v12 = *(_DWORD *)(a1 + 80) + 2;
LABEL_13:
    *(_DWORD *)(a1 + 80) = v12;
    *(_QWORD *)(a1 + 24) = v9 + 1;
    v8 = sub_571F00(a1, v11, v8, 0);
    v9 = *(_BYTE **)(a1 + 24);
    if ( *v9 == 69 )
      goto LABEL_11;
    return 0;
  }
  if ( v10 != 69 )
    return 0;
LABEL_11:
  *(_QWORD *)(a1 + 24) = v9 + 1;
  return v8;
}

