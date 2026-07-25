/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DAEE8
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet17GetRepeatedDoubleEii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedDouble(int,int)
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
 * Referenced strings: 91
 *   insn=0x00000000004DAEF8 string=0x00000000004DAEFC "T"
 *   insn=0x00000000004DAF0C string=0x00000000004DAF10 "\t@"
 *   insn=0x00000000004DAF14 string=0x00000000004DAF18 ")"
 *   insn=0x00000000004DAF18 string=0x00000000004DAF1C "*!@"
 *   insn=0x00000000004DAF1C string=0x00000000004DAF20 "+a"
 *   insn=0x00000000004DAF20 string=0x00000000004DAF24 ",A"
 *   insn=0x00000000004DAF24 string=0x00000000004DAF28 "_"
 *   insn=0x00000000004DAF28 string=0x00000000004DAF2C "j"
 *   insn=0x00000000004DAF2C string=0x00000000004DAF30 ""
 *   insn=0x00000000004DAF30 string=0x00000000004DAF34 "I"
 *   insn=0x00000000004DAF34 string=0x00000000004DAF38 ")"
 *   insn=0x00000000004DAF40 string=0x00000000004DAF44 "\t!@"
 *   insn=0x00000000004DAF44 string=0x00000000004DAF48 "?"
 *   insn=0x00000000004DAF54 string=0x00000000004DAFA4 ""
 *   insn=0x00000000004DAF58 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DAF68 string=0x00000000004DAF6C "!m"
 *   insn=0x00000000004DAF6C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DAF70 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004DAF7C string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DAF80 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004DAF90 string=0x00000000004DAF94 "[}"
 *   insn=0x00000000004DAF94 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DAF9C string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DAFA4 string=0x00000000004DAFA8 ""
 *   insn=0x00000000004DAFD4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DAFE4 string=0x00000000004DAFE8 "7"
 *   insn=0x00000000004DB004 string=0x00000000004DB008 "T"
 *   insn=0x00000000004DB010 string=0x00000000004DB014 ""
 *   insn=0x00000000004DB01C string=0x00000000004DB020 "\t@"
 *   insn=0x00000000004DB024 string=0x00000000004DB028 ")"
 *   insn=0x00000000004DB028 string=0x00000000004DB02C "*!@"
 *   insn=0x00000000004DB02C string=0x00000000004DB030 "+a"
 *   insn=0x00000000004DB030 string=0x00000000004DB034 ",A"
 *   insn=0x00000000004DB034 string=0x00000000004DB038 "_"
 *   insn=0x00000000004DB038 string=0x00000000004DB03C "j"
 *   insn=0x00000000004DB03C string=0x00000000004DB040 ""
 *   insn=0x00000000004DB040 string=0x00000000004DB044 "I"
 *   insn=0x00000000004DB044 string=0x00000000004DB048 ")"
 *   insn=0x00000000004DB050 string=0x00000000004DB054 "\t!@"
 *   insn=0x00000000004DB054 string=0x00000000004DB058 "?"
 *   insn=0x00000000004DB064 string=0x00000000004DB0B4 ""
 *   insn=0x00000000004DB088 string=0x00000000004DB08C "a"
 *   insn=0x00000000004DB090 string=0x00000000004DB098 "^"
 *   insn=0x00000000004DB0A8 string=0x00000000004DB0AC "Q|"
 *   insn=0x00000000004DB0B4 string=0x00000000004DB0B8 ""
 *   insn=0x00000000004DB0B8 string=0x00000000004DB0BC ""
 *   insn=0x00000000004DB0CC string=0x00000000004DB0E8 "zl"
 *   insn=0x00000000004DB0F0 string=0x00000000004DB0F4 "?|"
 *   insn=0x00000000004DB124 string=0x00000000004DB128 "\"
 *   insn=0x00000000004DB12C string=0x00000000004DB130 ""
 *   insn=0x00000000004DB164 string=0x00000000004DB168 "(#@"
 *   insn=0x00000000004DB168 string=0x00000000004DB16C ")c"
 *   insn=0x00000000004DB16C string=0x00000000004DB170 "*C"
 *   insn=0x00000000004DB174 string=0x00000000004DB178 "I"
 *   insn=0x00000000004DB178 string=0x00000000004DB17C ")"
 *   insn=0x00000000004DB17C string=0x00000000004DB180 ")"
 *   insn=0x00000000004DB188 string=0x00000000004DB18C "l"
 *   insn=0x00000000004DB18C string=0x00000000004DB190 ""
 *   insn=0x00000000004DB190 string=0x00000000004DB1AC " @"
 *   insn=0x00000000004DB198 string=0x00000000004DB19C "?"
 *   insn=0x00000000004DB1A4 string=0x00000000004DB1A8 "V"
 *   insn=0x00000000004DB1B0 string=0x00000000004DB1B4 "*"
 *   insn=0x00000000004DB1BC string=0x00000000004DB1C0 " "
 *   insn=0x00000000004DB1C0 string=0x00000000004DB1C4 "(#@"
 *   insn=0x00000000004DB1DC string=0x00000000004DB1E0 "#"
 *   insn=0x00000000004DB1EC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DB20C string=0x00000000004DB210 "w#"
 *   insn=0x00000000004DB210 string=0x00000000004DB214 "`C"
 *   insn=0x00000000004DB214 string=0x00000000004DB218 "aC"
 *   insn=0x00000000004DB218 string=0x00000000004DB21C "hG"
 *   insn=0x00000000004DB22C string=0x00000000004DB230 "w"
 *   insn=0x00000000004DB230 string=0x00000000004DB234 ""
 *   insn=0x00000000004DB23C string=0x00000000004DB240 "s"
 *   insn=0x00000000004DB240 string=0x00000000004DB244 "t"
 *   insn=0x00000000004DB244 string=0x00000000004DB248 "h"
 *   insn=0x00000000004DB248 string=0x00000000004DB24C "i"
 *   insn=0x00000000004DB258 string=0x00000000004DB25C "@"
 *   insn=0x00000000004DB25C string=0x00000000004DB260 ""
 *   insn=0x00000000004DB260 string=0x00000000004DB264 "`"
 *   insn=0x00000000004DB274 string=0x00000000004DB278 "A"
 *   insn=0x00000000004DB280 string=0x00000000004DB284 "?"
 *   insn=0x00000000004DB284 string=0x00000000004DB288 "("
 *   insn=0x00000000004DB288 string=0x00000000004DB28C "\t}@"
 *   insn=0x00000000004DB294 string=0x00000000004DB298 ")}"
 *   insn=0x00000000004DB29C string=0x00000000004DB2A0 "}}"
 *   insn=0x00000000004DB2B0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004DB2BC string=0x00000000004DB2C0 "("
 *   insn=0x00000000004DB2D4 string=0x00000000004DB2D8 ""g"
 *   insn=0x00000000004DB2D8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004DB2E8 string=0x00000000004DB2EC ""
 *   insn=0x00000000004DB2F8 string=0x00000000004DB2FC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedDouble(
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
  return *(double *)(**((_QWORD **)v6 + 5) + 8LL * a3);
}

