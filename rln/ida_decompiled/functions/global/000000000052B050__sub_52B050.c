/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B050
 * Mangled: sub_52B050
 * Demangled: sub_52B050
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 3
 *   insn=0x000000000052B050 string=0x000000000052B054 "A"
 *   insn=0x000000000052B05C string=0x000000000052B060 "!"
 *   insn=0x000000000052B07C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52B050(_QWORD *a1)
{
  *a1 = off_6B6E00;
  nullsub_2(a1);
  operator delete(a1);
}

