/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522C5C
 * Mangled: sub_522C5C
 * Demangled: sub_522C5C
 *
 * Callers: 5
 *   0x0000000000520D44  sub_520D44
 *   0x00000000005210E8  sub_5210E8
 *   0x00000000005216F0  sub_5216F0
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000522A18  sub_522A18
 *
 * Callees: 3
 *   0x000000000053C028  sub_53C028
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *
 * Referenced strings: 5
 *   insn=0x0000000000522C74 string=0x0000000000522C78 "a"
 *   insn=0x0000000000522C78 string=0x0000000000522C7C "A"
 *   insn=0x0000000000522C80 string=0x0000000000522C84 "a"
 *   insn=0x0000000000522C8C string=0x0000000000522C90 "`B"
 *   insn=0x0000000000522C98 string=0x0000000000522C9C "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_522C5C(__int64 a1)
{
  char v3; // [xsp+28h] [xbp+28h] BYREF

  *(_QWORD *)(a1 + 8) = 6;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 4098;
  sub_53DB28(&v3);
  sub_53C028(a1 + 208, &v3);
  return sub_53C0C8(&v3);
}

