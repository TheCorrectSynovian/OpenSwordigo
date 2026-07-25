/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005150E4
 * Mangled: _ZNK11CPVRTString13find_first_ofEPKcmm
 * Demangled: CPVRTString::find_first_of(char const*,ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000005150EC string=0x00000000005150F0 "C"
 *   insn=0x00000000005150F0 string=0x00000000005150F4 "\t"
 *   insn=0x00000000005150F0 string=0x0000000000515118 "B"
 *   insn=0x00000000005150F8 string=0x00000000005150FC ")ib8+hj8?"
 *   insn=0x00000000005150FC string=0x0000000000515100 "+hj8?"
 *   insn=0x0000000000515100 string=0x0000000000515104 "?"
 *   insn=0x0000000000515108 string=0x000000000051510C "J"
 *   insn=0x000000000051510C string=0x0000000000515110 "_"
 *   insn=0x0000000000515110 string=0x0000000000515114 "c"
 *   insn=0x0000000000515118 string=0x000000000051511C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_first_of(
        CPVRTString *this,
        const char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // x8
  __int64 v5; // x10

  v4 = *((_QWORD *)this + 2);
  if ( v4 <= a3 )
    return -1;
  while ( !a4 )
  {
LABEL_6:
    if ( ++a3 >= v4 )
      return -1;
  }
  v5 = 0;
  while ( *(unsigned __int8 *)(*((_QWORD *)this + 1) + a3) != (unsigned __int8)a2[v5] )
  {
    if ( ++v5 >= a4 )
      goto LABEL_6;
  }
  return a3;
}

