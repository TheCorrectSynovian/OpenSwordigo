/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051523C
 * Mangled: _ZNK11CPVRTString16find_last_not_ofEPKcmm
 * Demangled: CPVRTString::find_last_not_of(char const*,ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000051523C string=0x0000000000515240 "\t\t@"
 *   insn=0x0000000000515240 string=0x0000000000515244 "*"
 *   insn=0x0000000000515244 string=0x0000000000515248 "@"
 *   insn=0x0000000000515264 string=0x0000000000515268 "m"
 *   insn=0x0000000000515268 string=0x0000000000515274 ""
 *   insn=0x0000000000515274 string=0x0000000000515278 "n"
 *   insn=0x0000000000515288 string=0x000000000051528C "k"
 *   insn=0x0000000000515294 string=0x0000000000515298 "J"
 *   insn=0x0000000000515298 string=0x000000000051529C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_last_not_of(CPVRTString *this, const char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // x9
  unsigned __int64 result; // x0
  __int64 v7; // x10
  bool v8; // w13
  const char *v9; // x11
  __int64 v10; // x12

  v5 = *((_QWORD *)this + 2);
  result = v5 - a3 - 1;
  if ( result >= v5 )
    return -1;
  v7 = v5 - a3 - 1;
  while ( a4 )
  {
    v8 = 0;
    v9 = a2;
    v10 = a4;
    do
    {
      v8 = v8 || *(unsigned __int8 *)(*((_QWORD *)this + 1) + v7) != *(unsigned __int8 *)v9;
      --v10;
      ++v9;
    }
    while ( v10 );
    if ( !v8 )
      return v7;
    if ( --v7 >= v5 )
      return -1;
  }
  return result;
}

