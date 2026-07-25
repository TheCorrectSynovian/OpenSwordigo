/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D96A0
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet16GetRepeatedInt64Eii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedInt64(int,int)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000201760  .memcpy
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 83
 *   insn=0x00000000004D96B0 string=0x00000000004D96B4 "T"
 *   insn=0x00000000004D96C4 string=0x00000000004D96C8 "\t@"
 *   insn=0x00000000004D96CC string=0x00000000004D96D0 ")"
 *   insn=0x00000000004D96D0 string=0x00000000004D96D4 "*!@"
 *   insn=0x00000000004D96D4 string=0x00000000004D96D8 "+a"
 *   insn=0x00000000004D96D8 string=0x00000000004D96DC ",A"
 *   insn=0x00000000004D96DC string=0x00000000004D96E0 "_"
 *   insn=0x00000000004D96E0 string=0x00000000004D96E4 "j"
 *   insn=0x00000000004D96E4 string=0x00000000004D96E8 ""
 *   insn=0x00000000004D96E8 string=0x00000000004D96EC "I"
 *   insn=0x00000000004D96EC string=0x00000000004D96F0 ")"
 *   insn=0x00000000004D96F8 string=0x00000000004D96FC "\t!@"
 *   insn=0x00000000004D96FC string=0x00000000004D9700 "?"
 *   insn=0x00000000004D970C string=0x00000000004D975C ""
 *   insn=0x00000000004D9710 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004D971C string=0x00000000004D9720 "c""
 *   insn=0x00000000004D9720 string=0x00000000004D9724 "3s"
 *   insn=0x00000000004D9724 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004D9728 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004D9734 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004D9738 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004D9748 string=0x00000000004D974C "m"
 *   insn=0x00000000004D974C string=0x00000000001FA500 "0'"
 *   insn=0x00000000004D9754 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004D975C string=0x00000000004D9760 ""
 *   insn=0x00000000004D978C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D979C string=0x00000000004D97A0 "I"
 *   insn=0x00000000004D97B8 string=0x00000000004D97BC "U"
 *   insn=0x00000000004D97D0 string=0x00000000004D97D4 "\t@"
 *   insn=0x00000000004D97D8 string=0x00000000004D97DC ")"
 *   insn=0x00000000004D97DC string=0x00000000004D97E0 "*!@"
 *   insn=0x00000000004D97E0 string=0x00000000004D97E4 "+a"
 *   insn=0x00000000004D97E4 string=0x00000000004D97E8 ",A"
 *   insn=0x00000000004D97E8 string=0x00000000004D97EC "_"
 *   insn=0x00000000004D97EC string=0x00000000004D97F0 "j"
 *   insn=0x00000000004D97F0 string=0x00000000004D97F4 ""
 *   insn=0x00000000004D97F4 string=0x00000000004D97F8 "I"
 *   insn=0x00000000004D97F8 string=0x00000000004D97FC ")"
 *   insn=0x00000000004D9804 string=0x00000000004D9808 "\t!@"
 *   insn=0x00000000004D9808 string=0x00000000004D980C "?"
 *   insn=0x00000000004D9818 string=0x00000000004D9868 ""
 *   insn=0x00000000004D9828 string=0x00000000004D982C "c""
 *   insn=0x00000000004D983C string=0x00000000004D9840 "t"
 *   insn=0x00000000004D9844 string=0x00000000004D984C "q"
 *   insn=0x00000000004D9854 string=0x00000000004D9858 "*"
 *   insn=0x00000000004D985C string=0x00000000004D9860 "d"
 *   insn=0x00000000004D9868 string=0x00000000004D986C ""
 *   insn=0x00000000004D98A0 string=0x00000000004D98A4 "S"
 *   insn=0x00000000004D98D0 string=0x00000000004D98D4 "S"
 *   insn=0x00000000004D98D4 string=0x00000000004D98D8 "h"
 *   insn=0x00000000004D9910 string=0x00000000004D9914 "H#@"
 *   insn=0x00000000004D9914 string=0x00000000004D9918 "Ic"
 *   insn=0x00000000004D9918 string=0x00000000004D991C "JC"
 *   insn=0x00000000004D9920 string=0x00000000004D9924 "I"
 *   insn=0x00000000004D9924 string=0x00000000004D9928 ")"
 *   insn=0x00000000004D9928 string=0x00000000004D992C ")"
 *   insn=0x00000000004D9934 string=0x00000000004D9938 "l"
 *   insn=0x00000000004D9938 string=0x00000000004D993C ""
 *   insn=0x00000000004D993C string=0x00000000004D9958 " @"
 *   insn=0x00000000004D9944 string=0x00000000004D9948 "_"
 *   insn=0x00000000004D9950 string=0x00000000004D9954 "k"
 *   insn=0x00000000004D995C string=0x00000000004D9960 "J"
 *   insn=0x00000000004D9964 string=0x00000000004D9968 "?"
 *   insn=0x00000000004D996C string=0x00000000004D9970 " "
 *   insn=0x00000000004D9970 string=0x00000000004D9974 "H#@"
 *   insn=0x00000000004D998C string=0x00000000004D9990 "$"
 *   insn=0x00000000004D999C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D99E0 string=0x00000000004D99E4 ""
 *   insn=0x00000000004D9A0C string=0x00000000004D9A10 "@"
 *   insn=0x00000000004D9A10 string=0x00000000004D9A14 ""
 *   insn=0x00000000004D9A28 string=0x00000000004D9A2C "A"
 *   insn=0x00000000004D9A34 string=0x00000000004D9A38 "?"
 *   insn=0x00000000004D9A38 string=0x00000000004D9A3C "("
 *   insn=0x00000000004D9A3C string=0x00000000004D9A40 "\t}@"
 *   insn=0x00000000004D9A48 string=0x00000000004D9A4C ")}"
 *   insn=0x00000000004D9A50 string=0x00000000004D9A54 "}}"
 *   insn=0x00000000004D9A64 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D9A70 string=0x00000000004D9A74 ";"
 *   insn=0x00000000004D9A88 string=0x00000000004D9A8C "5m"
 *   insn=0x00000000004D9A8C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004D9A9C string=0x00000000004D9AA0 ""
 *   insn=0x00000000004D9AA0 string=0x00000000004D9AA4 "h"
 *   insn=0x00000000004D9AAC string=0x00000000004D9AB0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedInt64(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        int a3)
{
  char *v3; // x21
  char *v5; // x9
  char *v6; // x8
  int v7; // w10
  bool v8; // nf
  bool v9; // vf
  char **v10; // x10
  int v11; // w0
  _BYTE v13[32]; // [xsp+100h] [xbp-48h] BYREF
  __int64 v14; // [xsp+120h] [xbp-28h]

  v3 = (char *)this + 8;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (char *)*((_QWORD *)this + 2);
  v6 = (char *)this + 8;
  if ( v5 )
  {
    do
    {
      v7 = *((_DWORD *)v5 + 8);
      v9 = __OFSUB__(v7, a2);
      v8 = v7 - a2 < 0;
      if ( v7 >= a2 )
        v10 = (char **)(v5 + 16);
      else
        v10 = (char **)(v5 + 24);
      if ( v8 == v9 )
        v6 = v5;
      v5 = *v10;
    }
    while ( *v10 );
  }
  if ( v6 == v3 )
    goto LABEL_12;
  if ( *((_DWORD *)v6 + 8) > a2 )
    v6 = (char *)this + 8;
  if ( v6 == v3 )
  {
LABEL_12:
    google::protobuf::internal::LogMessage::LogMessage();
    v11 = google::protobuf::internal::LogMessage::operator<<((int)v13, "CHECK failed: iter != extensions_.end(): ");
    google::protobuf::internal::LogMessage::operator<<(v11, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v13);
    v6 = v3;
  }
  return *(_QWORD *)(**((_QWORD **)v6 + 5) + 8LL * a3);
}

