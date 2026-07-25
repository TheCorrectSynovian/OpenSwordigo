/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572A48
 * Mangled: sub_572A48
 * Demangled: sub_572A48
 *
 * Callers: 2
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057E974  sub_57E974
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x0000000000203240  .sprintf
 *
 * Referenced strings: 20
 *   insn=0x0000000000572A4C string=0x0000000000572A50 "a"
 *   insn=0x0000000000572A50 string=0x00000000005A0678 "%ld"
 *   insn=0x0000000000572A5C string=0x0000000000572A60 "!"
 *   insn=0x0000000000572A84 string=0x0000000000572A88 "a"
 *   insn=0x0000000000572A8C string=0x0000000000572A90 ""
 *   insn=0x0000000000572A90 string=0x0000000000572AB0 "?"
 *   insn=0x0000000000572A94 string=0x0000000000572A98 "a"
 *   insn=0x0000000000572A9C string=0x0000000000572AA0 "uj 8"
 *   insn=0x0000000000572AA4 string=0x0000000000572AA8 "u""
 *   insn=0x0000000000572ABC string=0x0000000000572AC0 "b"
 *   insn=0x0000000000572ABC string=0x0000000000572A94 "!"
 *   insn=0x0000000000572AC4 string=0x0000000000572AC8 "c"
 *   insn=0x0000000000572AD0 string=0x0000000000572AD4 "`"
 *   insn=0x0000000000572AD4 string=0x0000000000572AD8 "b"
 *   insn=0x0000000000572ADC string=0x0000000000572AE0 "!"
 *   insn=0x0000000000572AE0 string=0x0000000000572AE4 "a"
 *   insn=0x0000000000572AE4 string=0x0000000000572AE8 "B"
 *   insn=0x0000000000572AE8 string=0x0000000000572AEC "b"
 *   insn=0x0000000000572AEC string=0x0000000000572AF0 "uj 8"
 *   insn=0x0000000000572AF4 string=0x0000000000572AF8 "u""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_572A48(__int64 a1, __int64 a2)
{
  size_t result; // x0
  size_t v4; // x23
  __int64 v5; // x1
  __int64 v6; // x20
  char v7; // w21
  __int64 v8; // x2
  void (__fastcall *v9)(__int64, __int64, __int64); // x3
  __int64 v10; // x2
  char s[32]; // [xsp+40h] [xbp+40h] BYREF

  sprintf(s, "%ld", a2);
  result = strlen(s);
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 256);
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = s[v6];
        result = v5;
        if ( v5 == 255 )
          break;
        *(_QWORD *)(a1 + 256) = ++v5;
        ++v6;
        *(_BYTE *)(a1 + result) = v7;
        *(_BYTE *)(a1 + 264) = v7;
        if ( v6 == v4 )
          return result;
      }
      v8 = *(_QWORD *)(a1 + 280);
      v9 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
      ++v6;
      *(_BYTE *)(a1 + 255) = 0;
      v9(a1, 255, v8);
      v10 = *(_QWORD *)(a1 + 312);
      result = 0;
      v5 = 1;
      *(_QWORD *)(a1 + 256) = 1;
      *(_QWORD *)(a1 + 312) = v10 + 1;
      *(_BYTE *)a1 = v7;
      *(_BYTE *)(a1 + 264) = v7;
    }
    while ( v6 != v4 );
  }
  return result;
}

