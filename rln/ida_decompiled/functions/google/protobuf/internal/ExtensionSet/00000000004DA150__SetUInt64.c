/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DA150
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet9SetUInt64EihmPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetUInt64(int,uchar,ulong,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000001FFCE0  google::protobuf::internal::ExtensionSet::SetUInt64(int,uchar,ulong,google::protobuf::FieldDescriptor const*)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 27
 *   insn=0x00000000004DA16C string=0x00000000004DA170 "\"
 *   insn=0x00000000004DA1A8 string=0x00000000004DA1AC "(#@"
 *   insn=0x00000000004DA1AC string=0x00000000004DA1B0 ")c"
 *   insn=0x00000000004DA1B0 string=0x00000000004DA1B4 "*C"
 *   insn=0x00000000004DA1B8 string=0x00000000004DA1BC "I"
 *   insn=0x00000000004DA1BC string=0x00000000004DA1C0 ")"
 *   insn=0x00000000004DA1C0 string=0x00000000004DA1C4 ")"
 *   insn=0x00000000004DA1CC string=0x00000000004DA1D0 "l"
 *   insn=0x00000000004DA1D0 string=0x00000000004DA1D4 ""
 *   insn=0x00000000004DA1D4 string=0x00000000004DA1F0 " @"
 *   insn=0x00000000004DA1DC string=0x00000000004DA1E0 "?"
 *   insn=0x00000000004DA1E8 string=0x00000000004DA1EC "E"
 *   insn=0x00000000004DA1F4 string=0x00000000004DA1F8 "*"
 *   insn=0x00000000004DA1F8 string=0x00000000004DA21C ""
 *   insn=0x00000000004DA200 string=0x00000000004DA204 " "
 *   insn=0x00000000004DA204 string=0x00000000004DA208 "(#@"
 *   insn=0x00000000004DA230 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DA250 string=0x00000000004DA254 "w#"
 *   insn=0x00000000004DA254 string=0x00000000004DA258 "`C"
 *   insn=0x00000000004DA258 string=0x00000000004DA25C "aC"
 *   insn=0x00000000004DA25C string=0x00000000004DA260 "hG"
 *   insn=0x00000000004DA268 string=0x00000000004DA26C "h"
 *   insn=0x00000000004DA26C string=0x00000000004DA270 ")"
 *   insn=0x00000000004DA274 string=0x00000000004DA278 "t"
 *   insn=0x00000000004DA278 string=0x00000000004DA27C "u"
 *   insn=0x00000000004DA294 string=0x00000000004DA298 "!"
 *   insn=0x00000000004DA2BC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::SetUInt64(
        _QWORD *a1,
        int a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // x9
  _QWORD *v11; // x24
  _QWORD *v12; // x25
  int v13; // w8
  __int64 *v14; // x9
  __int64 result; // x0
  _BOOL4 v16; // w26
  __int64 v17; // x8
  __int64 v18; // x27
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
    *(_QWORD *)(result + 56) = a5;
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
  *(_QWORD *)(v18 + 56) = a5;
  *(_BYTE *)(v18 + 48) = a3;
  *(_BYTE *)(v18 + 49) = 0;
LABEL_18:
  *(_BYTE *)(v17 + 10) = 0;
  *(_QWORD *)v17 = a4;
  return result;
}

