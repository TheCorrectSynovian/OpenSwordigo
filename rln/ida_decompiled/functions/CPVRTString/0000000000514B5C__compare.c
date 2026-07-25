/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514B5C
 * Mangled: _ZNK11CPVRTString7compareEmmPKcm
 * Demangled: CPVRTString::compare(ulong,ulong,char const*,ulong)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 13
 *   insn=0x0000000000514B9C string=0x0000000000514BA0 "0"
 *   insn=0x0000000000514BA4 string=0x0000000000514BA8 "3"
 *   insn=0x0000000000514BAC string=0x0000000000514BB0 "\t3"
 *   insn=0x0000000000514BB4 string=0x0000000000514BB8 "\n0"
 *   insn=0x0000000000514BB8 string=0x0000000000514BBC "?"
 *   insn=0x0000000000514BC0 string=0x0000000000514BC4 " !"
 *   insn=0x0000000000514BC4 string=0x0000000000514BC8 ""
 *   insn=0x0000000000514BD0 string=0x0000000000514BD4 "J"
 *   insn=0x0000000000514BD4 string=0x0000000000514BD8 "Ki"
 *   insn=0x0000000000514BD8 string=0x0000000000514BDC "lj"
 *   insn=0x0000000000514BE8 string=0x0000000000514BEC ")"
 *   insn=0x0000000000514BEC string=0x0000000000514BF0 "?"
 *   insn=0x0000000000514BF0 string=0x0000000000514BF4 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::compare(CPVRTString *this, __int64 a2, size_t a3, const char *a4, size_t a5)
{
  size_t v10; // x24
  size_t v11; // x0
  size_t v12; // x8
  size_t v13; // x9
  size_t v14; // x10
  bool v15; // cf
  _BOOL4 v16; // w9
  __int64 result; // x0
  __int64 v18; // x9
  int v19; // w11
  int v20; // w12

  v10 = *((_QWORD *)this + 2) - a2;
  v11 = strlen(a4);
  if ( a3 >= a5 )
    v12 = a5;
  else
    v12 = a3;
  if ( v11 < v12 )
    v12 = v11;
  if ( v10 < v12 )
    v12 = v10;
  if ( v10 >= a3 )
    v13 = a3;
  else
    v13 = v10;
  if ( v11 >= a5 )
    v14 = a5;
  else
    v14 = v11;
  v15 = v13 >= v14;
  v16 = v13 > v14;
  if ( v15 )
    result = v16;
  else
    result = 0xFFFFFFFFLL;
  if ( v12 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = *(char *)(*((_QWORD *)this + 1) + a2 + v18);
      v20 = a4[v18];
      if ( v19 < v20 )
        break;
      if ( v19 > v20 )
        return 1;
      if ( ++v18 >= v12 )
        return result;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

