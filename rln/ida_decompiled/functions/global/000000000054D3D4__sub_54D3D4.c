/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D3D4
 * Mangled: sub_54D3D4
 * Demangled: sub_54D3D4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 3
 *   insn=0x000000000054D3D4 string=0x000000000054D3D8 "A"
 *   insn=0x000000000054D3E0 string=0x000000000054D3E4 "!@,"
 *   insn=0x000000000054D400 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D3D4(_QWORD *a1)
{
  *a1 = off_6B7B10;
  nullsub_2();
  operator delete(a1);
}

