/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005151C8
 * Mangled: _ZNK11CPVRTString16find_last_not_ofEPKcm
 * Demangled: CPVRTString::find_last_not_of(char const*,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000005151C8 string=0x00000000005151CC "\t\t@"
 *   insn=0x00000000005151CC string=0x00000000005151D0 "*"
 *   insn=0x00000000005151D0 string=0x00000000005151D4 "@"
 *   insn=0x00000000005151DC string=0x00000000005151E0 "*"
 *   insn=0x00000000005151E4 string=0x00000000005151E8 "J"
 *   insn=0x00000000005151F4 string=0x00000000005151F8 "m"
 *   insn=0x00000000005151F8 string=0x0000000000515204 ""
 *   insn=0x000000000051521C string=0x0000000000515220 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_last_not_of(CPVRTString *this, const char *a2, __int64 a3)
{
  unsigned __int64 v4; // x9
  unsigned __int64 result; // x0
  const char *v6; // x1
  int v7; // w10
  int v8; // t1
  __int64 v9; // x11
  bool v10; // w13
  const char *v11; // x12
  unsigned __int8 v12; // w14
  int v13; // t1

  v4 = *((_QWORD *)this + 2);
  result = v4 - a3 - 1;
  if ( result >= v4 )
    return -1;
  v8 = *(unsigned __int8 *)a2;
  v6 = a2 + 1;
  v7 = v8;
  v9 = v4 - a3 - 1;
  while ( v7 )
  {
    v10 = 0;
    v11 = v6;
    v12 = v7;
    do
    {
      v10 = v10 || *(unsigned __int8 *)(*((_QWORD *)this + 1) + v9) != v12;
      v13 = *(unsigned __int8 *)v11++;
      v12 = v13;
    }
    while ( v13 );
    if ( !v10 )
      return v9;
    if ( --v9 >= v4 )
      return -1;
  }
  return result;
}

