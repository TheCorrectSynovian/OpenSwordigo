/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000553064
 * Mangled: sub_553064
 * Demangled: sub_553064
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *
 * Referenced strings: 1
 *   insn=0x0000000000553064 string=0x0000000000553068 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_553064(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        _DWORD **a7)
{
  if ( a4 )
    return sub_55201C(a1, a2, a3, a5, a6, a7);
  else
    return sub_552738(a1, a2, a3, a5, a6, a7);
}

