/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514EC8
 * Mangled: _ZNK11CPVRTString17find_first_not_ofEcm
 * Demangled: CPVRTString::find_first_not_of(char,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000514ECC string=0x0000000000514ED0 "\t"
 *   insn=0x0000000000514ED0 string=0x0000000000514ED4 "\t"
 *   insn=0x0000000000514ED4 string=0x0000000000514ED8 "*ib8_"
 *   insn=0x0000000000514ED8 string=0x0000000000514EDC "_"
 *   insn=0x0000000000514EE0 string=0x0000000000514EE4 "B"
 *   insn=0x0000000000514EE4 string=0x0000000000514EE8 "_"
 *   insn=0x0000000000514EE8 string=0x0000000000514EEC "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_first_not_of(CPVRTString *this, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x8

  v3 = *((_QWORD *)this + 2);
  if ( v3 <= a3 )
    return -1;
  while ( *(unsigned __int8 *)(*((_QWORD *)this + 1) + a3) == a2 )
  {
    if ( ++a3 >= v3 )
      return -1;
  }
  return a3;
}

