/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DB398
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet7SetBoolEihbPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetBool(int,uchar,bool,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000001FAB00  google::protobuf::internal::ExtensionSet::SetBool(int,uchar,bool,google::protobuf::FieldDescriptor const*)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 31
 *   insn=0x00000000004DB3B4 string=0x00000000004DB3B8 "["
 *   insn=0x00000000004DB3B8 string=0x00000000004DB3BC "h"
 *   insn=0x00000000004DB3E0 string=0x00000000004DB3E4 "|"
 *   insn=0x00000000004DB3F0 string=0x00000000004DB3F4 "#@"
 *   insn=0x00000000004DB3F4 string=0x00000000004DB3F8 "\tc"
 *   insn=0x00000000004DB3F8 string=0x00000000004DB3FC "\nC"
 *   insn=0x00000000004DB400 string=0x00000000004DB404 "I"
 *   insn=0x00000000004DB404 string=0x00000000004DB408 ")"
 *   insn=0x00000000004DB408 string=0x00000000004DB40C ")"
 *   insn=0x00000000004DB414 string=0x00000000004DB418 "l"
 *   insn=0x00000000004DB418 string=0x00000000004DB41C ""
 *   insn=0x00000000004DB41C string=0x00000000004DB438 " @"
 *   insn=0x00000000004DB43C string=0x00000000004DB440 "*"
 *   insn=0x00000000004DB440 string=0x00000000004DB464 ""
 *   insn=0x00000000004DB448 string=0x00000000004DB44C " "
 *   insn=0x00000000004DB44C string=0x00000000004DB450 "#@"
 *   insn=0x00000000004DB474 string=0x00000000004DB478 "Zh"
 *   insn=0x00000000004DB478 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DB498 string=0x00000000004DB49C "V#"
 *   insn=0x00000000004DB49C string=0x00000000004DB4A0 "@C"
 *   insn=0x00000000004DB4A0 string=0x00000000004DB4A4 "AC"
 *   insn=0x00000000004DB4A4 string=0x00000000004DB4A8 "HG"
 *   insn=0x00000000004DB4B0 string=0x00000000004DB4B4 "H"
 *   insn=0x00000000004DB4B4 string=0x00000000004DB4B8 ")"
 *   insn=0x00000000004DB4BC string=0x00000000004DB4C0 "S"
 *   insn=0x00000000004DB4C0 string=0x00000000004DB4C4 "T"
 *   insn=0x00000000004DB4C4 string=0x00000000004DB4C8 "_"
 *   insn=0x00000000004DB4D0 string=0x00000000004DB4D4 "h"
 *   insn=0x00000000004DB4DC string=0x00000000004DB4E0 "!"
 *   insn=0x00000000004DB4E0 string=0x00000000004DB504 "sk"
 *   insn=0x00000000004DB504 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::SetBool(_QWORD *a1, int a2, char a3, char a4, __int64 a5)
{
  __int64 v7; // x9
  char v10; // w28
  _QWORD *v11; // x23
  _QWORD *v12; // x24
  int v13; // w8
  __int64 *v14; // x9
  __int64 result; // x0
  _BOOL4 v16; // w25
  _BYTE *v17; // x8
  __int64 v18; // x26
  _BYTE v19[36]; // [xsp+4h] [xbp-7Ch] BYREF

  _ReadStatusReg(TPIDR_EL0);
  memset(&v19[4], 0, 32);
  v7 = a1[2];
  v10 = a4 & 1;
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
    v17 = (_BYTE *)(result + 40);
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
  v17 = (_BYTE *)(v18 + 40);
  ++a1[5];
  *(_QWORD *)(v18 + 56) = a5;
  *(_BYTE *)(v18 + 48) = a3;
  *(_BYTE *)(v18 + 49) = 0;
LABEL_18:
  v17[10] = 0;
  *v17 = v10;
  return result;
}

