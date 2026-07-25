/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570E14
 * Mangled: sub_570E14
 * Demangled: sub_570E14
 *
 * Callers: 1
 *   0x000000000052B4F4  sub_52B4F4
 *
 * Callees: 1
 *   0x0000000000200A90  .strcoll
 *
 * Referenced strings: 2
 *   insn=0x0000000000570E20 string=0x0000000000570E24 "?"
 *   insn=0x0000000000570E2C string=0x0000000000570E30 " x"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570E14(int a1, char *a2, char *a3)
{
  int v3; // w0

  v3 = strcoll(a2, a3);
  return (v3 != 0) | (unsigned int)(v3 >> 30);
}

