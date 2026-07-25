/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005813B4
 * Mangled: sub_5813B4
 * Demangled: sub_5813B4
 *
 * Callers: 2
 *   0x0000000000581658  sub_581658
 *   0x00000000005818C4  sub_5818C4
 *
 * Callees: 4
 *   0x00000000001FE620  .abort
 *   0x000000000058006C  sub_58006C
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000581368  sub_581368
 *
 * Referenced strings: 5
 *   insn=0x00000000005813F0 string=0x00000000005813F4 "a"
 *   insn=0x0000000000581408 string=0x0000000000581458 "@"
 *   insn=0x000000000058140C string=0x0000000000581410 "e"
 *   insn=0x000000000058141C string=0x0000000000581420 " "
 *   insn=0x0000000000581434 string=0x0000000000581438 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5813B4(_QWORD *a1, __int64 *a2)
{
  int v4; // w24
  int v5; // w22
  __int64 result; // x0
  __int64 v7[202]; // [xsp+40h] [xbp+40h] BYREF
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, _QWORD *, __int64 *); // [xsp+690h] [xbp+690h]

  while ( 1 )
  {
    v4 = sub_5806A8(a2, (char *)v7);
    v5 = sub_58006C((__int64)a2) - ((unsigned __int64)a2[104] >> 63) == a1[3] ? 4 : 0;
    if ( v4 )
      break;
    if ( v8 )
    {
      result = v8(1, v5 | 2u, *a1, a1, a2);
      if ( (_DWORD)result == 7 )
        return result;
      if ( (_DWORD)result != 8 )
        break;
    }
    if ( v5 )
      abort();
    sub_581368(a2, v7);
  }
  return 2;
}

