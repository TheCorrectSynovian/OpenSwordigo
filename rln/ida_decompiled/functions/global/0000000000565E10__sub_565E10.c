/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565E10
 * Mangled: sub_565E10
 * Demangled: sub_565E10
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056B178  nullsub_14
 *
 * Referenced strings: 3
 *   insn=0x0000000000565E1C string=0x0000000000565E20 "!"
 *   insn=0x0000000000565E20 string=0x0000000000565E24 "!@"
 *   insn=0x0000000000565E40 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_565E10(_QWORD *a1)
{
  *a1 = off_6DB900;
  nullsub_14();
  operator delete(a1);
}

