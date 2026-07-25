/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005153CC
 * Mangled: _ZNK11CPVRTString12find_last_ofEPKcmm
 * Demangled: CPVRTString::find_last_of(char const*,ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000005153CC string=0x00000000005153D0 "\t\t@"
 *   insn=0x00000000005153D0 string=0x00000000005153D4 "*"
 *   insn=0x00000000005153D4 string=0x00000000005153D8 "@"
 *   insn=0x00000000005153F4 string=0x00000000005153F8 "\n"
 *   insn=0x00000000005153FC string=0x0000000000515400 "Ji`8,hk8_"
 *   insn=0x0000000000515400 string=0x0000000000515404 ",hk8_"
 *   insn=0x0000000000515404 string=0x0000000000515408 "_"
 *   insn=0x000000000051540C string=0x0000000000515410 "k"
 *   insn=0x0000000000515414 string=0x0000000000515418 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_last_of(
        CPVRTString *this,
        const char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // x9
  unsigned __int64 result; // x0
  __int64 v7; // x11

  v5 = *((_QWORD *)this + 2);
  result = v5 - a3 - 1;
  if ( result >= v5 )
    return -1;
  while ( !a4 )
  {
LABEL_3:
    if ( --result >= v5 )
      return -1;
  }
  v7 = 0;
  while ( *(unsigned __int8 *)(*((_QWORD *)this + 1) + result) == (unsigned __int8)a2[v7] )
  {
    if ( ++v7 >= a4 )
      goto LABEL_3;
  }
  return result;
}

