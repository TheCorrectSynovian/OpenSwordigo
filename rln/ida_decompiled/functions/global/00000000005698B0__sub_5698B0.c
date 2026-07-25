/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005698B0
 * Mangled: sub_5698B0
 * Demangled: sub_5698B0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x00000000005698C0 string=0x00000000005698C4 "$`"
 *   insn=0x00000000005698C4 string=0x00000000005698C8 "#"
 *   insn=0x00000000005698CC string=0x0000000000569908 """
 *   insn=0x00000000005698D8 string=0x00000000005698DC "`"
 *   insn=0x00000000005698F4 string=0x00000000005698F8 "a"
 *   insn=0x0000000000569900 string=0x0000000000569904 " "
 *   insn=0x0000000000569910 string=0x0000000000569914 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_5698B0@<X0>(__int64 *a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x1
  int v4; // w3
  _QWORD *result; // x0
  _QWORD *v6; // [xsp+28h] [xbp+28h]

  v2 = *a1;
  v4 = *(_DWORD *)(*a1 - 8);
  if ( (v4 & 0x80000000) == 0 && (__int64 *)(*a1 - 24) != &qword_6FD2E0 )
  {
    if ( v4 )
    {
      v6 = a2;
      sub_568CB8(a1, 0, 0, 0);
      v2 = *a1;
      a2 = v6;
    }
    *(_DWORD *)(v2 - 8) = -1;
  }
  result = a2;
  *a2 = v2 + *(_QWORD *)(v2 - 24);
  return result;
}

