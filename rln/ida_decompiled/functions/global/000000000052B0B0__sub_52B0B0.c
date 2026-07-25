/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B0B0
 * Mangled: sub_52B0B0
 * Demangled: sub_52B0B0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 4
 *   insn=0x000000000052B0B0 string=0x000000000052B0B4 "A"
 *   insn=0x000000000052B0BC string=0x000000000052B0C0 "!"
 *   insn=0x000000000052B0D8 string=0x000000000052B0DC "u0"
 *   insn=0x000000000052B0DC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52B0B0(_QWORD *a1)
{
  *a1 = off_6B6F80;
  nullsub_2(a1);
  operator delete(a1);
}

