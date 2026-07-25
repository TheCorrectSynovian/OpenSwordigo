/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520050
 * Mangled: sub_520050
 * Demangled: sub_520050
 *
 * Callers: 1
 *   0x000000000053CB20  sub_53CB20
 *
 * Callees: 5
 *   0x0000000000520AAC  sub_520AAC
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000057074C  sub_57074C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x0000000000520050 string=0x0000000000520054 "?"
 *   insn=0x0000000000520064 string=0x0000000000520068 "`\n"
 *   insn=0x000000000052006C string=0x0000000000520074 "`"
 *   insn=0x0000000000520074 string=0x0000000000520078 "fo"
 *   insn=0x0000000000520078 string=0x000000000052007C "`\n"
 *   insn=0x0000000000520078 string=0x000000000053BE10 "@"
 *   insn=0x000000000052009C string=0x00000000005200A0 "!`C"
 *   insn=0x00000000005200A0 string=0x00000000005200A4 "!@"
 *   insn=0x00000000005200A4 string=0x00000000005200A8 "a"
 *   insn=0x00000000005200B8 string=0x00000000005200BC "_"
 *   insn=0x00000000005200D0 string=0x00000000005200D4 "a"
 *   insn=0x00000000005200D4 string=0x00000000005200D8 "`\n"
 *   insn=0x00000000005200DC string=0x00000000005200E4 "`"
 *   insn=0x00000000005200F0 string=0x00000000005200F4 "`\n"
 *   insn=0x00000000005200F8 string=0x00000000005200FC "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520050(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = off_6D9BB0;
  *(_QWORD *)(a1 + 16) = sub_53BE10();
  *(_BYTE *)(a1 + 24) = 0;
  return sub_520AAC(a1);
}

