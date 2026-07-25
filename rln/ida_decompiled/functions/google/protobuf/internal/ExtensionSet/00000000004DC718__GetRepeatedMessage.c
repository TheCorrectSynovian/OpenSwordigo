/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DC718
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet18GetRepeatedMessageEii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedMessage(int,int)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 109
 *   insn=0x00000000004DC728 string=0x00000000004DC72C "T"
 *   insn=0x00000000004DC73C string=0x00000000004DC740 "\t@"
 *   insn=0x00000000004DC744 string=0x00000000004DC748 ")"
 *   insn=0x00000000004DC748 string=0x00000000004DC74C "*!@"
 *   insn=0x00000000004DC74C string=0x00000000004DC750 "+a"
 *   insn=0x00000000004DC750 string=0x00000000004DC754 ",A"
 *   insn=0x00000000004DC754 string=0x00000000004DC758 "_"
 *   insn=0x00000000004DC758 string=0x00000000004DC75C "j"
 *   insn=0x00000000004DC75C string=0x00000000004DC760 ""
 *   insn=0x00000000004DC760 string=0x00000000004DC764 "I"
 *   insn=0x00000000004DC764 string=0x00000000004DC768 ")"
 *   insn=0x00000000004DC770 string=0x00000000004DC774 "\t!@"
 *   insn=0x00000000004DC774 string=0x00000000004DC778 "?"
 *   insn=0x00000000004DC784 string=0x00000000004DC7D4 ""
 *   insn=0x00000000004DC788 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DC79C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DC7A0 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004DC7AC string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DC7B0 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004DC7C0 string=0x00000000004DC7C4 "Ow"
 *   insn=0x00000000004DC7C4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DC7CC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DC7D4 string=0x00000000004DC7D8 ""
 *   insn=0x00000000004DC804 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DC80C string=0x00000000004DC810 "xv"
 *   insn=0x00000000004DC814 string=0x00000000004DC818 "+"
 *   insn=0x00000000004DC830 string=0x00000000004DC834 "T"
 *   insn=0x00000000004DC844 string=0x00000000004DC848 "\t@"
 *   insn=0x00000000004DC84C string=0x00000000004DC850 ")"
 *   insn=0x00000000004DC850 string=0x00000000004DC854 "*!@"
 *   insn=0x00000000004DC854 string=0x00000000004DC858 "+a"
 *   insn=0x00000000004DC858 string=0x00000000004DC85C ",A"
 *   insn=0x00000000004DC85C string=0x00000000004DC860 "_"
 *   insn=0x00000000004DC860 string=0x00000000004DC864 "j"
 *   insn=0x00000000004DC864 string=0x00000000004DC868 ""
 *   insn=0x00000000004DC868 string=0x00000000004DC86C "I"
 *   insn=0x00000000004DC86C string=0x00000000004DC870 ")"
 *   insn=0x00000000004DC878 string=0x00000000004DC87C "\t!@"
 *   insn=0x00000000004DC87C string=0x00000000004DC880 "?"
 *   insn=0x00000000004DC88C string=0x00000000004DC8DC ""
 *   insn=0x00000000004DC8B0 string=0x00000000004DC8B4 "W~"
 *   insn=0x00000000004DC8B8 string=0x00000000004DC8C0 "T~"
 *   insn=0x00000000004DC8C8 string=0x00000000004DC8CC "w"
 *   insn=0x00000000004DC8D0 string=0x00000000004DC8D4 "Gv"
 *   insn=0x00000000004DC8DC string=0x00000000004DC8E0 ""
 *   insn=0x00000000004DC8F4 string=0x00000000004DC90C "qf"
 *   insn=0x00000000004DC914 string=0x00000000004DC918 "6v"
 *   insn=0x00000000004DC944 string=0x00000000004DC948 "\"
 *   insn=0x00000000004DC980 string=0x00000000004DC984 "(#@"
 *   insn=0x00000000004DC984 string=0x00000000004DC988 ")c"
 *   insn=0x00000000004DC988 string=0x00000000004DC98C "*C"
 *   insn=0x00000000004DC990 string=0x00000000004DC994 "I"
 *   insn=0x00000000004DC994 string=0x00000000004DC998 ")"
 *   insn=0x00000000004DC998 string=0x00000000004DC99C ")"
 *   insn=0x00000000004DC9A4 string=0x00000000004DC9A8 "l"
 *   insn=0x00000000004DC9A8 string=0x00000000004DC9AC ""
 *   insn=0x00000000004DC9AC string=0x00000000004DC9C8 " @"
 *   insn=0x00000000004DC9B4 string=0x00000000004DC9B8 "?"
 *   insn=0x00000000004DC9C0 string=0x00000000004DC9C4 "O"
 *   insn=0x00000000004DC9CC string=0x00000000004DC9D0 "*"
 *   insn=0x00000000004DC9D8 string=0x00000000004DC9DC " "
 *   insn=0x00000000004DC9DC string=0x00000000004DC9E0 "(#@"
 *   insn=0x00000000004DC9F8 string=0x00000000004DC9FC " "
 *   insn=0x00000000004DCA08 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DCA28 string=0x00000000004DCA2C "w#"
 *   insn=0x00000000004DCA2C string=0x00000000004DCA30 "`C"
 *   insn=0x00000000004DCA30 string=0x00000000004DCA34 "aC"
 *   insn=0x00000000004DCA34 string=0x00000000004DCA38 "hG"
 *   insn=0x00000000004DCA44 string=0x00000000004DCA48 "w"
 *   insn=0x00000000004DCA48 string=0x00000000004DCA4C ""
 *   insn=0x00000000004DCA54 string=0x00000000004DCA58 "t"
 *   insn=0x00000000004DCA58 string=0x00000000004DCA5C "u"
 *   insn=0x00000000004DCA5C string=0x00000000004DCA60 "h"
 *   insn=0x00000000004DCA64 string=0x00000000004DCA68 "`"
 *   insn=0x00000000004DCA6C string=0x00000000004DCA70 "|"
 *   insn=0x00000000004DCA70 string=0x00000000004DCA74 "\t"
 *   insn=0x00000000004DCA74 string=0x00000000004DCA78 "`"
 *   insn=0x00000000004DCA7C string=0x00000000004DCA80 "\t)A))}@"
 *   insn=0x00000000004DCA80 string=0x00000000004DCA84 ")}@"
 *   insn=0x00000000004DCA84 string=0x00000000004DCA88 "?"
 *   insn=0x00000000004DCA8C string=0x00000000004DCA90 "\n"
 *   insn=0x00000000004DCA8C string=0x00000000004DCAA4 "h"
 *   insn=0x00000000004DCA90 string=0x00000000004DCA94 "+"
 *   insn=0x00000000004DCA94 string=0x00000000004DCA98 "\t"
 *   insn=0x00000000004DCA98 string=0x00000000004DCA9C "Tyi"
 *   insn=0x00000000004DCAA8 string=0x00000000004DCAAC "@"
 *   insn=0x00000000004DCAB8 string=0x00000000004DCABC "h\n"
 *   insn=0x00000000004DCABC string=0x00000000004DCAC0 "j"
 *   insn=0x00000000004DCAC8 string=0x00000000004DCAE4 "i"
 *   insn=0x00000000004DCAD4 string=0x00000000004DCAD8 "h"
 *   insn=0x00000000004DCAD4 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000004DCAD8 string=0x00000000004DCADC ""
 *   insn=0x00000000004DCAE0 string=0x00000000004DCB24 "h"
 *   insn=0x00000000004DCAE4 string=0x00000000004DCAE8 "?"
 *   insn=0x00000000004DCAEC string=0x00000000004DCAF0 "i"
 *   insn=0x00000000004DCAF0 string=0x00000000004DCAF4 " yh"
 *   insn=0x00000000004DCAF8 string=0x00000000004DCAFC ""
 *   insn=0x00000000004DCAF8 string=0x00000000004DCB28 "h\n"
 *   insn=0x00000000004DCAFC string=0x00000000004DCB00 ""
 *   insn=0x00000000004DCB04 string=0x00000000004DCB08 ""
 *   insn=0x00000000004DCB10 string=0x00000000004DCB14 "j"
 *   insn=0x00000000004DCB10 string=0x00000000004DCB20 "("
 *   insn=0x00000000004DCB14 string=0x00000000004DCB18 "Hyh"
 *   insn=0x00000000004DCB18 string=0x00000000004DCB1C "Hy)"
 *   insn=0x00000000004DCB28 string=0x00000000004DCB2C "i"
 *   insn=0x00000000004DCB2C string=0x00000000004DCB30 "\n"
 *   insn=0x00000000004DCB30 string=0x00000000004DCB34 "j\n"
 *   insn=0x00000000004DCB34 string=0x00000000004DCB38 "4y("
 *   insn=0x00000000004DCB44 string=0x00000000004DCB48 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedMessage(
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
  _BYTE v13[32]; // [xsp+F4h] [xbp-48h] BYREF
  __int64 v14; // [xsp+114h] [xbp-28h]

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

