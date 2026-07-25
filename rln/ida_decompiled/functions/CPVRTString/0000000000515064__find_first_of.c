/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515064
 * Mangled: _ZNK11CPVRTString13find_first_ofEcm
 * Demangled: CPVRTString::find_first_of(char,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000515068 string=0x000000000051506C "\t"
 *   insn=0x000000000051506C string=0x0000000000515070 "\t"
 *   insn=0x0000000000515070 string=0x0000000000515074 "*ib8_"
 *   insn=0x0000000000515074 string=0x0000000000515078 "_"
 *   insn=0x000000000051507C string=0x0000000000515080 "B"
 *   insn=0x0000000000515080 string=0x0000000000515084 "_"
 *   insn=0x0000000000515084 string=0x0000000000515088 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_first_of(CPVRTString *this, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x8

  v3 = *((_QWORD *)this + 2);
  if ( v3 <= a3 )
    return -1;
  while ( *(unsigned __int8 *)(*((_QWORD *)this + 1) + a3) != a2 )
  {
    if ( ++a3 >= v3 )
      return -1;
  }
  return a3;
}

