/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000530F28
 * Mangled: sub_530F28
 * Demangled: sub_530F28
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000530D30  sub_530D30
 *
 * Referenced strings: 1
 *   insn=0x0000000000530F4C string=0x0000000000530F50 "x"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_530F28(
        int a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        unsigned __int8 *a6,
        int *a7)
{
  int v7; // w19
  void *result; // x0

  v7 = a3;
  result = sub_530D30(a4, a2, a5, a6, a3, *a7);
  *a7 = v7;
  return result;
}

