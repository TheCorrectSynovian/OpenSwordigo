/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056977C
 * Mangled: sub_56977C
 * Demangled: sub_56977C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x0000000000569790 string=0x0000000000569794 "$`"
 *   insn=0x0000000000569794 string=0x0000000000569798 "#"
 *   insn=0x000000000056979C string=0x00000000005697D0 " "
 *   insn=0x00000000005697A8 string=0x00000000005697AC " "
 *   insn=0x00000000005697BC string=0x00000000005697C0 ">"
 *   insn=0x00000000005697C0 string=0x00000000005697C4 "a"
 *   insn=0x00000000005697C8 string=0x00000000005697CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56977C(__int64 *a1, __int64 a2)
{
  __int64 v3; // x1
  int v5; // w3

  v3 = *a1;
  v5 = *(_DWORD *)(*a1 - 8);
  if ( (v5 & 0x80000000) == 0 && (__int64 *)(*a1 - 24) != &qword_6FD2E0 )
  {
    if ( v5 )
    {
      sub_568CB8(a1, 0, 0, 0);
      v3 = *a1;
    }
    *(_DWORD *)(v3 - 8) = -1;
  }
  return v3 + a2;
}

