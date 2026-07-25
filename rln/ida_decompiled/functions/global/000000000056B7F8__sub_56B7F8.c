/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B7F8
 * Mangled: sub_56B7F8
 * Demangled: sub_56B7F8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 5
 *   insn=0x000000000056B804 string=0x000000000056B808 "c"
 *   insn=0x000000000056B808 string=0x000000000056B80C "_"
 *   insn=0x000000000056B810 string=0x000000000056B824 "`\n"
 *   insn=0x000000000056B824 string=0x000000000056B828 "b"
 *   insn=0x000000000056B82C string=0x000000000056B830 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56B7F8(__int64 *a1, wchar_t a2, unsigned __int64 a3)
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

