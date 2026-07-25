/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AF0C
 * Mangled: sub_52AF0C
 * Demangled: sub_52AF0C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053EA1C  sub_53EA1C
 *
 * Referenced strings: 3
 *   insn=0x000000000052AF0C string=0x000000000052AF10 "a"
 *   insn=0x000000000052AF18 string=0x000000000052AF1C "!"
 *   insn=0x000000000052AF38 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AF0C(_QWORD *a1)
{
  *a1 = off_6B6EB0;
  sub_53EA1C();
  operator delete(a1);
}

