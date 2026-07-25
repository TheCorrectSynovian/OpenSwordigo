/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566710
 * Mangled: sub_566710
 * Demangled: sub_566710
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 3
 *   insn=0x0000000000566714 string=0x0000000000566718 "_"
 *   insn=0x0000000000566718 string=0x000000000056671C "@"
 *   insn=0x000000000056671C string=0x0000000000566724 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_566710(_BYTE *a1, unsigned __int8 *a2, __int64 a3)
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

