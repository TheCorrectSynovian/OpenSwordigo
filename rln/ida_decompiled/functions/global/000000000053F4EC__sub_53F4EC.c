/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F4EC
 * Mangled: sub_53F4EC
 * Demangled: sub_53F4EC
 *
 * Callers: 1
 *   0x000000000053F52C  sub_53F52C
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 8
 *   insn=0x000000000053F4F8 string=0x000000000053F4FC "!`"
 *   insn=0x000000000053F504 string=0x000000000053F508 "!"
 *   insn=0x000000000053F508 string=0x000000000053F50C "!<E"
 *   insn=0x000000000053F50C string=0x000000000053F510 "!@"
 *   insn=0x000000000053F510 string=0x000000000053F514 "a"
 *   insn=0x000000000053F514 string=0x000000000053F518 "1"
 *   insn=0x000000000053F524 string=0x000000000053F528 "b"
 *   insn=0x000000000053F528 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53F4EC(_QWORD *a1)
{
  *a1 = &off_6B7158;
  a1[1] = off_6B6B30;
  sub_5221DC(a1 + 1);
  operator delete(a1);
}

