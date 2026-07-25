/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C84C
 * Mangled: sub_56C84C
 * Demangled: sub_56C84C
 *
 * Callers: 3
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x00000000005586A4  sub_5586A4
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 7
 *   insn=0x000000000056C858 string=0x000000000056C85C "B"
 *   insn=0x000000000056C860 string=0x000000000056C864 "$`"
 *   insn=0x000000000056C86C string=0x000000000056C870 """
 *   insn=0x000000000056C870 string=0x000000000056C874 "_"
 *   insn=0x000000000056C888 string=0x000000000056C88C "q"
 *   insn=0x000000000056C88C string=0x000000000056C890 "a"
 *   insn=0x000000000056C894 string=0x000000000056C898 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56C84C(const wchar_t **result)
{
  const wchar_t *v1; // x1
  const wchar_t **v2; // x19

  v1 = *result;
  if ( *result - 6 != (const wchar_t *)&qword_6FD300 )
  {
    if ( *(v1 - 2) > 0 )
    {
      v2 = result;
      sub_56C650(result, 0, 0, 0);
      v1 = *v2;
    }
    result = (const wchar_t **)0xFFFFFFFFLL;
    *((_DWORD *)v1 - 2) = -1;
  }
  return result;
}

