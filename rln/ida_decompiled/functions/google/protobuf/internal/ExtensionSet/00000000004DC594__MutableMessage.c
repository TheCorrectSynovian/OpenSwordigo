/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DC594
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet14MutableMessageEihRKNS0_11MessageLiteEPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 29
 *   insn=0x00000000004DC5B0 string=0x00000000004DC5B4 "\"
 *   insn=0x00000000004DC5EC string=0x00000000004DC5F0 "(#@"
 *   insn=0x00000000004DC5F0 string=0x00000000004DC5F4 ")c"
 *   insn=0x00000000004DC5F4 string=0x00000000004DC5F8 "*C"
 *   insn=0x00000000004DC5FC string=0x00000000004DC600 "I"
 *   insn=0x00000000004DC600 string=0x00000000004DC604 ")"
 *   insn=0x00000000004DC604 string=0x00000000004DC608 ")"
 *   insn=0x00000000004DC610 string=0x00000000004DC614 "l"
 *   insn=0x00000000004DC614 string=0x00000000004DC618 ""
 *   insn=0x00000000004DC618 string=0x00000000004DC634 " @"
 *   insn=0x00000000004DC620 string=0x00000000004DC624 "?"
 *   insn=0x00000000004DC62C string=0x00000000004DC630 "4"
 *   insn=0x00000000004DC638 string=0x00000000004DC63C "*"
 *   insn=0x00000000004DC644 string=0x00000000004DC648 " "
 *   insn=0x00000000004DC648 string=0x00000000004DC64C "(#@"
 *   insn=0x00000000004DC674 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DC694 string=0x00000000004DC698 "w#"
 *   insn=0x00000000004DC698 string=0x00000000004DC69C "`C"
 *   insn=0x00000000004DC69C string=0x00000000004DC6A0 "aC"
 *   insn=0x00000000004DC6A0 string=0x00000000004DC6A4 "hG"
 *   insn=0x00000000004DC6A4 string=0x00000000004DC6A8 "~"
 *   insn=0x00000000004DC6B0 string=0x00000000004DC6B4 ""
 *   insn=0x00000000004DC6B8 string=0x00000000004DC6BC "s"
 *   insn=0x00000000004DC6BC string=0x00000000004DC6C0 "u"
 *   insn=0x00000000004DC6C8 string=0x00000000004DC6CC "u"
 *   insn=0x00000000004DC6CC string=0x00000000004DC6D0 "@"
 *   insn=0x00000000004DC6D4 string=0x00000000004DC6D8 "`"
 *   insn=0x00000000004DC6EC string=0x00000000004DC6F0 "!"
 *   insn=0x00000000004DC714 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::MutableMessage(
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
  __int64 v15; // x0
  _BOOL4 v16; // w26
  _BYTE *v17; // x21
  __int64 v18; // x27
  _BYTE v20[36]; // [xsp+4h] [xbp-7Ch] BYREF

  _ReadStatusReg(TPIDR_EL0);
  memset(&v20[4], 0, 32);
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
    v15 = (__int64)v12;
    if ( v13 <= a2 )
      goto LABEL_10;
  }
  else
  {
    v12 = a1 + 1;
  }
  if ( v12 == (_QWORD *)a1[3] )
    goto LABEL_11;
  v15 = sub_54C700(v12);
LABEL_10:
  if ( *(_DWORD *)(v15 + 32) >= a2 )
  {
LABEL_15:
    v17 = (_BYTE *)(v15 + 40);
    *(_QWORD *)(v15 + 56) = a5;
    goto LABEL_18;
  }
LABEL_11:
  if ( !v12 )
  {
    v15 = 0;
    goto LABEL_15;
  }
  v16 = v11 == v12 || *((_DWORD *)v12 + 8) > a2;
  v18 = operator new(0x48u);
  *(_DWORD *)(v18 + 32) = a2;
  *(_OWORD *)(v18 + 36) = *(_OWORD *)v20;
  *(_OWORD *)(v18 + 52) = *(_OWORD *)&v20[16];
  *(_DWORD *)(v18 + 68) = 0;
  sub_54C8A0(v16, v18, v12, v11);
  ++a1[5];
  *(_QWORD *)(v18 + 56) = a5;
  *(_BYTE *)(v18 + 48) = a3;
  *(_BYTE *)(v18 + 49) = 0;
  v17 = (_BYTE *)(v18 + 40);
  *(_QWORD *)(v18 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 24LL))(a4);
LABEL_18:
  v17[10] = 0;
  return *(_QWORD *)v17;
}

