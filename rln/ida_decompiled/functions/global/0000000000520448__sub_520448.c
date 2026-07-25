/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520448
 * Mangled: sub_520448
 * Demangled: sub_520448
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F9EC  sub_51F9EC
 *
 * Referenced strings: 3
 *   insn=0x0000000000520454 string=0x0000000000520458 "!@3"
 *   insn=0x0000000000520460 string=0x0000000000520464 "b"
 *   insn=0x0000000000520474 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_520448(_QWORD *a1)
{
  *a1 = off_6D9CD0;
  sub_51F9EC((__int64)a1);
  operator delete(a1);
}

