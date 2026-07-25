/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566674
 * Mangled: sub_566674
 * Demangled: sub_566674
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 5
 *   insn=0x0000000000566678 string=0x000000000056667C "@"
 *   insn=0x000000000056667C string=0x0000000000566680 "LU"
 *   insn=0x000000000056667C string=0x0000000000566684 " "
 *   insn=0x0000000000566680 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000566684 string=0x0000000000566688 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_566674(_BYTE *a1, unsigned __int8 *a2, size_t a3)
{
  void *result; // x0

  if ( a3 != 1 )
    return memmove(a1, a2, a3);
  result = (void *)*a2;
  *a1 = (_BYTE)result;
  return result;
}

