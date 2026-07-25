/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572DD8
 * Mangled: sub_572DD8
 * Demangled: sub_572DD8
 *
 * Callers: 1
 *   0x0000000000576FE0  sub_576FE0
 *
 * Callees: 1
 *   0x00000000005725B4  sub_5725B4
 *
 * Referenced strings: 24
 *   insn=0x0000000000572DE4 string=0x0000000000572DE8 "a"
 *   insn=0x0000000000572DE8 string=0x0000000000572E14 "?"
 *   insn=0x0000000000572E08 string=0x0000000000572E0C "a"
 *   insn=0x0000000000572E18 string=0x0000000000572E1C "?"
 *   insn=0x0000000000572E18 string=0x0000000000572E70 "`"
 *   insn=0x0000000000572E20 string=0x0000000000572E24 "tb"
 *   insn=0x0000000000572E2C string=0x0000000000572E30 "`"
 *   insn=0x0000000000572E34 string=0x0000000000572E38 "?|"
 *   insn=0x0000000000572E44 string=0x0000000000572E48 "a"
 *   insn=0x0000000000572E4C string=0x0000000000572E50 "`"
 *   insn=0x0000000000572E54 string=0x0000000000572E58 "_|"
 *   insn=0x0000000000572E60 string=0x0000000000572E64 " "
 *   insn=0x0000000000572E64 string=0x0000000000572E68 "a"
 *   insn=0x0000000000572E74 string=0x0000000000572E78 "?"
 *   insn=0x0000000000572E7C string=0x0000000000572E80 "!"
 *   insn=0x0000000000572E80 string=0x0000000000572E84 "!"
 *   insn=0x0000000000572E84 string=0x0000000000572E88 "?$"
 *   insn=0x0000000000572E88 string=0x0000000000572E8C "H"
 *   insn=0x0000000000572E90 string=0x0000000000572E94 "`"
 *   insn=0x0000000000572E98 string=0x0000000000572E9C "A"
 *   insn=0x0000000000572E9C string=0x0000000000572EA0 "!"
 *   insn=0x0000000000572EA0 string=0x0000000000572EA4 "?$"
 *   insn=0x0000000000572EA4 string=0x0000000000572EA8 "I"
 *   insn=0x0000000000572EB0 string=0x0000000000572EB4 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_572DD8(__int64 a1, int a2)
{
  _BYTE *v3; // x0
  __int64 result; // x0
  _BYTE *v5; // x0
  unsigned __int8 *v6; // x0
  int v7; // w2
  unsigned __int8 *v8; // x1
  int v9; // w1

  if ( !a2 )
  {
    v3 = *(_BYTE **)(a1 + 24);
    if ( !*v3 )
      return 0;
    *(_QWORD *)(a1 + 24) = v3 + 1;
    a2 = (unsigned __int8)*v3;
  }
  if ( a2 != 104 )
  {
    if ( a2 != 118 )
      return 0;
    sub_5725B4((unsigned __int8 **)(a1 + 24));
    v5 = *(_BYTE **)(a1 + 24);
    if ( *v5 != 95 )
      return 0;
    *(_QWORD *)(a1 + 24) = v5 + 1;
    sub_5725B4((unsigned __int8 **)(a1 + 24));
    v6 = *(unsigned __int8 **)(a1 + 24);
    goto LABEL_9;
  }
  v6 = *(unsigned __int8 **)(a1 + 24);
  v9 = *v6;
  if ( v9 == 110 )
  {
    *(_QWORD *)(a1 + 24) = v6 + 1;
    LOBYTE(v9) = *++v6;
  }
  if ( (unsigned __int8)(v9 - 48) > 9u )
  {
LABEL_9:
    v7 = *v6;
    goto LABEL_10;
  }
  do
  {
    *(_QWORD *)(a1 + 24) = ++v6;
    v7 = *v6;
  }
  while ( (unsigned __int8)(v7 - 48) <= 9u );
LABEL_10:
  if ( v7 != 95 )
    return 0;
  v8 = v6 + 1;
  result = 1;
  *(_QWORD *)(a1 + 24) = v8;
  return result;
}

