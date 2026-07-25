/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005666B0
 * Mangled: sub_5666B0
 * Demangled: sub_5666B0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 4
 *   insn=0x00000000005666B4 string=0x00000000005666B8 "_"
 *   insn=0x00000000005666B8 string=0x00000000005666BC "@"
 *   insn=0x00000000005666BC string=0x00000000005666C0 "(l"
 *   insn=0x00000000005666BC string=0x00000000005666C4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_5666B0(_BYTE *a1, unsigned __int8 *a2, __int64 a3)
{
  size_t v3; // x2
  void *result; // x0

  v3 = a3 - (_QWORD)a2;
  if ( v3 != 1 )
    return memcpy(a1, a2, v3);
  result = (void *)*a2;
  *a1 = (_BYTE)result;
  return result;
}

