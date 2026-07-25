/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515428
 * Mangled: _ZNK11CPVRTString12find_last_ofERKS_m
 * Demangled: CPVRTString::find_last_of(CPVRTString const&,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000515428 string=0x000000000051542C "\t\t@"
 *   insn=0x000000000051542C string=0x0000000000515430 "*"
 *   insn=0x0000000000515430 string=0x0000000000515434 "@"
 *   insn=0x000000000051543C string=0x0000000000515440 "*"
 *   insn=0x0000000000515440 string=0x0000000000515444 "K"
 *   insn=0x0000000000515450 string=0x0000000000515454 "Nim8"
 *   insn=0x0000000000515464 string=0x0000000000515468 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_last_of(CPVRTString *this, const CPVRTString *a2, __int64 a3)
{
  unsigned __int64 v4; // x9
  unsigned __int64 result; // x0
  unsigned __int64 v6; // x11
  __int64 v7; // x13

  v4 = *((_QWORD *)this + 2);
  result = v4 - a3 - 1;
  if ( result >= v4 )
    return -1;
  v6 = *((_QWORD *)a2 + 2);
  while ( !v6 )
  {
LABEL_7:
    if ( --result >= v4 )
      return -1;
  }
  v7 = 0;
  while ( *(unsigned __int8 *)(*((_QWORD *)this + 1) + result) == *(unsigned __int8 *)(*((_QWORD *)a2 + 1) + v7) )
  {
    if ( ++v7 >= v6 )
      goto LABEL_7;
  }
  return result;
}

