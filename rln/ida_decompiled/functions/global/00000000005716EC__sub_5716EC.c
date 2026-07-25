/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005716EC
 * Mangled: sub_5716EC
 * Demangled: sub_5716EC
 *
 * Callers: 2
 *   0x0000000000571724  sub_571724
 *   0x000000000057172C  sub_57172C
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 4
 *   insn=0x00000000005716FC string=0x0000000000571700 "!<E"
 *   insn=0x0000000000571704 string=0x0000000000571708 "!@"
 *   insn=0x0000000000571708 string=0x000000000057170C "a"
 *   insn=0x0000000000571720 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5716EC(_QWORD *a1)
{
  a1[3] = off_6B6B30;
  sub_5221DC(a1 + 3);
  operator delete(a1);
}

