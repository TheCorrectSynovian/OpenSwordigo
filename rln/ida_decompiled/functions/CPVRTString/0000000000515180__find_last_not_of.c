/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515180
 * Mangled: _ZNK11CPVRTString16find_last_not_ofEcm
 * Demangled: CPVRTString::find_last_not_of(char,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000515180 string=0x0000000000515184 "\t\t@"
 *   insn=0x0000000000515184 string=0x0000000000515188 "*"
 *   insn=0x0000000000515188 string=0x000000000051518C "@"
 *   insn=0x0000000000515190 string=0x0000000000515194 "B"
 *   insn=0x0000000000515194 string=0x0000000000515198 ""
 *   insn=0x0000000000515198 string=0x000000000051519C "\ni`8_"
 *   insn=0x000000000051519C string=0x00000000005151A0 "_"
 *   insn=0x00000000005151AC string=0x00000000005151B0 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_last_not_of(CPVRTString *this, unsigned __int8 a2, __int64 a3)
{
  unsigned __int64 v4; // x9
  unsigned __int64 result; // x0
  __int64 v6; // x8

  v4 = *((_QWORD *)this + 2);
  result = v4 - a3 - 1;
  if ( result >= v4 )
    return -1;
  v6 = *((_QWORD *)this + 1);
  while ( *(unsigned __int8 *)(v6 + result) == a2 )
  {
    if ( --result >= v4 )
      return -1;
  }
  return result;
}

