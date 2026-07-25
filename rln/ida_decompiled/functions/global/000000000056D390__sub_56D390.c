/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D390
 * Mangled: sub_56D390
 * Demangled: sub_56D390
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000056554C  sub_56554C
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 9
 *   insn=0x000000000056D3A4 string=0x000000000056D3A8 "3"
 *   insn=0x000000000056D3AC string=0x000000000056D3B0 "C"
 *   insn=0x000000000056D3B4 string=0x000000000056D3B8 "a"
 *   insn=0x000000000056D3C4 string=0x000000000056D3C8 "#"
 *   insn=0x000000000056D3D4 string=0x000000000056D3D8 " "
 *   insn=0x000000000056D3D8 string=0x000000000056D3DC "5h3"
 *   insn=0x000000000056D3DC string=0x000000000056D3E0 """
 *   insn=0x000000000056D3F4 string=0x000000000056D3FC "T"
 *   insn=0x000000000056D3F4 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_56D390(const wchar_t **a1, __int64 a2, wchar_t a3)
{
  __int64 v4; // x19
  const wchar_t *v6; // x1
  char *result; // x0

  v4 = a2 - (_QWORD)*a1;
  if ( *((_QWORD *)*a1 - 3) == 0xFFFFFFFFFFFFFFELL )
    sub_56554C("basic_string::_M_replace_aux");
  sub_56C650(a1, v4 >> 2, 0, 1);
  v6 = *a1;
  result = (char *)v6 + v4;
  *(const wchar_t *)((char *)v6 + v4) = a3;
  *((_DWORD *)v6 - 2) = -1;
  return result;
}

