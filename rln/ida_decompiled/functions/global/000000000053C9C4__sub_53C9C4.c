/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053C9C4
 * Mangled: sub_53C9C4
 * Demangled: sub_53C9C4
 *
 * Callers: 4
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x00000000005532C0  sub_5532C0
 *   0x0000000000553630  sub_553630
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x000000000053C9C8 string=0x000000000053C9CC "#"
 *   insn=0x000000000053C9CC string=0x000000000053C9D0 "B"
 *   insn=0x000000000053C9D4 string=0x000000000053C9D8 "#"
 *   insn=0x000000000053C9D4 string=0x000000000053CA48 "d"
 *   insn=0x000000000053C9DC string=0x000000000053C9E0 "c"
 *   insn=0x000000000053C9E0 string=0x000000000053C9E4 "a"
 *   insn=0x000000000053C9E4 string=0x000000000053C9E8 "a"
 *   insn=0x000000000053C9EC string=0x000000000053C9F0 "a"
 *   insn=0x000000000053C9F0 string=0x000000000053C9F4 "A"
 *   insn=0x000000000053C9F4 string=0x000000000053C9F8 "a"
 *   insn=0x000000000053C9F8 string=0x000000000053C9FC "d"
 *   insn=0x000000000053C9FC string=0x000000000053CA00 "b"
 *   insn=0x000000000053CA00 string=0x000000000053CA04 "d"
 *   insn=0x000000000053CA04 string=0x000000000053CA08 "b"
 *   insn=0x000000000053CA10 string=0x000000000053CA14 "?"
 *   insn=0x000000000053CA18 string=0x000000000053CA1C "?"
 *   insn=0x000000000053CA3C string=0x000000000053CA40 "?"
 *   insn=0x000000000053CA48 string=0x000000000053CA4C "#"
 *   insn=0x000000000053CA4C string=0x000000000053CA50 "$"
 *   insn=0x000000000053CA6C string=0x000000000053CA70 "?"
 *   insn=0x000000000053CA80 string=0x000000000053CA84 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53C9C4(__int64 a1, _BYTE *a2, char a3)
{
  int v3; // w0
  _BYTE *v4; // x3
  _BYTE *v5; // x4
  int v6; // w1
  int v7; // w0
  __int64 result; // x0

  v3 = *(_DWORD *)(a1 + 24);
  *a2 = 37;
  if ( (v3 & 0x800) != 0 )
  {
    v4 = a2 + 2;
    a2[1] = 43;
  }
  else
  {
    v4 = a2 + 1;
  }
  if ( (v3 & 0x400) != 0 )
    *v4++ = 35;
  *v4 = 46;
  v4[1] = 42;
  v5 = v4 + 2;
  if ( a3 )
  {
    v5 = v4 + 3;
    v4[2] = a3;
  }
  v6 = v3 & 0x104;
  if ( v6 == 4 )
  {
    result = 102;
    *v5 = 102;
    v5[1] = 0;
  }
  else
  {
    v7 = v3 & 0x4000;
    if ( v6 == 256 )
    {
      if ( v7 )
        result = 69;
      else
        result = 101;
      *v5 = result;
      v5[1] = 0;
    }
    else
    {
      if ( v7 )
        result = 71;
      else
        result = 103;
      *v5 = result;
      v5[1] = 0;
    }
  }
  return result;
}

