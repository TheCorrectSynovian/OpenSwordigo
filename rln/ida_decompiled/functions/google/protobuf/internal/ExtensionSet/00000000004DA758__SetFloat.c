/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DA758
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet8SetFloatEihfPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetFloat(int,uchar,float,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000001F3E40  google::protobuf::internal::ExtensionSet::SetFloat(int,uchar,float,google::protobuf::FieldDescriptor const*)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 31
 *   insn=0x00000000004DA778 string=0x00000000004DA77C "["
 *   insn=0x00000000004DA77C string=0x00000000004DA780 "h"
 *   insn=0x00000000004DA780 string=0x00000000004DA784 ""
 *   insn=0x00000000004DA7B4 string=0x00000000004DA7B8 "#@"
 *   insn=0x00000000004DA7B8 string=0x00000000004DA7BC "\tc"
 *   insn=0x00000000004DA7BC string=0x00000000004DA7C0 "\nC"
 *   insn=0x00000000004DA7C4 string=0x00000000004DA7C8 "I"
 *   insn=0x00000000004DA7C8 string=0x00000000004DA7CC ")"
 *   insn=0x00000000004DA7CC string=0x00000000004DA7D0 ")"
 *   insn=0x00000000004DA7D8 string=0x00000000004DA7DC "l"
 *   insn=0x00000000004DA7DC string=0x00000000004DA7E0 ""
 *   insn=0x00000000004DA7E0 string=0x00000000004DA7FC " @"
 *   insn=0x00000000004DA800 string=0x00000000004DA804 "*"
 *   insn=0x00000000004DA804 string=0x00000000004DA828 ""
 *   insn=0x00000000004DA80C string=0x00000000004DA810 " "
 *   insn=0x00000000004DA810 string=0x00000000004DA814 "#@"
 *   insn=0x00000000004DA838 string=0x00000000004DA83C "ik"
 *   insn=0x00000000004DA83C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DA85C string=0x00000000004DA860 "V#"
 *   insn=0x00000000004DA860 string=0x00000000004DA864 "@C"
 *   insn=0x00000000004DA864 string=0x00000000004DA868 "AC"
 *   insn=0x00000000004DA868 string=0x00000000004DA86C "HG"
 *   insn=0x00000000004DA874 string=0x00000000004DA878 "H"
 *   insn=0x00000000004DA878 string=0x00000000004DA87C ")"
 *   insn=0x00000000004DA880 string=0x00000000004DA884 "S"
 *   insn=0x00000000004DA884 string=0x00000000004DA888 "T"
 *   insn=0x00000000004DA888 string=0x00000000004DA88C "_"
 *   insn=0x00000000004DA890 string=0x00000000004DA894 ""
 *   insn=0x00000000004DA894 string=0x00000000004DA898 "h"
 *   insn=0x00000000004DA8A0 string=0x00000000004DA8A4 "A"
 *   insn=0x00000000004DA8CC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::SetFloat(
        _QWORD *a1,
        int a2,
        char a3,
        __int64 a4,
        float a5)
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
  *(float *)v17 = a5;
  return result;
}

