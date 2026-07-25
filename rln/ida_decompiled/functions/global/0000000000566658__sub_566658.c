/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566658
 * Mangled: sub_566658
 * Demangled: sub_566658
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 4
 *   insn=0x000000000056665C string=0x0000000000566660 "@"
 *   insn=0x0000000000566660 string=0x0000000000566664 "?l"
 *   insn=0x0000000000566660 string=0x0000000000566668 " "
 *   insn=0x0000000000566668 string=0x000000000056666C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_566658(_BYTE *a1, unsigned __int8 *a2, size_t a3)
{
  void *result; // x0

  if ( a3 != 1 )
    return memcpy(a1, a2, a3);
  result = (void *)*a2;
  *a1 = (_BYTE)result;
  return result;
}

