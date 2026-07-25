/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B080
 * Mangled: sub_52B080
 * Demangled: sub_52B080
 *
 * Callers: 3
 *   0x0000000000548378  sub_548378
 *   0x0000000000548C68  sub_548C68
 *   0x0000000000549540  sub_549540
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 3
 *   insn=0x000000000052B080 string=0x000000000052B084 "A"
 *   insn=0x000000000052B08C string=0x000000000052B090 "!"
 *   insn=0x000000000052B0AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52B080(_QWORD *a1)
{
  *a1 = off_6B6F80;
  nullsub_2(a1);
  operator delete(a1);
}

