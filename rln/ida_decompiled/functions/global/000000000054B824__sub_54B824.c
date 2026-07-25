/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B824
 * Mangled: sub_54B824
 * Demangled: sub_54B824
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000054B83C string=0x000000000054B840 "`"
 *   insn=0x000000000054B848 string=0x000000000054B864 "c"
 *   insn=0x000000000054B84C string=0x000000000054B850 "B"
 *   insn=0x000000000054B850 string=0x000000000054B854 "B,@"
 *   insn=0x000000000054B854 string=0x000000000054B858 "@"
 *   insn=0x000000000054B864 string=0x000000000054B868 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B824(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // x3
  __int64 result; // x0

  v3 = a1[2];
  if ( a1[1] >= v3 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
  result = *(unsigned int *)(v3 - 4);
  if ( (_DWORD)result != a2 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
  a1[2] = v3 - 4;
  return result;
}

