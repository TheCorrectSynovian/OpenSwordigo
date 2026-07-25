/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C8A8
 * Mangled: sub_56C8A8
 * Demangled: sub_56C8A8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 6
 *   insn=0x000000000056C8B4 string=0x000000000056C8B8 "%`"
 *   insn=0x000000000056C8B8 string=0x000000000056C8BC "$"
 *   insn=0x000000000056C8CC string=0x000000000056C8D0 "@"
 *   insn=0x000000000056C8E4 string=0x000000000056C8E8 "Z"
 *   insn=0x000000000056C8E8 string=0x000000000056C8EC "a"
 *   insn=0x000000000056C8F0 string=0x000000000056C8F4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56C8A8(const wchar_t **result)
{
  const wchar_t *v1; // x1
  int v2; // w4
  const wchar_t **v3; // x19

  v1 = *result;
  v2 = *(*result - 2);
  if ( (v2 & 0x80000000) == 0 && *result - 6 != (const wchar_t *)&qword_6FD300 )
  {
    if ( v2 )
    {
      v3 = result;
      sub_56C650(result, 0, 0, 0);
      v1 = *v3;
    }
    result = (const wchar_t **)0xFFFFFFFFLL;
    *((_DWORD *)v1 - 2) = -1;
  }
  return result;
}

