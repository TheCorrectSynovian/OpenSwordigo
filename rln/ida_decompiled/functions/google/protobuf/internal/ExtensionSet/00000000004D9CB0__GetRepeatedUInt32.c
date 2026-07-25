/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D9CB0
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet17GetRepeatedUInt32Eii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedUInt32(int,int)
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
 * Referenced strings: 82
 *   insn=0x00000000004D9CC0 string=0x00000000004D9CC4 "T"
 *   insn=0x00000000004D9CD4 string=0x00000000004D9CD8 "\t@"
 *   insn=0x00000000004D9CDC string=0x00000000004D9CE0 ")"
 *   insn=0x00000000004D9CE0 string=0x00000000004D9CE4 "*!@"
 *   insn=0x00000000004D9CE4 string=0x00000000004D9CE8 "+a"
 *   insn=0x00000000004D9CE8 string=0x00000000004D9CEC ",A"
 *   insn=0x00000000004D9CEC string=0x00000000004D9CF0 "_"
 *   insn=0x00000000004D9CF0 string=0x00000000004D9CF4 "j"
 *   insn=0x00000000004D9CF4 string=0x00000000004D9CF8 ""
 *   insn=0x00000000004D9CF8 string=0x00000000004D9CFC "I"
 *   insn=0x00000000004D9CFC string=0x00000000004D9D00 ")"
 *   insn=0x00000000004D9D08 string=0x00000000004D9D0C "\t!@"
 *   insn=0x00000000004D9D0C string=0x00000000004D9D10 "?"
 *   insn=0x00000000004D9D1C string=0x00000000004D9D6C ""
 *   insn=0x00000000004D9D20 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004D9D34 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004D9D38 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004D9D40 string=0x00000000004D9D44 "3"
 *   insn=0x00000000004D9D44 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004D9D48 string=0x00000000004D9D50 "0"
 *   insn=0x00000000004D9D48 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004D9D5C string=0x00000000001FA500 "0'"
 *   insn=0x00000000004D9D60 string=0x00000000004D9D64 "#"
 *   insn=0x00000000004D9D64 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004D9D6C string=0x00000000004D9D70 ""
 *   insn=0x00000000004D9D84 string=0x00000000004D9D9C "Mq"
 *   insn=0x00000000004D9D9C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D9DB0 string=0x00000000004D9DB4 "f"
 *   insn=0x00000000004D9DC8 string=0x00000000004D9DCC "U"
 *   insn=0x00000000004D9DE0 string=0x00000000004D9DE4 "\t@"
 *   insn=0x00000000004D9DE8 string=0x00000000004D9DEC ")"
 *   insn=0x00000000004D9DEC string=0x00000000004D9DF0 "*!@"
 *   insn=0x00000000004D9DF0 string=0x00000000004D9DF4 "+a"
 *   insn=0x00000000004D9DF4 string=0x00000000004D9DF8 ",A"
 *   insn=0x00000000004D9DF8 string=0x00000000004D9DFC "_"
 *   insn=0x00000000004D9DFC string=0x00000000004D9E00 "j"
 *   insn=0x00000000004D9E00 string=0x00000000004D9E04 ""
 *   insn=0x00000000004D9E04 string=0x00000000004D9E08 "I"
 *   insn=0x00000000004D9E08 string=0x00000000004D9E0C ")"
 *   insn=0x00000000004D9E14 string=0x00000000004D9E18 "\t!@"
 *   insn=0x00000000004D9E18 string=0x00000000004D9E1C "?"
 *   insn=0x00000000004D9E28 string=0x00000000004D9E78 ""
 *   insn=0x00000000004D9E3C string=0x00000000004D9E40 "lq"
 *   insn=0x00000000004D9E78 string=0x00000000004D9E7C ""
 *   insn=0x00000000004D9E90 string=0x00000000004D9EA8 "\nq"
 *   insn=0x00000000004D9EBC string=0x00000000004D9EC0 "#"
 *   insn=0x00000000004D9EE0 string=0x00000000004D9EE4 "S"
 *   insn=0x00000000004D9EE4 string=0x00000000004D9EE8 "h"
 *   insn=0x00000000004D9F20 string=0x00000000004D9F24 "H#@"
 *   insn=0x00000000004D9F24 string=0x00000000004D9F28 "Ic"
 *   insn=0x00000000004D9F28 string=0x00000000004D9F2C "JC"
 *   insn=0x00000000004D9F30 string=0x00000000004D9F34 "I"
 *   insn=0x00000000004D9F34 string=0x00000000004D9F38 ")"
 *   insn=0x00000000004D9F38 string=0x00000000004D9F3C ")"
 *   insn=0x00000000004D9F44 string=0x00000000004D9F48 "l"
 *   insn=0x00000000004D9F48 string=0x00000000004D9F4C ""
 *   insn=0x00000000004D9F4C string=0x00000000004D9F68 " @"
 *   insn=0x00000000004D9F54 string=0x00000000004D9F58 "_"
 *   insn=0x00000000004D9F6C string=0x00000000004D9F70 "J"
 *   insn=0x00000000004D9F74 string=0x00000000004D9F78 "?"
 *   insn=0x00000000004D9F7C string=0x00000000004D9F80 " "
 *   insn=0x00000000004D9F80 string=0x00000000004D9F84 "H#@"
 *   insn=0x00000000004D9F9C string=0x00000000004D9FA0 "$"
 *   insn=0x00000000004D9FAC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D9FDC string=0x00000000004D9FE0 "0"
 *   insn=0x00000000004D9FF0 string=0x00000000004D9FF4 ""
 *   insn=0x00000000004DA00C string=0x00000000004DA010 "tm"
 *   insn=0x00000000004DA01C string=0x00000000004DA020 "@"
 *   insn=0x00000000004DA020 string=0x00000000004DA024 ""
 *   insn=0x00000000004DA038 string=0x00000000004DA03C "A"
 *   insn=0x00000000004DA044 string=0x00000000004DA048 "?"
 *   insn=0x00000000004DA048 string=0x00000000004DA04C "("
 *   insn=0x00000000004DA04C string=0x00000000004DA050 "\t}@"
 *   insn=0x00000000004DA058 string=0x00000000004DA05C ")}"
 *   insn=0x00000000004DA060 string=0x00000000004DA064 "}~"
 *   insn=0x00000000004DA070 string=0x00000000004DA074 "?y"
 *   insn=0x00000000004DA074 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004DA09C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004DA0AC string=0x00000000004DA0B0 ""
 *   insn=0x00000000004DA0B0 string=0x00000000004DA0B4 "h"
 *   insn=0x00000000004DA0BC string=0x00000000004DA0C0 "!"
 *   insn=0x00000000004DA0C0 string=0x00000000004DA0E4 "{p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedUInt32(
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
  _BYTE v13[32]; // [xsp+F8h] [xbp-48h] BYREF
  __int64 v14; // [xsp+118h] [xbp-28h]

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
  return *(unsigned int *)(**((_QWORD **)v6 + 5) + 4LL * a3);
}

