/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005725B4
 * Mangled: sub_5725B4
 * Demangled: sub_5725B4
 *
 * Callers: 4
 *   0x0000000000572DD8  sub_572DD8
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005764B0  sub_5764B0
 *   0x0000000000576FE0  sub_576FE0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000005725B4 string=0x00000000005725B8 "#"
 *   insn=0x00000000005725C0 string=0x000000000057261C """
 *   insn=0x00000000005725C8 string=0x00000000005725CC "a"
 *   insn=0x00000000005725CC string=0x00000000005725D0 "!"
 *   insn=0x00000000005725D0 string=0x00000000005725D4 "?$"
 *   insn=0x00000000005725E8 string=0x00000000005725EC """
 *   insn=0x00000000005725EC string=0x00000000005725F0 "A"
 *   insn=0x00000000005725F0 string=0x00000000005725F4 "!"
 *   insn=0x00000000005725F8 string=0x00000000005725FC "!"
 *   insn=0x00000000005725FC string=0x0000000000572600 "b"
 *   insn=0x0000000000572600 string=0x0000000000572604 "B"
 *   insn=0x0000000000572604 string=0x0000000000572608 "_$"
 *   insn=0x000000000057260C string=0x0000000000572610 " "
 *   insn=0x0000000000572620 string=0x0000000000572624 "%"
 *   insn=0x0000000000572628 string=0x000000000057262C "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5725B4(unsigned __int8 **a1)
{
  __int64 v1; // x1
  int v2; // w3
  __int64 v3; // x5
  __int64 v4; // x6
  __int64 v5; // x1
  unsigned __int8 *v6; // x4
  __int64 v7; // x1
  char v8; // t1

  v1 = (__int64)*a1;
  v2 = **a1;
  if ( v2 == 110 )
  {
    *a1 = (unsigned __int8 *)(v1 + 1);
    v3 = 1;
    v4 = -1;
    LOBYTE(v2) = *(_BYTE *)(v1 + 1);
  }
  else
  {
    v3 = 0;
    v4 = 0;
  }
  if ( (unsigned __int8)(v2 - 48) > 9u )
  {
    v5 = 0;
  }
  else
  {
    v5 = 0;
    v6 = *a1 + 1;
    do
    {
      *a1 = v6;
      v7 = 10 * v5 + (unsigned __int8)v2;
      v8 = *v6++;
      LOBYTE(v2) = v8;
      v5 = v7 - 48;
    }
    while ( (unsigned __int8)(v8 - 48) <= 9u );
  }
  return (v5 ^ v4) + v3;
}

