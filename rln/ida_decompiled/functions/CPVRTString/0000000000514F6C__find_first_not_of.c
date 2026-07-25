/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514F6C
 * Mangled: _ZNK11CPVRTString17find_first_not_ofEPKcmm
 * Demangled: CPVRTString::find_first_not_of(char const*,ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000514F88 string=0x0000000000514F8C "l"
 *   insn=0x0000000000514F94 string=0x0000000000514FAC "k"
 *   insn=0x0000000000514F98 string=0x0000000000514F9C "M"
 *   insn=0x0000000000514FAC string=0x0000000000514FB0 "J"
 *   insn=0x0000000000514FB8 string=0x0000000000514FBC ")"
 *   insn=0x0000000000514FBC string=0x0000000000514FC0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_first_not_of(
        CPVRTString *this,
        const char *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x9
  bool v6; // w12
  const char *v7; // x10
  __int64 v8; // x11

  v4 = *((_QWORD *)this + 2);
  if ( v4 <= a3 )
    return -1;
  v5 = a3;
  while ( a4 )
  {
    v6 = 0;
    v7 = a2;
    v8 = a4;
    do
    {
      v6 = v6 || *(unsigned __int8 *)(*((_QWORD *)this + 1) + v5) == *(unsigned __int8 *)v7;
      --v8;
      ++v7;
    }
    while ( v8 );
    if ( !v6 )
      return v5;
    if ( ++v5 >= v4 )
      return -1;
  }
  return a3;
}

