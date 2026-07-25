/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572CEC
 * Mangled: sub_572CEC
 * Demangled: sub_572CEC
 *
 * Callers: 6
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576A34  sub_576A34
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577FB4  sub_577FB4
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x0000000000572CF0 string=0x0000000000572CF4 "?P"
 *   insn=0x0000000000572CF4 string=0x0000000000572CF8 "`"
 *   insn=0x0000000000572D20 string=0x0000000000572D24 "!"
 *   insn=0x0000000000572D24 string=0x0000000000572D28 "?$"
 *   insn=0x0000000000572D38 string=0x0000000000572D3C "#"
 *   insn=0x0000000000572D3C string=0x0000000000572D40 "a"
 *   insn=0x0000000000572D40 string=0x0000000000572D44 "!"
 *   insn=0x0000000000572D4C string=0x0000000000572D50 "!"
 *   insn=0x0000000000572D58 string=0x0000000000572D5C "c"
 *   insn=0x0000000000572D68 string=0x0000000000572D6C "!"
 *   insn=0x0000000000572D6C string=0x0000000000572D70 "a"
 *   insn=0x0000000000572D74 string=0x0000000000572D78 "B"
 *   insn=0x0000000000572D90 string=0x0000000000572D94 "J"
 *   insn=0x0000000000572D94 string=0x0000000000572D98 "b|@"
 *   insn=0x0000000000572D9C string=0x0000000000572DA0 "E"
 *   insn=0x0000000000572DA0 string=0x0000000000572DA4 "c"
 *   insn=0x0000000000572DB4 string=0x0000000000572DB8 "@"
 *   insn=0x0000000000572DC0 string=0x0000000000572DC4 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_572CEC(__int64 a1)
{
  _BYTE *v1; // x5
  __int64 result; // x0
  _BYTE *v3; // x2
  int v4; // w4
  unsigned __int8 *v5; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int v9; // w3
  int v10; // w5
  int v11; // w4
  __int64 v12; // x4
  __int64 v13; // x2

  v1 = *(_BYTE **)(a1 + 24);
  if ( *v1 != 84 )
    return 0;
  v3 = v1 + 1;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  v4 = (unsigned __int8)v1[1];
  if ( v4 == 95 )
  {
    v8 = 0;
  }
  else
  {
    if ( v4 == 110 )
      return 0;
    if ( (unsigned __int8)(v4 - 48) > 9u )
      return 0;
    v5 = v1 + 2;
    v6 = 0;
    do
    {
      *(_QWORD *)(a1 + 24) = v5;
      v7 = 10 * v6 + (unsigned __int8)v4;
      v4 = *v5;
      v3 = v5;
      v6 = v7 - 48;
      ++v5;
    }
    while ( (unsigned __int8)(v4 - 48) <= 9u );
    v8 = v6 + 1;
    if ( v4 != 95 )
      return 0;
  }
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 44);
  v11 = *(_DWORD *)(a1 + 64) + 1;
  *(_QWORD *)(a1 + 24) = v3 + 1;
  *(_DWORD *)(a1 + 64) = v11;
  if ( v9 >= v10 )
    return 0;
  v12 = *(_QWORD *)(a1 + 32);
  v13 = 24LL * v9;
  *(_DWORD *)(a1 + 40) = v9 + 1;
  result = 0;
  if ( v12 + v13 )
  {
    *(_DWORD *)(v12 + 24LL * v9) = 5;
    *(_QWORD *)(v12 + v13 + 8) = v8;
    return v12 + v13;
  }
  return result;
}

