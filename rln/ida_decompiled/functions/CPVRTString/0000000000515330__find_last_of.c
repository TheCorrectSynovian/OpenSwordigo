/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515330
 * Mangled: _ZNK11CPVRTString12find_last_ofEcm
 * Demangled: CPVRTString::find_last_of(char,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000515330 string=0x0000000000515334 "\t\t@"
 *   insn=0x0000000000515334 string=0x0000000000515338 "*"
 *   insn=0x0000000000515338 string=0x000000000051533C "@"
 *   insn=0x0000000000515340 string=0x0000000000515344 "B"
 *   insn=0x0000000000515344 string=0x0000000000515348 ""
 *   insn=0x0000000000515348 string=0x000000000051534C "\ni`8_"
 *   insn=0x000000000051534C string=0x0000000000515350 "_"
 *   insn=0x000000000051535C string=0x0000000000515360 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_last_of(CPVRTString *this, unsigned __int8 a2, __int64 a3)
{
  unsigned __int64 v4; // x9
  unsigned __int64 result; // x0
  __int64 v6; // x8

  v4 = *((_QWORD *)this + 2);
  result = v4 - a3 - 1;
  if ( result >= v4 )
    return -1;
  v6 = *((_QWORD *)this + 1);
  while ( *(unsigned __int8 *)(v6 + result) != a2 )
  {
    if ( --result >= v4 )
      return -1;
  }
  return result;
}

