/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DC140
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet17GetRepeatedStringEii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedString(int,int)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
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
 * Referenced strings: 95
 *   insn=0x00000000004DC150 string=0x00000000004DC154 "T"
 *   insn=0x00000000004DC164 string=0x00000000004DC168 "\t@"
 *   insn=0x00000000004DC16C string=0x00000000004DC170 ")"
 *   insn=0x00000000004DC170 string=0x00000000004DC174 "*!@"
 *   insn=0x00000000004DC174 string=0x00000000004DC178 "+a"
 *   insn=0x00000000004DC178 string=0x00000000004DC17C ",A"
 *   insn=0x00000000004DC17C string=0x00000000004DC180 "_"
 *   insn=0x00000000004DC180 string=0x00000000004DC184 "j"
 *   insn=0x00000000004DC184 string=0x00000000004DC188 ""
 *   insn=0x00000000004DC188 string=0x00000000004DC18C "I"
 *   insn=0x00000000004DC18C string=0x00000000004DC190 ")"
 *   insn=0x00000000004DC198 string=0x00000000004DC19C "\t!@"
 *   insn=0x00000000004DC19C string=0x00000000004DC1A0 "?"
 *   insn=0x00000000004DC1AC string=0x00000000004DC1FC ""
 *   insn=0x00000000004DC1B0 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DC1C4 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DC1C8 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004DC1D4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DC1D8 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004DC1EC string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DC1F4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DC1FC string=0x00000000004DC200 ""
 *   insn=0x00000000004DC214 string=0x00000000004DC22C ")h"
 *   insn=0x00000000004DC22C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DC240 string=0x00000000004DC244 "B"
 *   insn=0x00000000004DC258 string=0x00000000004DC25C "T"
 *   insn=0x00000000004DC26C string=0x00000000004DC270 "\t@"
 *   insn=0x00000000004DC274 string=0x00000000004DC278 ")"
 *   insn=0x00000000004DC278 string=0x00000000004DC27C "*!@"
 *   insn=0x00000000004DC27C string=0x00000000004DC280 "+a"
 *   insn=0x00000000004DC280 string=0x00000000004DC284 ",A"
 *   insn=0x00000000004DC284 string=0x00000000004DC288 "_"
 *   insn=0x00000000004DC288 string=0x00000000004DC28C "j"
 *   insn=0x00000000004DC28C string=0x00000000004DC290 ""
 *   insn=0x00000000004DC290 string=0x00000000004DC294 "I"
 *   insn=0x00000000004DC294 string=0x00000000004DC298 ")"
 *   insn=0x00000000004DC2A0 string=0x00000000004DC2A4 "\t!@"
 *   insn=0x00000000004DC2A4 string=0x00000000004DC2A8 "?"
 *   insn=0x00000000004DC2B4 string=0x00000000004DC304 ""
 *   insn=0x00000000004DC2C8 string=0x00000000004DC2CC "Ih"
 *   insn=0x00000000004DC304 string=0x00000000004DC308 ""
 *   insn=0x00000000004DC344 string=0x00000000004DC348 "_"
 *   insn=0x00000000004DC36C string=0x00000000004DC370 "["
 *   insn=0x00000000004DC370 string=0x00000000004DC374 "h"
 *   insn=0x00000000004DC3A4 string=0x00000000004DC3A8 "#@"
 *   insn=0x00000000004DC3A8 string=0x00000000004DC3AC "\tc"
 *   insn=0x00000000004DC3AC string=0x00000000004DC3B0 "\nC"
 *   insn=0x00000000004DC3B4 string=0x00000000004DC3B8 "I"
 *   insn=0x00000000004DC3B8 string=0x00000000004DC3BC ")"
 *   insn=0x00000000004DC3BC string=0x00000000004DC3C0 ")"
 *   insn=0x00000000004DC3C8 string=0x00000000004DC3CC "l"
 *   insn=0x00000000004DC3CC string=0x00000000004DC3D0 ""
 *   insn=0x00000000004DC3D0 string=0x00000000004DC3EC " @"
 *   insn=0x00000000004DC3F0 string=0x00000000004DC3F4 "J"
 *   insn=0x00000000004DC400 string=0x00000000004DC404 " "
 *   insn=0x00000000004DC404 string=0x00000000004DC408 "#@"
 *   insn=0x00000000004DC420 string=0x00000000004DC424 " "
 *   insn=0x00000000004DC42C string=0x00000000004DC430 "ld"
 *   insn=0x00000000004DC430 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DC450 string=0x00000000004DC454 "V#"
 *   insn=0x00000000004DC454 string=0x00000000004DC458 "@C"
 *   insn=0x00000000004DC458 string=0x00000000004DC45C "AC"
 *   insn=0x00000000004DC45C string=0x00000000004DC460 "HG"
 *   insn=0x00000000004DC46C string=0x00000000004DC470 "V"
 *   insn=0x00000000004DC470 string=0x00000000004DC474 ""
 *   insn=0x00000000004DC478 string=0x00000000004DC47C "S"
 *   insn=0x00000000004DC47C string=0x00000000004DC480 "T"
 *   insn=0x00000000004DC480 string=0x00000000004DC484 "\"
 *   insn=0x00000000004DC484 string=0x00000000004DC488 "_"
 *   insn=0x00000000004DC488 string=0x00000000004DC48C "Ud"
 *   insn=0x00000000004DC48C string=0x00000000004DC490 "`"
 *   insn=0x00000000004DC494 string=0x00000000004DC498 "|"
 *   insn=0x00000000004DC498 string=0x00000000004DC49C "\t"
 *   insn=0x00000000004DC49C string=0x00000000004DC4A0 "@"
 *   insn=0x00000000004DC4A4 string=0x00000000004DC4A8 "i"A))}@"
 *   insn=0x00000000004DC4A8 string=0x00000000004DC4AC ")}@"
 *   insn=0x00000000004DC4AC string=0x00000000004DC4B0 "?"
 *   insn=0x00000000004DC4B4 string=0x00000000004DC4B8 "h"
 *   insn=0x00000000004DC4B4 string=0x00000000004DC4CC "i"
 *   insn=0x00000000004DC4B8 string=0x00000000004DC4BC "*"
 *   insn=0x00000000004DC4BC string=0x00000000004DC4C0 "j\n"
 *   insn=0x00000000004DC4C8 string=0x00000000004DC508 "h"
 *   insn=0x00000000004DC4D4 string=0x00000000004DC4E8 ""
 *   insn=0x00000000004DC4E0 string=0x00000000004DC4E4 "h"
 *   insn=0x00000000004DC4E0 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000004DC4E8 string=0x00000000004DC4EC "h"
 *   insn=0x00000000004DC4EC string=0x00000000004DC4F0 "Da"
 *   insn=0x00000000004DC4F0 string=0x00000000004DC4F4 "h\n"
 *   insn=0x00000000004DC4F0 string=0x00000000001F4A00 "P'"
 *   insn=0x00000000004DC4F4 string=0x00000000004DC4F8 "i"
 *   insn=0x00000000004DC4F8 string=0x00000000004DC4FC "\n"
 *   insn=0x00000000004DC4FC string=0x00000000004DC500 "j\n"
 *   insn=0x00000000004DC500 string=0x00000000004DC504 " y("
 *   insn=0x00000000004DC510 string=0x00000000004DC514 "!"
 *   insn=0x00000000004DC514 string=0x00000000004DC538 "fg"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedString(
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

