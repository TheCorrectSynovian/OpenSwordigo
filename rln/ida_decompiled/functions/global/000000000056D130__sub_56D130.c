/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D130
 * Mangled: sub_56D130
 * Demangled: sub_56D130
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 7
 *   insn=0x000000000056D144 string=0x000000000056D148 "$`"
 *   insn=0x000000000056D148 string=0x000000000056D14C "#"
 *   insn=0x000000000056D150 string=0x000000000056D184 " "
 *   insn=0x000000000056D15C string=0x000000000056D160 " "
 *   insn=0x000000000056D170 string=0x000000000056D174 "7"
 *   insn=0x000000000056D174 string=0x000000000056D178 "a"
 *   insn=0x000000000056D17C string=0x000000000056D180 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56D130(const wchar_t **a1, __int64 a2)
{
  const wchar_t *v3; // x1
  int v5; // w3

  v3 = *a1;
  v5 = *(*a1 - 2);
  if ( (v5 & 0x80000000) == 0 && *a1 - 6 != (const wchar_t *)&qword_6FD300 )
  {
    if ( v5 )
    {
      sub_56C650(a1, 0, 0, 0);
      v3 = *a1;
    }
    *((_DWORD *)v3 - 2) = -1;
  }
  return &v3[a2];
}

