/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005220F0
 * Mangled: sub_5220F0
 * Demangled: sub_5220F0
 *
 * Callers: 6
 *   0x0000000000521338  sub_521338
 *   0x0000000000521C18  sub_521C18
 *   0x0000000000521F50  sub_521F50
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000522234  sub_522234
 *   0x0000000000522CAC  sub_522CAC
 *
 * Callees: 2
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *
 * Referenced strings: 7
 *   insn=0x000000000052210C string=0x0000000000522110 "c"
 *   insn=0x0000000000522114 string=0x0000000000522118 "b"
 *   insn=0x000000000052211C string=0x0000000000522120 "`"
 *   insn=0x0000000000522120 string=0x0000000000522124 "s"
 *   insn=0x0000000000522124 string=0x0000000000522128 "S"
 *   insn=0x000000000052213C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000522140 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5220F0(__int64 result, unsigned int a2)
{
  __int64 **v2; // x19
  __int64 i; // x20

  v2 = *(__int64 ***)(result + 40);
  for ( i = result; v2; v2 = (__int64 **)*v2 )
    result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v2[1])(a2, i, *((unsigned int *)v2 + 4));
  return result;
}

