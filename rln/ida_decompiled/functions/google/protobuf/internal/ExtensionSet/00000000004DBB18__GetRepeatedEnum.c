/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DBB18
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet15GetRepeatedEnumEii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedEnum(int,int)
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
 * Referenced strings: 81
 *   insn=0x00000000004DBB28 string=0x00000000004DBB2C "T"
 *   insn=0x00000000004DBB3C string=0x00000000004DBB40 "\t@"
 *   insn=0x00000000004DBB44 string=0x00000000004DBB48 ")"
 *   insn=0x00000000004DBB48 string=0x00000000004DBB4C "*!@"
 *   insn=0x00000000004DBB4C string=0x00000000004DBB50 "+a"
 *   insn=0x00000000004DBB50 string=0x00000000004DBB54 ",A"
 *   insn=0x00000000004DBB54 string=0x00000000004DBB58 "_"
 *   insn=0x00000000004DBB58 string=0x00000000004DBB5C "j"
 *   insn=0x00000000004DBB5C string=0x00000000004DBB60 ""
 *   insn=0x00000000004DBB60 string=0x00000000004DBB64 "I"
 *   insn=0x00000000004DBB64 string=0x00000000004DBB68 ")"
 *   insn=0x00000000004DBB70 string=0x00000000004DBB74 "\t!@"
 *   insn=0x00000000004DBB74 string=0x00000000004DBB78 "?"
 *   insn=0x00000000004DBB84 string=0x00000000004DBBD4 ""
 *   insn=0x00000000004DBB88 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DBB94 string=0x00000000004DBB98 "C'"
 *   insn=0x00000000004DBB9C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DBBA0 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004DBBAC string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DBBB0 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004DBBC0 string=0x00000000004DBBC4 "Oz"
 *   insn=0x00000000004DBBC4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DBBCC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DBBD4 string=0x00000000004DBBD8 ""
 *   insn=0x00000000004DBC04 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DBC0C string=0x00000000004DBC10 "xy"
 *   insn=0x00000000004DBC14 string=0x00000000004DBC18 "+"
 *   insn=0x00000000004DBC30 string=0x00000000004DBC34 "U"
 *   insn=0x00000000004DBC48 string=0x00000000004DBC4C "\t@"
 *   insn=0x00000000004DBC50 string=0x00000000004DBC54 ")"
 *   insn=0x00000000004DBC54 string=0x00000000004DBC58 "*!@"
 *   insn=0x00000000004DBC58 string=0x00000000004DBC5C "+a"
 *   insn=0x00000000004DBC5C string=0x00000000004DBC60 ",A"
 *   insn=0x00000000004DBC60 string=0x00000000004DBC64 "_"
 *   insn=0x00000000004DBC64 string=0x00000000004DBC68 "j"
 *   insn=0x00000000004DBC68 string=0x00000000004DBC6C ""
 *   insn=0x00000000004DBC6C string=0x00000000004DBC70 "I"
 *   insn=0x00000000004DBC70 string=0x00000000004DBC74 ")"
 *   insn=0x00000000004DBC7C string=0x00000000004DBC80 "\t!@"
 *   insn=0x00000000004DBC80 string=0x00000000004DBC84 "?"
 *   insn=0x00000000004DBC90 string=0x00000000004DBCE0 ""
 *   insn=0x00000000004DBCA0 string=0x00000000004DBCA4 "#("
 *   insn=0x00000000004DBCB4 string=0x00000000004DBCB8 "V"
 *   insn=0x00000000004DBCBC string=0x00000000004DBCC4 "S"
 *   insn=0x00000000004DBCD4 string=0x00000000004DBCD8 "Fy"
 *   insn=0x00000000004DBCE0 string=0x00000000004DBCE4 ""
 *   insn=0x00000000004DBCF8 string=0x00000000004DBD10 "pi"
 *   insn=0x00000000004DBD18 string=0x00000000004DBD1C "5y"
 *   insn=0x00000000004DBD48 string=0x00000000004DBD4C "S"
 *   insn=0x00000000004DBD4C string=0x00000000004DBD50 "h"
 *   insn=0x00000000004DBD88 string=0x00000000004DBD8C "H#@"
 *   insn=0x00000000004DBD8C string=0x00000000004DBD90 "Ic"
 *   insn=0x00000000004DBD90 string=0x00000000004DBD94 "JC"
 *   insn=0x00000000004DBD98 string=0x00000000004DBD9C "I"
 *   insn=0x00000000004DBD9C string=0x00000000004DBDA0 ")"
 *   insn=0x00000000004DBDA0 string=0x00000000004DBDA4 ")"
 *   insn=0x00000000004DBDAC string=0x00000000004DBDB0 "l"
 *   insn=0x00000000004DBDB0 string=0x00000000004DBDB4 ""
 *   insn=0x00000000004DBDB4 string=0x00000000004DBDD0 " @"
 *   insn=0x00000000004DBDBC string=0x00000000004DBDC0 "_"
 *   insn=0x00000000004DBDC8 string=0x00000000004DBDCC "M"
 *   insn=0x00000000004DBDD4 string=0x00000000004DBDD8 "J"
 *   insn=0x00000000004DBDDC string=0x00000000004DBDE0 "?"
 *   insn=0x00000000004DBDE4 string=0x00000000004DBDE8 " "
 *   insn=0x00000000004DBDE8 string=0x00000000004DBDEC "H#@"
 *   insn=0x00000000004DBE04 string=0x00000000004DBE08 "$"
 *   insn=0x00000000004DBE14 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DBE58 string=0x00000000004DBE5C ""
 *   insn=0x00000000004DBE84 string=0x00000000004DBE88 "@"
 *   insn=0x00000000004DBE88 string=0x00000000004DBE8C ""
 *   insn=0x00000000004DBEA0 string=0x00000000004DBEA4 "A"
 *   insn=0x00000000004DBEAC string=0x00000000004DBEB0 "?"
 *   insn=0x00000000004DBEB0 string=0x00000000004DBEB4 "("
 *   insn=0x00000000004DBEB4 string=0x00000000004DBEB8 "\t}@"
 *   insn=0x00000000004DBEC0 string=0x00000000004DBEC4 ")}"
 *   insn=0x00000000004DBEC8 string=0x00000000004DBECC "}~"
 *   insn=0x00000000004DBEDC string=0x00000000001F8570 "0'"
 *   insn=0x00000000004DBF04 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004DBF14 string=0x00000000004DBF18 ""
 *   insn=0x00000000004DBF18 string=0x00000000004DBF1C "h"
 *   insn=0x00000000004DBF24 string=0x00000000004DBF28 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedEnum(
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

