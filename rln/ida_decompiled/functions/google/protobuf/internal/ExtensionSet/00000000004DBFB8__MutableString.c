/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DBFB8
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet13MutableStringEihPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::MutableString(int,uchar,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000001F9DA0  google::protobuf::internal::ExtensionSet::MutableString(int,uchar,google::protobuf::FieldDescriptor const*)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 35
 *   insn=0x00000000004DBFD4 string=0x00000000004DBFD8 "["
 *   insn=0x00000000004DBFD8 string=0x00000000004DBFDC "h"
 *   insn=0x00000000004DC00C string=0x00000000004DC010 "#@"
 *   insn=0x00000000004DC010 string=0x00000000004DC014 "\tc"
 *   insn=0x00000000004DC014 string=0x00000000004DC018 "\nC"
 *   insn=0x00000000004DC01C string=0x00000000004DC020 "I"
 *   insn=0x00000000004DC020 string=0x00000000004DC024 ")"
 *   insn=0x00000000004DC024 string=0x00000000004DC028 ")"
 *   insn=0x00000000004DC030 string=0x00000000004DC034 "l"
 *   insn=0x00000000004DC034 string=0x00000000004DC038 ""
 *   insn=0x00000000004DC038 string=0x00000000004DC054 " @"
 *   insn=0x00000000004DC058 string=0x00000000004DC05C "*"
 *   insn=0x00000000004DC064 string=0x00000000004DC068 " "
 *   insn=0x00000000004DC068 string=0x00000000004DC06C "#@"
 *   insn=0x00000000004DC090 string=0x00000000004DC094 "Se"
 *   insn=0x00000000004DC094 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DC0B4 string=0x00000000004DC0B8 "V#"
 *   insn=0x00000000004DC0B8 string=0x00000000004DC0BC "@C"
 *   insn=0x00000000004DC0BC string=0x00000000004DC0C0 "AC"
 *   insn=0x00000000004DC0C0 string=0x00000000004DC0C4 "HG"
 *   insn=0x00000000004DC0D0 string=0x00000000004DC0D4 "V"
 *   insn=0x00000000004DC0D4 string=0x00000000004DC0D8 ""
 *   insn=0x00000000004DC0DC string=0x00000000004DC0E0 "S"
 *   insn=0x00000000004DC0E0 string=0x00000000004DC0E4 "T"
 *   insn=0x00000000004DC0E4 string=0x00000000004DC0E8 "_"
 *   insn=0x00000000004DC0E8 string=0x00000000004DC0EC "=e"
 *   insn=0x00000000004DC0EC string=0x00000000004DC0F0 "H"
 *   insn=0x00000000004DC0F0 string=0x00000000004DC0F4 ""
 *   insn=0x00000000004DC0F4 string=0x00000000004DC0F8 "@"
 *   insn=0x00000000004DC0F8 string=0x00000000004DC0FC "a"
 *   insn=0x00000000004DC0FC string=0x00000000004DC100 ""
 *   insn=0x00000000004DC108 string=0x00000000004DC10C "h"
 *   insn=0x00000000004DC114 string=0x00000000004DC118 "!"
 *   insn=0x00000000004DC118 string=0x00000000004DC13C "eh"
 *   insn=0x00000000004DC13C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::MutableString(_QWORD *a1, int a2, char a3, __int64 a4)
{
  __int64 v6; // x9
  _QWORD *v9; // x23
  _QWORD *v10; // x24
  int v11; // w8
  __int64 *v12; // x9
  __int64 v13; // x0
  _BOOL4 v14; // w25
  _BYTE *v15; // x22
  __int64 v16; // x26
  _QWORD *v17; // x0
  _BYTE v19[36]; // [xsp+4h] [xbp-7Ch] BYREF

  _ReadStatusReg(TPIDR_EL0);
  memset(&v19[4], 0, 32);
  v6 = a1[2];
  v9 = a1 + 1;
  if ( v6 )
  {
    do
    {
      v10 = (_QWORD *)v6;
      v11 = *(_DWORD *)(v6 + 32);
      v12 = (__int64 *)(v6 + 24);
      if ( v11 > a2 )
        v12 = v10 + 2;
      v6 = *v12;
    }
    while ( v6 );
    v13 = (__int64)v10;
    if ( v11 <= a2 )
      goto LABEL_10;
  }
  else
  {
    v10 = a1 + 1;
  }
  if ( v10 == (_QWORD *)a1[3] )
    goto LABEL_11;
  v13 = sub_54C700(v10);
LABEL_10:
  if ( *(_DWORD *)(v13 + 32) >= a2 )
  {
LABEL_15:
    v15 = (_BYTE *)(v13 + 40);
    *(_QWORD *)(v13 + 56) = a4;
    goto LABEL_18;
  }
LABEL_11:
  if ( !v10 )
  {
    v13 = 0;
    goto LABEL_15;
  }
  v14 = v9 == v10 || *((_DWORD *)v10 + 8) > a2;
  v16 = operator new(0x48u);
  *(_DWORD *)(v16 + 32) = a2;
  *(_OWORD *)(v16 + 36) = *(_OWORD *)v19;
  *(_OWORD *)(v16 + 52) = *(_OWORD *)&v19[16];
  *(_DWORD *)(v16 + 68) = 0;
  sub_54C8A0(v14, v16, v10, v9);
  v15 = (_BYTE *)(v16 + 40);
  ++a1[5];
  *(_QWORD *)(v16 + 56) = a4;
  *(_BYTE *)(v16 + 48) = a3;
  *(_BYTE *)(v16 + 49) = 0;
  v17 = (_QWORD *)operator new(8u);
  *(_QWORD *)(v16 + 40) = v17;
  *v17 = &byte_6FD2F8;
LABEL_18:
  v15[10] = 0;
  return *(_QWORD *)v15;
}

