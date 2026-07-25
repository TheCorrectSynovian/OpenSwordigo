/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520AAC
 * Mangled: sub_520AAC
 * Demangled: sub_520AAC
 *
 * Callers: 2
 *   0x0000000000520050  sub_520050
 *   0x000000000052010C  sub_52010C
 *
 * Callees: 3
 *   0x00000000001F6F60  .btowc
 *   0x0000000000201670  .wctob
 *   0x0000000000520524  sub_520524
 *
 * Referenced strings: 14
 *   insn=0x0000000000520ACC string=0x0000000000520AD0 "@"
 *   insn=0x0000000000520AD0 string=0x0000000000520B58 " "
 *   insn=0x0000000000520AE0 string=0x0000000000520AE4 "s"
 *   insn=0x0000000000520AE8 string=0x0000000000520AC8 " d"
 *   insn=0x0000000000520AF8 string=0x0000000000520AFC "s"
 *   insn=0x0000000000520B00 string=0x00000000001F6F60 "0'"
 *   insn=0x0000000000520B08 string=0x0000000000520B0C "a"
 *   insn=0x0000000000520B10 string=0x0000000000520B14 "4"
 *   insn=0x0000000000520B20 string=0x0000000000520B24 "B"
 *   insn=0x0000000000520B28 string=0x0000000000520B2C "bp"
 *   insn=0x0000000000520B2C string=0x0000000000520B30 "}"
 *   insn=0x0000000000520B30 string=0x0000000000520524 "!"
 *   insn=0x0000000000520B34 string=0x0000000000520B38 "s"
 *   insn=0x0000000000520B3C string=0x0000000000520B40 " X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wctype_t __fastcall sub_520AAC(__int64 a1)
{
  __int64 v1; // x19
  int v3; // w0
  __int64 v4; // x1
  wint_t *v5; // x20
  __int64 i; // x19
  int v7; // w0
  __int64 j; // x19
  wctype_t result; // x0
  __int64 v10; // x1

  v1 = 0;
  do
  {
    v3 = wctob(v1);
    v4 = a1 + v1++;
    if ( v3 == -1 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_5;
    }
    *(_BYTE *)(v4 + 25) = v3;
  }
  while ( v1 != 128 );
  *(_BYTE *)(a1 + 24) = 1;
LABEL_5:
  v5 = (wint_t *)(a1 + 156);
  for ( i = 0; i != 256; ++i )
  {
    v7 = i;
    *v5++ = btowc(v7);
  }
  for ( j = 0; j != 16; ++j )
  {
    *(_BYTE *)(a1 + j + 1180) = 1 << j;
    result = sub_520524(a1, 1 << j);
    v10 = a1 + 8 * j;
    *(_QWORD *)(v10 + 1200) = result;
  }
  return result;
}

