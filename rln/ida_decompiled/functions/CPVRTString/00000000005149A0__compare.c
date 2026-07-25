/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005149A0
 * Mangled: _ZNK11CPVRTString7compareEmmRKS_
 * Demangled: CPVRTString::compare(ulong,ulong,CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000005149A0 string=0x00000000005149A4 "j@"
 *   insn=0x00000000005149A4 string=0x00000000005149A8 "\t\t@"
 *   insn=0x00000000005149A8 string=0x00000000005149AC "_"
 *   insn=0x00000000005149AC string=0x00000000005149B0 "+"
 *   insn=0x00000000005149B0 string=0x00000000005149B4 "J1"
 *   insn=0x00000000005149B8 string=0x00000000005149BC "i1"
 *   insn=0x00000000005149C0 string=0x00000000005149C4 "k1"
 *   insn=0x00000000005149CC string=0x00000000005149D0 "@!"
 *   insn=0x00000000005149D4 string=0x00000000005149D8 ""
 *   insn=0x00000000005149D8 string=0x00000000005149DC "h"
 *   insn=0x00000000005149E0 string=0x00000000005149E4 "k"
 *   insn=0x00000000005149E4 string=0x00000000005149E8 "li"
 *   insn=0x00000000005149E8 string=0x00000000005149EC "i"
 *   insn=0x00000000005149F8 string=0x00000000005149FC "J"
 *   insn=0x00000000005149FC string=0x0000000000514A00 "_"
 *   insn=0x0000000000514A00 string=0x0000000000514A04 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::compare(CPVRTString *this, __int64 a2, unsigned __int64 a3, const CPVRTString *a4)
{
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x11
  unsigned __int64 v7; // x9
  bool v8; // cf
  _BOOL4 v9; // w10
  __int64 result; // x0
  __int64 v11; // x10
  int v12; // w12
  int v13; // w13

  v5 = *((_QWORD *)a4 + 2);
  v6 = *((_QWORD *)this + 2) - a2;
  if ( v5 >= a3 )
    v5 = a3;
  if ( v6 >= v5 )
    v7 = v5;
  else
    v7 = *((_QWORD *)this + 2) - a2;
  if ( v6 >= a3 )
    v6 = a3;
  v8 = v6 >= v5;
  v9 = v6 > v5;
  if ( v8 )
    result = v9;
  else
    result = 0xFFFFFFFFLL;
  if ( v7 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = *(char *)(*((_QWORD *)this + 1) + a2 + v11);
      v13 = *(char *)(*((_QWORD *)a4 + 1) + v11);
      if ( v12 < v13 )
        break;
      if ( v12 > v13 )
        return 1;
      if ( ++v11 >= v7 )
        return result;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

