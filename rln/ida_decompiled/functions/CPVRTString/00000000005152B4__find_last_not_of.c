/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005152B4
 * Mangled: _ZNK11CPVRTString16find_last_not_ofERKS_m
 * Demangled: CPVRTString::find_last_not_of(CPVRTString const&,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000005152B4 string=0x00000000005152B8 "\t\t@"
 *   insn=0x00000000005152B8 string=0x00000000005152BC "*"
 *   insn=0x00000000005152BC string=0x00000000005152C0 "@"
 *   insn=0x00000000005152C8 string=0x00000000005152CC "*"
 *   insn=0x00000000005152E0 string=0x00000000005152E4 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_last_not_of(CPVRTString *this, const CPVRTString *a2, __int64 a3)
{
  unsigned __int64 v4; // x9
  unsigned __int64 result; // x0
  __int64 v6; // x12
  bool v7; // w15
  unsigned __int8 *v8; // x13
  __int64 v9; // x14

  v4 = *((_QWORD *)this + 2);
  result = v4 - a3 - 1;
  if ( result >= v4 )
    return -1;
  v6 = v4 - a3 - 1;
  while ( *((_QWORD *)a2 + 2) )
  {
    v7 = 0;
    v8 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
    v9 = *((_QWORD *)a2 + 2);
    do
    {
      v7 = v7 || *(unsigned __int8 *)(*((_QWORD *)this + 1) + v6) != *v8;
      --v9;
      ++v8;
    }
    while ( v9 );
    if ( !v7 )
      return v6;
    if ( --v6 >= v4 )
      return -1;
  }
  return result;
}

