/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005666D0
 * Mangled: sub_5666D0
 * Demangled: sub_5666D0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 4
 *   insn=0x00000000005666D4 string=0x00000000005666D8 "_"
 *   insn=0x00000000005666D8 string=0x00000000005666DC "@"
 *   insn=0x00000000005666DC string=0x00000000005666E0 " l"
 *   insn=0x00000000005666DC string=0x00000000005666E4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_5666D0(_BYTE *a1, unsigned __int8 *a2, __int64 a3)
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

