/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B110
 * Mangled: sub_52B110
 * Demangled: sub_52B110
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 4
 *   insn=0x000000000052B110 string=0x000000000052B114 "A"
 *   insn=0x000000000052B11C string=0x000000000052B120 "!"
 *   insn=0x000000000052B138 string=0x000000000052B13C "]0"
 *   insn=0x000000000052B13C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52B110(_QWORD *a1)
{
  *a1 = off_6B6FE0;
  nullsub_2(a1);
  operator delete(a1);
}

