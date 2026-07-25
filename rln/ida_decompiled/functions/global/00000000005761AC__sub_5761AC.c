/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005761AC
 * Mangled: sub_5761AC
 * Demangled: sub_5761AC
 *
 * Callers: 3
 *   0x00000000005764B0  sub_5764B0
 *   0x0000000000576FE0  sub_576FE0
 *   0x0000000000577E84  sub_577E84
 *
 * Callees: 2
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000574B04  sub_574B04
 *
 * Referenced strings: 31
 *   insn=0x00000000005761BC string=0x00000000005761C0 "a"
 *   insn=0x00000000005761C0 string=0x00000000005761C4 "?"
 *   insn=0x00000000005761C8 string=0x00000000005761CC "?"
 *   insn=0x00000000005761D4 string=0x00000000005761D8 "b"
 *   insn=0x00000000005761D8 string=0x00000000005761DC "?"
 *   insn=0x00000000005761E8 string=0x0000000000576228 "?<"
 *   insn=0x00000000005761F0 string=0x0000000000571F00 "$"
 *   insn=0x00000000005761F8 string=0x00000000005761FC "@"
 *   insn=0x00000000005761FC string=0x0000000000576200 "c"
 *   insn=0x0000000000576200 string=0x0000000000576204 "a"
 *   insn=0x0000000000576204 string=0x0000000000576208 "?"
 *   insn=0x000000000057620C string=0x0000000000576210 "?"
 *   insn=0x0000000000576214 string=0x0000000000576218 "?"
 *   insn=0x000000000057622C string=0x0000000000576230 "`"
 *   insn=0x0000000000576230 string=0x0000000000576234 "?H"
 *   insn=0x0000000000576230 string=0x000000000057623C "a"
 *   insn=0x0000000000576238 string=0x0000000000576248 "/"
 *   insn=0x000000000057623C string=0x0000000000576240 "?"
 *   insn=0x0000000000576260 string=0x00000000005761F0 "D"
 *   insn=0x0000000000576274 string=0x0000000000576278 "`"
 *   insn=0x000000000057627C string=0x0000000000576280 "A"
 *   insn=0x0000000000576284 string=0x0000000000576288 """
 *   insn=0x0000000000576288 string=0x000000000057628C "_"
 *   insn=0x0000000000576290 string=0x0000000000576294 "!"
 *   insn=0x0000000000576294 string=0x0000000000576298 """
 *   insn=0x0000000000576298 string=0x000000000057629C "_$"
 *   insn=0x000000000057629C string=0x00000000005762A0 "A"
 *   insn=0x00000000005762A0 string=0x00000000005762A4 "bR@"
 *   insn=0x00000000005762A4 string=0x00000000005762A8 "!@"
 *   insn=0x00000000005762A8 string=0x00000000005762AC "A"
 *   insn=0x00000000005762AC string=0x00000000005762B0 "aR"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5761AC(__int64 a1)
{
  unsigned __int8 *v1; // x3
  int v2; // w1
  __int64 *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x4
  __int64 result; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // [xsp+28h] [xbp+28h] BYREF

  v1 = *(unsigned __int8 **)(a1 + 24);
  v10 = 0;
  v2 = *v1;
  if ( v2 == 69 || v2 == 0 )
    return 0;
  v4 = &v10;
  if ( v2 == 46 )
    return 0;
  do
  {
    if ( (v2 == 79 || v2 == 82) && v1[1] == 69 )
      break;
    v6 = sub_574B04(a1);
    if ( !v6 )
      return 0;
    v5 = sub_571F00(a1, 46, v6, 0);
    *v4 = v5;
    v4 = (__int64 *)(v5 + 16);
    if ( !v5 )
      return 0;
    v1 = *(unsigned __int8 **)(a1 + 24);
    v2 = *v1;
    if ( v2 == 69 || v2 == 0 )
      break;
  }
  while ( v2 != 46 );
  result = v10;
  if ( !v10 )
    return 0;
  if ( !*(_QWORD *)((char *)&word_10 + v10) )
  {
    v8 = *(_QWORD *)&byte_8[v10];
    if ( *(_DWORD *)v8 == 39 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( *(_DWORD *)(v9 + 28) == 9 )
      {
        *(_DWORD *)(a1 + 80) -= *(_DWORD *)(v9 + 8);
        *(_QWORD *)&byte_8[result] = 0;
      }
    }
  }
  return result;
}

