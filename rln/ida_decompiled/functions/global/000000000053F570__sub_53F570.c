/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F570
 * Mangled: sub_53F570
 * Demangled: sub_53F570
 *
 * Callers: 1
 *   0x000000000053F5B0  sub_53F5B0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 7
 *   insn=0x000000000053F57C string=0x000000000053F580 "!"
 *   insn=0x000000000053F588 string=0x000000000053F58C "A"
 *   insn=0x000000000053F58C string=0x000000000053F590 "!$E"
 *   insn=0x000000000053F590 string=0x000000000053F594 "!@"
 *   insn=0x000000000053F594 string=0x000000000053F598 "a"
 *   insn=0x000000000053F5A8 string=0x000000000053F5AC "A"
 *   insn=0x000000000053F5AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53F570(_QWORD *a1)
{
  *a1 = off_6B71B8;
  a1[1] = off_6B6B50;
  sub_5221DC(a1 + 1);
  operator delete(a1);
}

