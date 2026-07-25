/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B0E0
 * Mangled: sub_54B0E0
 * Demangled: sub_54B0E0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000054B0F0 string=0x000000000054B0F4 "!$@"
 *   insn=0x000000000054B0F4 string=0x000000000054B0F8 " "
 *   insn=0x000000000054B104 string=0x000000000054B108 "a\n@"
 *   insn=0x000000000054B108 string=0x000000000054B10C " D@"
 *   insn=0x000000000054B10C string=0x000000000054B110 "a\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B0E0(_QWORD *a1)
{
  bool v2; // zf
  __int64 result; // x0
  unsigned int *v4; // x1

  v2 = (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1) == -1;
  result = 0xFFFFFFFFLL;
  if ( !v2 )
  {
    v4 = (unsigned int *)a1[2];
    result = *v4;
    a1[2] = v4 + 1;
  }
  return result;
}

