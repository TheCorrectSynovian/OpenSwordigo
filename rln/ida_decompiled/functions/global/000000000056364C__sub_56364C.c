/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056364C
 * Mangled: sub_56364C
 * Demangled: sub_56364C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 17
 *   insn=0x0000000000563658 string=0x000000000056365C """
 *   insn=0x0000000000563664 string=0x0000000000563668 "b"
 *   insn=0x0000000000563668 string=0x000000000056366C "B"
 *   insn=0x000000000056366C string=0x0000000000563670 "#"
 *   insn=0x0000000000563670 string=0x0000000000563674 "cj""
 *   insn=0x0000000000563678 string=0x0000000000563680 "b"
 *   insn=0x0000000000563680 string=0x0000000000563684 "#"
 *   insn=0x0000000000563684 string=0x0000000000563688 "`"
 *   insn=0x0000000000563688 string=0x000000000056368C "w"
 *   insn=0x0000000000563690 string=0x0000000000563694 "`"
 *   insn=0x0000000000563694 string=0x0000000000563698 "B"
 *   insn=0x0000000000563698 string=0x000000000056369C "B@"
 *   insn=0x000000000056369C string=0x00000000005636A0 "b"
 *   insn=0x00000000005636A8 string=0x00000000005636AC " "
 *   insn=0x00000000005636AC string=0x00000000005636B0 "`"
 *   insn=0x00000000005636B4 string=0x00000000005636B8 "!@"
 *   insn=0x00000000005636B8 string=0x00000000005636BC "aj "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56364C(__int64 a1, __int64 *a2)
{
  __int64 v3; // x2
  __int64 v4; // x0
  __int64 result; // x0

  v3 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v3 - 24)) = a2[3];
  *(_QWORD *)(a1 + 8) = off_6DB650;
  sub_562F10(a1 + 8);
  sub_51F468(a1 + 112);
  *(_QWORD *)(a1 + 8) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 64));
  v4 = a2[1];
  *(_QWORD *)a1 = v4;
  result = *(_QWORD *)(v4 - 24);
  *(_QWORD *)(a1 + result) = a2[2];
  return result;
}

