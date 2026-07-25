/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514AB0
 * Mangled: _ZNK11CPVRTString7compareEmmPKc
 * Demangled: CPVRTString::compare(ulong,ulong,char const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 10
 *   insn=0x0000000000514AE4 string=0x0000000000514AE8 "\t0"
 *   insn=0x0000000000514AF8 string=0x0000000000514AFC "_"
 *   insn=0x0000000000514B00 string=0x0000000000514B04 " !"
 *   insn=0x0000000000514B04 string=0x0000000000514B08 ""
 *   insn=0x0000000000514B10 string=0x0000000000514B14 "J"
 *   insn=0x0000000000514B14 string=0x0000000000514B18 "Ki"
 *   insn=0x0000000000514B18 string=0x0000000000514B1C "lj"
 *   insn=0x0000000000514B28 string=0x0000000000514B2C ")"
 *   insn=0x0000000000514B2C string=0x0000000000514B30 "?"
 *   insn=0x0000000000514B30 string=0x0000000000514B34 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::compare(CPVRTString *this, __int64 a2, size_t a3, const char *a4)
{
  size_t v8; // x23
  size_t v9; // x0
  size_t v10; // x9
  size_t v11; // x8
  size_t v12; // x10
  bool v13; // cf
  _BOOL4 v14; // w9
  __int64 result; // x0
  __int64 v16; // x9
  int v17; // w11
  int v18; // w12

  v8 = *((_QWORD *)this + 2) - a2;
  v9 = strlen(a4);
  if ( v9 >= a3 )
    v10 = a3;
  else
    v10 = v9;
  if ( v8 >= v10 )
    v11 = v10;
  else
    v11 = v8;
  if ( v8 >= a3 )
    v12 = a3;
  else
    v12 = v8;
  v13 = v12 >= v10;
  v14 = v12 > v10;
  if ( v13 )
    result = v14;
  else
    result = 0xFFFFFFFFLL;
  if ( v11 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = *(char *)(*((_QWORD *)this + 1) + a2 + v16);
      v18 = a4[v16];
      if ( v17 < v18 )
        break;
      if ( v17 > v18 )
        return 1;
      if ( ++v16 >= v11 )
        return result;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

