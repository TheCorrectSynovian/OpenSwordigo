/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DB9A8
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet7SetEnumEihiPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetEnum(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x0000000000202DE0  google::protobuf::internal::ExtensionSet::SetEnum(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 28
 *   insn=0x00000000004DB9C4 string=0x00000000004DB9C8 "\"
 *   insn=0x00000000004DBA00 string=0x00000000004DBA04 "(#@"
 *   insn=0x00000000004DBA04 string=0x00000000004DBA08 ")c"
 *   insn=0x00000000004DBA08 string=0x00000000004DBA0C "*C"
 *   insn=0x00000000004DBA10 string=0x00000000004DBA14 "I"
 *   insn=0x00000000004DBA14 string=0x00000000004DBA18 ")"
 *   insn=0x00000000004DBA18 string=0x00000000004DBA1C ")"
 *   insn=0x00000000004DBA24 string=0x00000000004DBA28 "l"
 *   insn=0x00000000004DBA28 string=0x00000000004DBA2C ""
 *   insn=0x00000000004DBA2C string=0x00000000004DBA48 " @"
 *   insn=0x00000000004DBA34 string=0x00000000004DBA38 "?"
 *   insn=0x00000000004DBA40 string=0x00000000004DBA44 "/"
 *   insn=0x00000000004DBA4C string=0x00000000004DBA50 "*"
 *   insn=0x00000000004DBA50 string=0x00000000004DBA74 ""
 *   insn=0x00000000004DBA58 string=0x00000000004DBA5C " "
 *   insn=0x00000000004DBA5C string=0x00000000004DBA60 "(#@"
 *   insn=0x00000000004DBA88 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DBAA8 string=0x00000000004DBAAC "w#"
 *   insn=0x00000000004DBAAC string=0x00000000004DBAB0 "`C"
 *   insn=0x00000000004DBAB0 string=0x00000000004DBAB4 "aC"
 *   insn=0x00000000004DBAB4 string=0x00000000004DBAB8 "hG"
 *   insn=0x00000000004DBAB8 string=0x00000000004DBABC "y"
 *   insn=0x00000000004DBAC0 string=0x00000000004DBAC4 "h"
 *   insn=0x00000000004DBAC4 string=0x00000000004DBAC8 ")"
 *   insn=0x00000000004DBACC string=0x00000000004DBAD0 "t"
 *   insn=0x00000000004DBAD0 string=0x00000000004DBAD4 "u"
 *   insn=0x00000000004DBAEC string=0x00000000004DBAF0 "!"
 *   insn=0x00000000004DBB14 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::SetEnum(_QWORD *a1, int a2, char a3, int a4, __int64 a5)
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

