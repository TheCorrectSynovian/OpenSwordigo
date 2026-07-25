/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514FE0
 * Mangled: _ZNK11CPVRTString17find_first_not_ofERKS_m
 * Demangled: CPVRTString::find_first_not_of(CPVRTString const&,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000514FE8 string=0x0000000000514FEC ")"
 *   insn=0x0000000000515000 string=0x0000000000515004 "n"
 *   insn=0x0000000000515030 string=0x0000000000515034 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_first_not_of(
        CPVRTString *this,
        const CPVRTString *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x11
  bool v5; // w14
  unsigned __int8 *v6; // x12
  __int64 v7; // x13

  v3 = *((_QWORD *)this + 2);
  if ( v3 <= a3 )
    return -1;
  v4 = a3;
  while ( *((_QWORD *)a2 + 2) )
  {
    v5 = 0;
    v6 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
    v7 = *((_QWORD *)a2 + 2);
    do
    {
      v5 = v5 || *(unsigned __int8 *)(*((_QWORD *)this + 1) + v4) == *v6;
      --v7;
      ++v6;
    }
    while ( v7 );
    if ( !v5 )
      return v4;
    if ( ++v4 >= v3 )
      return -1;
  }
  return a3;
}

