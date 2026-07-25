/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AFF0
 * Mangled: sub_52AFF0
 * Demangled: sub_52AFF0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 3
 *   insn=0x000000000052AFF0 string=0x000000000052AFF4 "a"
 *   insn=0x000000000052AFFC string=0x000000000052B000 "!"
 *   insn=0x000000000052B01C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AFF0(_QWORD *a1)
{
  *a1 = off_6B6D20;
  nullsub_2(a1);
  operator delete(a1);
}

