/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570E3C
 * Mangled: sub_570E3C
 * Demangled: sub_570E3C
 *
 * Callers: 1
 *   0x000000000052B780  sub_52B780
 *
 * Callees: 1
 *   0x00000000001F6BB0  .strxfrm
 *
 * Referenced strings: 2
 *   insn=0x0000000000570E44 string=0x0000000000570E48 "Z"
 *   insn=0x0000000000570E48 string=0x00000000001F6BB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_570E3C(int a1, char *a2, char *a3, size_t a4)
{
  return strxfrm(a2, a3, a4);
}

