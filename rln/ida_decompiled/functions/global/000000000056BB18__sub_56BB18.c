/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BB18
 * Mangled: sub_56BB18
 * Demangled: sub_56BB18
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 5
 *   insn=0x000000000056BB24 string=0x000000000056BB28 "c"
 *   insn=0x000000000056BB28 string=0x000000000056BB2C "_"
 *   insn=0x000000000056BB30 string=0x000000000056BB44 "`\n"
 *   insn=0x000000000056BB44 string=0x000000000056BB48 "b"
 *   insn=0x000000000056BB4C string=0x000000000056BB50 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56BB18(__int64 *a1, wchar_t a2, unsigned __int64 a3)
{
  __int64 v3; // x19
  unsigned __int64 v4; // x3
  wchar_t *v6; // x0

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 - 24);
  if ( a3 < v4 && (v6 = wmemchr((const wchar_t *)(v3 + 4 * a3), a2, v4 - a3)) != 0 )
    return ((__int64)v6 - v3) >> 2;
  else
    return -1;
}

