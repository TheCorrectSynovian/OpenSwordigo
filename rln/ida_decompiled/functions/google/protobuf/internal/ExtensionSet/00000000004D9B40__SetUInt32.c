/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D9B40
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet9SetUInt32EihjPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetUInt32(int,uchar,uint,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000001F9260  google::protobuf::internal::ExtensionSet::SetUInt32(int,uchar,uint,google::protobuf::FieldDescriptor const*)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 27
 *   insn=0x00000000004D9B5C string=0x00000000004D9B60 "\"
 *   insn=0x00000000004D9B98 string=0x00000000004D9B9C "(#@"
 *   insn=0x00000000004D9B9C string=0x00000000004D9BA0 ")c"
 *   insn=0x00000000004D9BA0 string=0x00000000004D9BA4 "*C"
 *   insn=0x00000000004D9BA8 string=0x00000000004D9BAC "I"
 *   insn=0x00000000004D9BAC string=0x00000000004D9BB0 ")"
 *   insn=0x00000000004D9BB0 string=0x00000000004D9BB4 ")"
 *   insn=0x00000000004D9BBC string=0x00000000004D9BC0 "l"
 *   insn=0x00000000004D9BC0 string=0x00000000004D9BC4 ""
 *   insn=0x00000000004D9BC4 string=0x00000000004D9BE0 " @"
 *   insn=0x00000000004D9BCC string=0x00000000004D9BD0 "?"
 *   insn=0x00000000004D9BE4 string=0x00000000004D9BE8 "*"
 *   insn=0x00000000004D9BE8 string=0x00000000004D9C0C ""
 *   insn=0x00000000004D9BF0 string=0x00000000004D9BF4 " "
 *   insn=0x00000000004D9BF4 string=0x00000000004D9BF8 "(#@"
 *   insn=0x00000000004D9C1C string=0x00000000004D9C20 "pn"
 *   insn=0x00000000004D9C20 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D9C40 string=0x00000000004D9C44 "w#"
 *   insn=0x00000000004D9C44 string=0x00000000004D9C48 "`C"
 *   insn=0x00000000004D9C48 string=0x00000000004D9C4C "aC"
 *   insn=0x00000000004D9C4C string=0x00000000004D9C50 "hG"
 *   insn=0x00000000004D9C58 string=0x00000000004D9C5C "h"
 *   insn=0x00000000004D9C5C string=0x00000000004D9C60 ")"
 *   insn=0x00000000004D9C64 string=0x00000000004D9C68 "t"
 *   insn=0x00000000004D9C68 string=0x00000000004D9C6C "u"
 *   insn=0x00000000004D9C84 string=0x00000000004D9C88 "!"
 *   insn=0x00000000004D9CAC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::SetUInt32(_QWORD *a1, int a2, char a3, int a4, __int64 a5)
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
  *(_DWORD *)v17 = a4;
  return result;
}

