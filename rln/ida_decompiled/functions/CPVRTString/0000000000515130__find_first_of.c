/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515130
 * Mangled: _ZNK11CPVRTString13find_first_ofERKS_m
 * Demangled: CPVRTString::find_first_of(CPVRTString const&,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000515138 string=0x000000000051513C ")"
 *   insn=0x000000000051513C string=0x0000000000515140 "J"
 *   insn=0x0000000000515140 string=0x0000000000515144 ""
 *   insn=0x0000000000515140 string=0x0000000000515168 "B"
 *   insn=0x0000000000515148 string=0x000000000051514C "kib8-il8"
 *   insn=0x000000000051514C string=0x0000000000515150 "-il8"
 *   insn=0x0000000000515160 string=0x0000000000515164 "c"
 *   insn=0x0000000000515168 string=0x000000000051516C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_first_of(CPVRTString *this, const CPVRTString *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x10
  __int64 v5; // x12

  v3 = *((_QWORD *)this + 2);
  if ( v3 <= a3 )
    return -1;
  v4 = *((_QWORD *)a2 + 2);
  while ( !v4 )
  {
LABEL_7:
    if ( ++a3 >= v3 )
      return -1;
  }
  v5 = 0;
  while ( *(unsigned __int8 *)(*((_QWORD *)this + 1) + a3) != *(unsigned __int8 *)(*((_QWORD *)a2 + 1) + v5) )
  {
    if ( ++v5 >= v4 )
      goto LABEL_7;
  }
  return a3;
}

