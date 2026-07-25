/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000580074
 * Mangled: sub_580074
 * Demangled: sub_580074
 *
 * Callers: 1
 *   0x000000000051D9B4  __gxx_personality_v0
 *
 * Callees: 1
 *   0x00000000001FE620  .abort
 *
 * Referenced strings: 7
 *   insn=0x0000000000580074 string=0x0000000000580078 "?"
 *   insn=0x000000000058007C string=0x0000000000580080 "M"
 *   insn=0x0000000000580080 string=0x0000000000580084 "g"
 *   insn=0x0000000000580088 string=0x000000000058008C "#|@"
 *   insn=0x00000000005800A0 string=0x00000000005800A4 "c`M9c"
 *   insn=0x00000000005800A4 string=0x00000000005800A8 "c"
 *   insn=0x00000000005800B8 string=0x00000000005800BC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_580074(_QWORD *result, int a2, __int64 a3)
{
  if ( a2 > 97 )
LABEL_2:
    abort();
  if ( (result[104] & 0x4000000000000000LL) != 0 && *((_BYTE *)result + a2 + 856) )
  {
    result[a2] = a3;
  }
  else
  {
    result = (_QWORD *)result[a2];
    if ( byte_6FE360[a2] != 8 )
      goto LABEL_2;
    *result = a3;
  }
  return result;
}

