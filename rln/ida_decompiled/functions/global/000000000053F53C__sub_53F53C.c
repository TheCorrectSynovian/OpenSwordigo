/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F53C
 * Mangled: sub_53F53C
 * Demangled: sub_53F53C
 *
 * Callers: 1
 *   0x000000000053F560  sub_53F560
 *
 * Callees: 1
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 6
 *   insn=0x000000000053F540 string=0x000000000053F544 "!"
 *   insn=0x000000000053F548 string=0x000000000053F54C "A"
 *   insn=0x000000000053F54C string=0x000000000053F550 "!$E"
 *   insn=0x000000000053F550 string=0x000000000053F554 "!@"
 *   insn=0x000000000053F554 string=0x000000000053F558 "A"
 *   insn=0x000000000053F558 string=0x000000000053F55C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53F53C(_QWORD *a1)
{
  *a1 = off_6B71B8;
  a1[1] = off_6B6B50;
  return sub_5221DC(a1 + 1);
}

