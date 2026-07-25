/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515378
 * Mangled: _ZNK11CPVRTString12find_last_ofEPKcm
 * Demangled: CPVRTString::find_last_of(char const*,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000515378 string=0x000000000051537C "\t\t@"
 *   insn=0x000000000051537C string=0x0000000000515380 "*"
 *   insn=0x0000000000515380 string=0x0000000000515384 "@"
 *   insn=0x000000000051538C string=0x0000000000515390 "*"
 *   insn=0x0000000000515390 string=0x0000000000515394 "*"
 *   insn=0x0000000000515394 string=0x0000000000515398 ""
 *   insn=0x00000000005153A0 string=0x00000000005153A4 "ki`8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_last_of(CPVRTString *this, const char *a2, __int64 a3)
{
  unsigned __int64 v4; // x9
  unsigned __int64 result; // x0
  const char *v6; // x1
  int v7; // w10
  int v8; // t1
  const char *v9; // x12
  unsigned __int8 v10; // w13
  int v11; // t1

  v4 = *((_QWORD *)this + 2);
  result = v4 - a3 - 1;
  if ( result >= v4 )
    return -1;
  v8 = *(unsigned __int8 *)a2;
  v6 = a2 + 1;
  v7 = v8;
  while ( !v7 )
  {
LABEL_7:
    if ( --result >= v4 )
      return -1;
  }
  v9 = v6;
  v10 = v7;
  while ( *(unsigned __int8 *)(*((_QWORD *)this + 1) + result) != v10 )
  {
    v11 = *(unsigned __int8 *)v9++;
    v10 = v11;
    if ( !v11 )
      goto LABEL_7;
  }
  return result;
}

