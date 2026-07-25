/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581E04
 * Mangled: sub_581E04
 * Demangled: sub_581E04
 *
 * Callers: 7
 *   0x0000000000581FB4  sub_581FB4
 *   0x0000000000582140  sub_582140
 *   0x00000000005826CC  sub_5826CC
 *   0x0000000000582768  sub_582768
 *   0x00000000005828C8  sub_5828C8
 *   0x00000000005829FC  sub_5829FC
 *   0x0000000000583248  sub_583248
 *
 * Callees: 1
 *   0x00000000001FE620  .abort
 *
 * Referenced strings: 5
 *   insn=0x0000000000581E10 string=0x0000000000581E14 " "
 *   insn=0x0000000000581E1C string=0x0000000000581E20 "@"
 *   insn=0x0000000000581E20 string=0x0000000000581E48 " "
 *   insn=0x0000000000581E2C string=0x0000000000581E30 "\n"
 *   insn=0x0000000000581E38 string=0x0000000000581E50 " @"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581E04(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // w0
  bool v3; // zf

  if ( a1 == 255 )
    return 0;
  v2 = a1 & 0x70;
  if ( v2 == 32 )
    return *(_QWORD *)(a2 + 8);
  if ( v2 > 0x20 )
  {
    if ( v2 == 48 )
      return *(_QWORD *)(a2 + 16);
    v3 = v2 == 80;
    goto LABEL_8;
  }
  v3 = v2 == 16;
  if ( v2 )
  {
LABEL_8:
    if ( !v3 )
      abort();
  }
  return 0;
}

