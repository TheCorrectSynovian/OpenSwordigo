/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D2D4
 * Mangled: sub_56D2D4
 * Demangled: sub_56D2D4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 9
 *   insn=0x000000000056D2E0 string=0x000000000056D2E4 "d`"
 *   insn=0x000000000056D2E8 string=0x000000000056D2EC "b"
 *   insn=0x000000000056D2F0 string=0x000000000056D2F4 "?"
 *   insn=0x000000000056D2F4 string=0x000000000056D2F8 "b"
 *   insn=0x000000000056D2F8 string=0x000000000056D2FC "b"
 *   insn=0x000000000056D300 string=0x000000000056D334 "`"
 *   insn=0x000000000056D30C string=0x000000000056D310 " "
 *   insn=0x000000000056D32C string=0x000000000056D330 "`"
 *   insn=0x000000000056D344 string=0x000000000059F9B0 "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56D2D4(const wchar_t **a1, unsigned __int64 a2)
{
  const wchar_t *v2; // x3
  unsigned __int64 v4; // x2
  int v6; // w2

  v2 = *a1;
  v4 = *((_QWORD *)*a1 - 3);
  if ( a2 >= v4 )
    sub_5656B4("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v4);
  v6 = *(v2 - 2);
  if ( (v6 & 0x80000000) == 0 && *a1 - 6 != (const wchar_t *)&qword_6FD300 )
  {
    if ( v6 )
    {
      sub_56C650(a1, 0, 0, 0);
      v2 = *a1;
    }
    *((_DWORD *)v2 - 2) = -1;
  }
  return &v2[a2];
}

