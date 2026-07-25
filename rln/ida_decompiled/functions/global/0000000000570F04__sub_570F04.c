/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570F04
 * Mangled: sub_570F04
 * Demangled: sub_570F04
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000570F0C string=0x0000000000570F10 "!"
 *   insn=0x0000000000570F14 string=0x0000000000570F18 "!@"
 *   insn=0x0000000000570F24 string=0x0000000000570F28 "`"
 *   insn=0x0000000000570F28 string=0x0000000000570F2C "O"
 *   insn=0x0000000000570F38 string=0x0000000000570F3C "!"
 *   insn=0x0000000000570F3C string=0x0000000000570F40 "!@"
 *   insn=0x0000000000570F48 string=0x0000000000570F4C "_,"
 *   insn=0x0000000000570F50 string=0x0000000000570F54 "`"
 *   insn=0x0000000000570F54 string=0x0000000000570F58 "D"
 *   insn=0x0000000000570F60 string=0x0000000000570F64 "!"
 *   insn=0x0000000000570F64 string=0x0000000000570F68 "!@"
 *   insn=0x0000000000570F6C string=0x0000000000570F70 "V,"
 *   insn=0x0000000000570F74 string=0x0000000000570F78 "SB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_570F04(__int64 a1)
{
  *(_QWORD *)a1 = off_6DB650;
  sub_562F10(a1);
  sub_51F468(a1 + 104);
  *(_QWORD *)a1 = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 56));
}

