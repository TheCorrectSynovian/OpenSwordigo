/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AC84
 * Mangled: sub_54AC84
 * Demangled: sub_54AC84
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000054AC94 string=0x000000000054AC98 "!$@"
 *   insn=0x000000000054AC98 string=0x000000000054AC9C " "
 *   insn=0x000000000054ACA4 string=0x000000000054ACA8 "a\n@"
 *   insn=0x000000000054ACA8 string=0x000000000054ACAC " "
 *   insn=0x000000000054ACAC string=0x000000000054ACB0 "a\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54AC84(_QWORD *a1)
{
  __int64 result; // x0
  unsigned __int8 *v3; // x1

  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  if ( (_DWORD)result != -1 )
  {
    v3 = (unsigned __int8 *)a1[2];
    result = *v3;
    a1[2] = v3 + 1;
  }
  return result;
}

