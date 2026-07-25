/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514A1C
 * Mangled: _ZNK11CPVRTString7compareEmmRKS_mm
 * Demangled: CPVRTString::compare(ulong,ulong,CPVRTString const&,ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x0000000000514A1C string=0x0000000000514A20 "j@"
 *   insn=0x0000000000514A20 string=0x0000000000514A24 "\t\t@"
 *   insn=0x0000000000514A24 string=0x0000000000514A28 "_"
 *   insn=0x0000000000514A28 string=0x0000000000514A2C "K0"
 *   insn=0x0000000000514A2C string=0x0000000000514A30 "_"
 *   insn=0x0000000000514A30 string=0x0000000000514A34 ","
 *   insn=0x0000000000514A34 string=0x0000000000514A38 "I1"
 *   insn=0x0000000000514A48 string=0x0000000000514A4C "_"
 *   insn=0x0000000000514A4C string=0x0000000000514A50 "J1"
 *   insn=0x0000000000514A58 string=0x0000000000514A5C "@!"
 *   insn=0x0000000000514A60 string=0x0000000000514A64 ""
 *   insn=0x0000000000514A64 string=0x0000000000514A68 "h"
 *   insn=0x0000000000514A6C string=0x0000000000514A70 "k"
 *   insn=0x0000000000514A70 string=0x0000000000514A74 "li"
 *   insn=0x0000000000514A74 string=0x0000000000514A78 "i"
 *   insn=0x0000000000514A84 string=0x0000000000514A88 "J"
 *   insn=0x0000000000514A88 string=0x0000000000514A8C "_"
 *   insn=0x0000000000514A8C string=0x0000000000514A90 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::compare(
        CPVRTString *this,
        __int64 a2,
        unsigned __int64 a3,
        const CPVRTString *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x11
  unsigned __int64 v9; // x12
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x11
  bool v12; // cf
  _BOOL4 v13; // w10
  __int64 result; // x0
  __int64 v15; // x10
  int v16; // w12
  int v17; // w13

  v7 = *((_QWORD *)a4 + 2);
  if ( a3 >= a6 )
    v8 = a6;
  else
    v8 = a3;
  v9 = *((_QWORD *)this + 2) - a2;
  if ( v7 >= v8 )
    v10 = v8;
  else
    v10 = *((_QWORD *)a4 + 2);
  if ( v9 < v10 )
    v10 = *((_QWORD *)this + 2) - a2;
  if ( v9 >= a3 )
    v11 = a3;
  else
    v11 = *((_QWORD *)this + 2) - a2;
  if ( v7 >= a6 )
    v7 = a6;
  v12 = v11 >= v7;
  v13 = v11 > v7;
  if ( v12 )
    result = v13;
  else
    result = 0xFFFFFFFFLL;
  if ( v10 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = *(char *)(*((_QWORD *)this + 1) + a2 + v15);
      v17 = *(char *)(*((_QWORD *)a4 + 1) + v15);
      if ( v16 < v17 )
        break;
      if ( v16 > v17 )
        return 1;
      if ( ++v15 >= v10 )
        return result;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

