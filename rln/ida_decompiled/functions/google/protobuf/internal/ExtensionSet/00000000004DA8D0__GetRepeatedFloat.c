/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DA8D0
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet16GetRepeatedFloatEii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedFloat(int,int)
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
 * Referenced strings: 92
 *   insn=0x00000000004DA8E0 string=0x00000000004DA8E4 "T"
 *   insn=0x00000000004DA8F4 string=0x00000000004DA8F8 "\t@"
 *   insn=0x00000000004DA8FC string=0x00000000004DA900 ")"
 *   insn=0x00000000004DA900 string=0x00000000004DA904 "*!@"
 *   insn=0x00000000004DA904 string=0x00000000004DA908 "+a"
 *   insn=0x00000000004DA908 string=0x00000000004DA90C ",A"
 *   insn=0x00000000004DA90C string=0x00000000004DA910 "_"
 *   insn=0x00000000004DA910 string=0x00000000004DA914 "j"
 *   insn=0x00000000004DA914 string=0x00000000004DA918 ""
 *   insn=0x00000000004DA918 string=0x00000000004DA91C "I"
 *   insn=0x00000000004DA91C string=0x00000000004DA920 ")"
 *   insn=0x00000000004DA928 string=0x00000000004DA92C "\t!@"
 *   insn=0x00000000004DA92C string=0x00000000004DA930 "?"
 *   insn=0x00000000004DA93C string=0x00000000004DA98C ""
 *   insn=0x00000000004DA940 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DA954 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DA958 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004DA960 string=0x00000000004DA964 "+"
 *   insn=0x00000000004DA964 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DA968 string=0x00000000004DA970 "("
 *   insn=0x00000000004DA968 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004DA97C string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DA980 string=0x00000000004DA984 "~"
 *   insn=0x00000000004DA984 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DA98C string=0x00000000004DA990 ""
 *   insn=0x00000000004DA9A4 string=0x00000000004DA9BC "En"
 *   insn=0x00000000004DA9BC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DA9C4 string=0x00000000004DA9C8 "\n~"
 *   insn=0x00000000004DA9D0 string=0x00000000004DA9D4 "^"
 *   insn=0x00000000004DA9EC string=0x00000000004DA9F0 "T"
 *   insn=0x00000000004DA9F8 string=0x00000000004DA9FC ""
 *   insn=0x00000000004DAA04 string=0x00000000004DAA08 "\t@"
 *   insn=0x00000000004DAA0C string=0x00000000004DAA10 ")"
 *   insn=0x00000000004DAA10 string=0x00000000004DAA14 "*!@"
 *   insn=0x00000000004DAA14 string=0x00000000004DAA18 "+a"
 *   insn=0x00000000004DAA18 string=0x00000000004DAA1C ",A"
 *   insn=0x00000000004DAA1C string=0x00000000004DAA20 "_"
 *   insn=0x00000000004DAA20 string=0x00000000004DAA24 "j"
 *   insn=0x00000000004DAA24 string=0x00000000004DAA28 ""
 *   insn=0x00000000004DAA28 string=0x00000000004DAA2C "I"
 *   insn=0x00000000004DAA2C string=0x00000000004DAA30 ")"
 *   insn=0x00000000004DAA38 string=0x00000000004DAA3C "\t!@"
 *   insn=0x00000000004DAA3C string=0x00000000004DAA40 "?"
 *   insn=0x00000000004DAA4C string=0x00000000004DAA9C ""
 *   insn=0x00000000004DAA60 string=0x00000000004DAA64 "cn"
 *   insn=0x00000000004DAA9C string=0x00000000004DAAA0 ""
 *   insn=0x00000000004DAAA0 string=0x00000000004DAAA4 ""
 *   insn=0x00000000004DAAE0 string=0x00000000004DAAE4 "x"
 *   insn=0x00000000004DAB0C string=0x00000000004DAB10 "\"
 *   insn=0x00000000004DAB14 string=0x00000000004DAB18 ""
 *   insn=0x00000000004DAB4C string=0x00000000004DAB50 "(#@"
 *   insn=0x00000000004DAB50 string=0x00000000004DAB54 ")c"
 *   insn=0x00000000004DAB54 string=0x00000000004DAB58 "*C"
 *   insn=0x00000000004DAB5C string=0x00000000004DAB60 "I"
 *   insn=0x00000000004DAB60 string=0x00000000004DAB64 ")"
 *   insn=0x00000000004DAB64 string=0x00000000004DAB68 ")"
 *   insn=0x00000000004DAB70 string=0x00000000004DAB74 "l"
 *   insn=0x00000000004DAB74 string=0x00000000004DAB78 ""
 *   insn=0x00000000004DAB78 string=0x00000000004DAB94 " @"
 *   insn=0x00000000004DAB80 string=0x00000000004DAB84 "?"
 *   insn=0x00000000004DAB98 string=0x00000000004DAB9C "*"
 *   insn=0x00000000004DABA4 string=0x00000000004DABA8 " "
 *   insn=0x00000000004DABA8 string=0x00000000004DABAC "(#@"
 *   insn=0x00000000004DABC4 string=0x00000000004DABC8 "#"
 *   insn=0x00000000004DABD4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DABF4 string=0x00000000004DABF8 "w#"
 *   insn=0x00000000004DABF8 string=0x00000000004DABFC "`C"
 *   insn=0x00000000004DABFC string=0x00000000004DAC00 "aC"
 *   insn=0x00000000004DAC00 string=0x00000000004DAC04 "hG"
 *   insn=0x00000000004DAC04 string=0x00000000004DAC08 "&"
 *   insn=0x00000000004DAC14 string=0x00000000004DAC18 "w"
 *   insn=0x00000000004DAC18 string=0x00000000004DAC1C ""
 *   insn=0x00000000004DAC24 string=0x00000000004DAC28 "s"
 *   insn=0x00000000004DAC28 string=0x00000000004DAC2C "t"
 *   insn=0x00000000004DAC2C string=0x00000000004DAC30 "h"
 *   insn=0x00000000004DAC30 string=0x00000000004DAC34 "i"
 *   insn=0x00000000004DAC34 string=0x00000000004DAC38 "jj"
 *   insn=0x00000000004DAC40 string=0x00000000004DAC44 "@"
 *   insn=0x00000000004DAC44 string=0x00000000004DAC48 ""
 *   insn=0x00000000004DAC48 string=0x00000000004DAC4C "`"
 *   insn=0x00000000004DAC5C string=0x00000000004DAC60 "A"
 *   insn=0x00000000004DAC68 string=0x00000000004DAC6C "?"
 *   insn=0x00000000004DAC6C string=0x00000000004DAC70 "("
 *   insn=0x00000000004DAC70 string=0x00000000004DAC74 "\t}@"
 *   insn=0x00000000004DAC7C string=0x00000000004DAC80 ")}"
 *   insn=0x00000000004DAC84 string=0x00000000004DAC88 "}~"
 *   insn=0x00000000004DAC94 string=0x00000000004DAC98 "6v"
 *   insn=0x00000000004DAC98 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004DACC0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004DACD0 string=0x00000000004DACD4 ""
 *   insn=0x00000000004DACE0 string=0x00000000004DACE4 "A"
 *   insn=0x00000000004DACE4 string=0x00000000004DAD0C "qm"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedFloat(
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
  _BYTE v13[32]; // [xsp+104h] [xbp-48h] BYREF
  __int64 v14; // [xsp+124h] [xbp-28h]

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
  return *(float *)(**((_QWORD **)v6 + 5) + 4LL * a3);
}

