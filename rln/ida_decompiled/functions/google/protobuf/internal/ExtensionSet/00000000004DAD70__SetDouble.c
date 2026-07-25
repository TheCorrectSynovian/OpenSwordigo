/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DAD70
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet9SetDoubleEihdPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetDouble(int,uchar,double,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000001F5330  google::protobuf::internal::ExtensionSet::SetDouble(int,uchar,double,google::protobuf::FieldDescriptor const*)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 31
 *   insn=0x00000000004DAD90 string=0x00000000004DAD94 "["
 *   insn=0x00000000004DAD94 string=0x00000000004DAD98 "h"
 *   insn=0x00000000004DAD98 string=0x00000000004DAD9C ""
 *   insn=0x00000000004DADCC string=0x00000000004DADD0 "#@"
 *   insn=0x00000000004DADD0 string=0x00000000004DADD4 "\tc"
 *   insn=0x00000000004DADD4 string=0x00000000004DADD8 "\nC"
 *   insn=0x00000000004DADDC string=0x00000000004DADE0 "I"
 *   insn=0x00000000004DADE0 string=0x00000000004DADE4 ")"
 *   insn=0x00000000004DADE4 string=0x00000000004DADE8 ")"
 *   insn=0x00000000004DADF0 string=0x00000000004DADF4 "l"
 *   insn=0x00000000004DADF4 string=0x00000000004DADF8 ""
 *   insn=0x00000000004DADF8 string=0x00000000004DAE14 " @"
 *   insn=0x00000000004DAE0C string=0x00000000004DAE10 "<"
 *   insn=0x00000000004DAE18 string=0x00000000004DAE1C "*"
 *   insn=0x00000000004DAE1C string=0x00000000004DAE40 ""
 *   insn=0x00000000004DAE24 string=0x00000000004DAE28 " "
 *   insn=0x00000000004DAE28 string=0x00000000004DAE2C "#@"
 *   insn=0x00000000004DAE54 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DAE74 string=0x00000000004DAE78 "V#"
 *   insn=0x00000000004DAE78 string=0x00000000004DAE7C "@C"
 *   insn=0x00000000004DAE7C string=0x00000000004DAE80 "AC"
 *   insn=0x00000000004DAE80 string=0x00000000004DAE84 "HG"
 *   insn=0x00000000004DAE8C string=0x00000000004DAE90 "H"
 *   insn=0x00000000004DAE90 string=0x00000000004DAE94 ")"
 *   insn=0x00000000004DAE98 string=0x00000000004DAE9C "S"
 *   insn=0x00000000004DAE9C string=0x00000000004DAEA0 "T"
 *   insn=0x00000000004DAEA0 string=0x00000000004DAEA4 "_"
 *   insn=0x00000000004DAEA8 string=0x00000000004DAEAC ""
 *   insn=0x00000000004DAEAC string=0x00000000004DAEB0 "h"
 *   insn=0x00000000004DAEB8 string=0x00000000004DAEBC "A"
 *   insn=0x00000000004DAEE4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::SetDouble(
        _QWORD *a1,
        int a2,
        char a3,
        __int64 a4,
        double a5)
{
  __int64 v7; // x9
  _QWORD *v11; // x23
  _QWORD *v12; // x24
  int v13; // w8
  __int64 *v14; // x9
  __int64 result; // x0
  _BOOL4 v16; // w25
  __int64 v17; // x8
  __int64 v18; // x26
  _BYTE v19[36]; // [xsp+4h] [xbp-7Ch] BYREF

  _ReadStatusReg(TPIDR_EL0);
  memset(&v19[4], 0, 32);
  v7 = a1[2];
  v11 = a1 + 1;
  if ( v7 )
  {
    do
    {
      v12 = (_QWORD *)v7;
      v13 = *(_DWORD *)(v7 + 32);
      v14 = (__int64 *)(v7 + 24);
      if ( v13 > a2 )
        v14 = v12 + 2;
      v7 = *v14;
    }
    while ( v7 );
    result = (__int64)v12;
    if ( v13 <= a2 )
      goto LABEL_10;
  }
  else
  {
    v12 = a1 + 1;
  }
  if ( v12 == (_QWORD *)a1[3] )
    goto LABEL_11;
  result = sub_54C700(v12);
LABEL_10:
  if ( *(_DWORD *)(result + 32) >= a2 )
  {
LABEL_15:
    v17 = result + 40;
    *(_QWORD *)(result + 56) = a4;
    goto LABEL_18;
  }
LABEL_11:
  if ( !v12 )
  {
    result = 0;
    goto LABEL_15;
  }
  v16 = v11 == v12 || *((_DWORD *)v12 + 8) > a2;
  v18 = operator new(0x48u);
  *(_DWORD *)(v18 + 32) = a2;
  *(_OWORD *)(v18 + 36) = *(_OWORD *)v19;
  *(_OWORD *)(v18 + 52) = *(_OWORD *)&v19[16];
  *(_DWORD *)(v18 + 68) = 0;
  result = sub_54C8A0(v16, v18, v12, v11);
  v17 = v18 + 40;
  ++a1[5];
  *(_QWORD *)(v18 + 56) = a4;
  *(_BYTE *)(v18 + 48) = a3;
  *(_BYTE *)(v18 + 49) = 0;
LABEL_18:
  *(_BYTE *)(v17 + 10) = 0;
  *(double *)v17 = a5;
  return result;
}

