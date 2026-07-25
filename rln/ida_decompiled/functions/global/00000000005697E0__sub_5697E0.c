/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005697E0
 * Mangled: sub_5697E0
 * Demangled: sub_5697E0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x00000000005697F0 string=0x00000000005697F4 "$`"
 *   insn=0x00000000005697F4 string=0x00000000005697F8 "#"
 *   insn=0x0000000000569808 string=0x000000000056980C "`"
 *   insn=0x0000000000569820 string=0x0000000000569824 "%"
 *   insn=0x0000000000569824 string=0x0000000000569828 "a"
 *   insn=0x0000000000569830 string=0x0000000000569834 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall sub_5697E0@<X0>(__int64 *a1@<X0>, __int64 *a2@<X8>)
{
  __int64 v2; // x1
  int v4; // w3
  __int64 *v6; // [xsp+28h] [xbp+28h]

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
  *a2 = v2;
  return a2;
}

