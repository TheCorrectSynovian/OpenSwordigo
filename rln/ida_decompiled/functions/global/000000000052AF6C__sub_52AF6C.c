/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AF6C
 * Mangled: sub_52AF6C
 * Demangled: sub_52AF6C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 4
 *   insn=0x000000000052AF6C string=0x000000000052AF70 "a"
 *   insn=0x000000000052AF78 string=0x000000000052AF7C "!@="
 *   insn=0x000000000052AF84 string=0x000000000052AF88 "B"
 *   insn=0x000000000052AF98 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AF6C(_QWORD *a1)
{
  *a1 = off_6B6F50;
  nullsub_2(a1);
  operator delete(a1);
}

