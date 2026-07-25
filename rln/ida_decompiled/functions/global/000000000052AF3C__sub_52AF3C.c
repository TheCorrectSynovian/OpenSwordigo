/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AF3C
 * Mangled: sub_52AF3C
 * Demangled: sub_52AF3C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 3
 *   insn=0x000000000052AF3C string=0x000000000052AF40 "a"
 *   insn=0x000000000052AF48 string=0x000000000052AF4C "!"
 *   insn=0x000000000052AF68 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AF3C(_QWORD *a1)
{
  *a1 = off_6B6F20;
  nullsub_2(a1);
  operator delete(a1);
}

