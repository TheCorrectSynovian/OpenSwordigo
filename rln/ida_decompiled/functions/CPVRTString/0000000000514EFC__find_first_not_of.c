/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514EFC
 * Mangled: _ZNK11CPVRTString17find_first_not_ofEPKcm
 * Demangled: CPVRTString::find_first_not_of(char const*,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000514F04 string=0x0000000000514F08 ")"
 *   insn=0x0000000000514F0C string=0x0000000000514F10 "I"
 *   insn=0x0000000000514F1C string=0x0000000000514F20 "l"
 *   insn=0x0000000000514F28 string=0x0000000000514F3C "m"
 *   insn=0x0000000000514F3C string=0x0000000000514F40 ""
 *   insn=0x0000000000514F44 string=0x0000000000514F48 "J"
 *   insn=0x0000000000514F48 string=0x0000000000514F4C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_first_not_of(CPVRTString *this, const char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x8
  const char *v4; // x1
  int v5; // w9
  int v6; // t1
  unsigned __int64 v7; // x10
  bool v8; // w12
  const char *v9; // x11
  unsigned __int8 v10; // w13
  int v11; // t1

  v3 = *((_QWORD *)this + 2);
  if ( v3 <= a3 )
    return -1;
  v6 = *(unsigned __int8 *)a2;
  v4 = a2 + 1;
  v5 = v6;
  v7 = a3;
  while ( v5 )
  {
    v8 = 0;
    v9 = v4;
    v10 = v5;
    do
    {
      v8 = v8 || *(unsigned __int8 *)(*((_QWORD *)this + 1) + v7) == v10;
      v11 = *(unsigned __int8 *)v9++;
      v10 = v11;
    }
    while ( v11 );
    if ( !v8 )
      return v7;
    if ( ++v7 >= v3 )
      return -1;
  }
  return a3;
}

