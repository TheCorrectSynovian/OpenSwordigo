/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B71C
 * Mangled: sub_54B71C
 * Demangled: sub_54B71C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000054B730 string=0x000000000054B734 "?"
 *   insn=0x000000000054B738 string=0x000000000054B73C " D@"
 *   insn=0x000000000054B73C string=0x000000000054B740 "a\n"
 *   insn=0x000000000054B748 string=0x000000000054B74C "`\n@"
 *   insn=0x000000000054B74C string=0x000000000054B750 "a"
 *   insn=0x000000000054B754 string=0x000000000054B758 """
 *   insn=0x000000000054B758 string=0x000000000054B77C "a"
 *   insn=0x000000000054B76C string=0x000000000054B770 "!(@"
 *   insn=0x000000000054B770 string=0x000000000054B774 " "
 *   insn=0x000000000054B780 string=0x000000000054B784 "!$@"
 *   insn=0x000000000054B784 string=0x000000000054B788 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B71C(_QWORD *a1)
{
  unsigned int *v1; // x1
  __int64 result; // x0
  unsigned int *v4; // x0

  v1 = (unsigned int *)a1[2];
  if ( (unsigned __int64)v1 >= a1[3] )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
  }
  else
  {
    result = *v1;
    a1[2] = v1 + 1;
  }
  if ( (_DWORD)result != -1 )
  {
    v4 = (unsigned int *)a1[2];
    if ( (unsigned __int64)v4 >= a1[3] )
      return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
    else
      return *v4;
  }
  return result;
}

