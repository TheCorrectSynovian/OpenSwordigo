/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C978
 * Mangled: sub_56C978
 * Demangled: sub_56C978
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 6
 *   insn=0x000000000056C978 string=0x000000000056C97C """
 *   insn=0x000000000056C990 string=0x000000000056C994 "3"
 *   insn=0x000000000056C994 string=0x000000000056C998 "a"
 *   insn=0x000000000056C998 string=0x000000000056C99C "-"
 *   insn=0x000000000056C9A4 string=0x000000000056C9A8 " "
 *   insn=0x000000000056C9A8 string=0x000000000056C9AC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_56C978(const wchar_t **a1, __int64 a2)
{
  __int64 v3; // x19
  char *result; // x0

  v3 = a2 - (_QWORD)*a1;
  sub_56C650(a1, v3 >> 2, 1, 0);
  result = (char *)*a1 + v3;
  *((_DWORD *)*a1 - 2) = -1;
  return result;
}

