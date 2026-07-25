/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D9090
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet16GetRepeatedInt32Eii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedInt32(int,int)
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
 *   insn=0x00000000004D90A0 string=0x00000000004D90A4 "T"
 *   insn=0x00000000004D90B4 string=0x00000000004D90B8 "\t@"
 *   insn=0x00000000004D90BC string=0x00000000004D90C0 ")"
 *   insn=0x00000000004D90C0 string=0x00000000004D90C4 "*!@"
 *   insn=0x00000000004D90C4 string=0x00000000004D90C8 "+a"
 *   insn=0x00000000004D90C8 string=0x00000000004D90CC ",A"
 *   insn=0x00000000004D90CC string=0x00000000004D90D0 "_"
 *   insn=0x00000000004D90D0 string=0x00000000004D90D4 "j"
 *   insn=0x00000000004D90D4 string=0x00000000004D90D8 ""
 *   insn=0x00000000004D90D8 string=0x00000000004D90DC "I"
 *   insn=0x00000000004D90DC string=0x00000000004D90E0 ")"
 *   insn=0x00000000004D90E8 string=0x00000000004D90EC "\t!@"
 *   insn=0x00000000004D90EC string=0x00000000004D90F0 "?"
 *   insn=0x00000000004D90FC string=0x00000000004D914C ""
 *   insn=0x00000000004D9100 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004D910C string=0x00000000004D9110 "C""
 *   insn=0x00000000004D9114 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004D9118 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004D9120 string=0x00000000004D9124 ";"
 *   insn=0x00000000004D9124 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004D9128 string=0x00000000004D9130 "8"
 *   insn=0x00000000004D9128 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004D913C string=0x00000000001FA500 "0'"
 *   insn=0x00000000004D9140 string=0x00000000004D9144 "+"
 *   insn=0x00000000004D9144 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004D914C string=0x00000000004D9150 ""
 *   insn=0x00000000004D9164 string=0x00000000004D917C "Ut"
 *   insn=0x00000000004D917C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D9190 string=0x00000000004D9194 "n"
 *   insn=0x00000000004D91A8 string=0x00000000004D91AC "U"
 *   insn=0x00000000004D91C0 string=0x00000000004D91C4 "\t@"
 *   insn=0x00000000004D91C8 string=0x00000000004D91CC ")"
 *   insn=0x00000000004D91CC string=0x00000000004D91D0 "*!@"
 *   insn=0x00000000004D91D0 string=0x00000000004D91D4 "+a"
 *   insn=0x00000000004D91D4 string=0x00000000004D91D8 ",A"
 *   insn=0x00000000004D91D8 string=0x00000000004D91DC "_"
 *   insn=0x00000000004D91DC string=0x00000000004D91E0 "j"
 *   insn=0x00000000004D91E0 string=0x00000000004D91E4 ""
 *   insn=0x00000000004D91E4 string=0x00000000004D91E8 "I"
 *   insn=0x00000000004D91E8 string=0x00000000004D91EC ")"
 *   insn=0x00000000004D91F4 string=0x00000000004D91F8 "\t!@"
 *   insn=0x00000000004D91F8 string=0x00000000004D91FC "?"
 *   insn=0x00000000004D9208 string=0x00000000004D9258 ""
 *   insn=0x00000000004D9218 string=0x00000000004D921C "C""
 *   insn=0x00000000004D921C string=0x00000000004D9220 "tt"
 *   insn=0x00000000004D9258 string=0x00000000004D925C ""
 *   insn=0x00000000004D929C string=0x00000000004D92A0 "+"
 *   insn=0x00000000004D92C0 string=0x00000000004D92C4 "S"
 *   insn=0x00000000004D92C4 string=0x00000000004D92C8 "h"
 *   insn=0x00000000004D9300 string=0x00000000004D9304 "H#@"
 *   insn=0x00000000004D9304 string=0x00000000004D9308 "Ic"
 *   insn=0x00000000004D9308 string=0x00000000004D930C "JC"
 *   insn=0x00000000004D9310 string=0x00000000004D9314 "I"
 *   insn=0x00000000004D9314 string=0x00000000004D9318 ")"
 *   insn=0x00000000004D9318 string=0x00000000004D931C ")"
 *   insn=0x00000000004D9324 string=0x00000000004D9328 "l"
 *   insn=0x00000000004D9328 string=0x00000000004D932C ""
 *   insn=0x00000000004D932C string=0x00000000004D9348 " @"
 *   insn=0x00000000004D9334 string=0x00000000004D9338 "_"
 *   insn=0x00000000004D934C string=0x00000000004D9350 "J"
 *   insn=0x00000000004D9354 string=0x00000000004D9358 "?"
 *   insn=0x00000000004D935C string=0x00000000004D9360 " "
 *   insn=0x00000000004D9360 string=0x00000000004D9364 "H#@"
 *   insn=0x00000000004D937C string=0x00000000004D9380 "$"
 *   insn=0x00000000004D938C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D93BC string=0x00000000004D93C0 "8"
 *   insn=0x00000000004D93D0 string=0x00000000004D93D4 ""
 *   insn=0x00000000004D93EC string=0x00000000004D93F0 "|p"
 *   insn=0x00000000004D93FC string=0x00000000004D9400 "@"
 *   insn=0x00000000004D9400 string=0x00000000004D9404 ""
 *   insn=0x00000000004D9418 string=0x00000000004D941C "A"
 *   insn=0x00000000004D9424 string=0x00000000004D9428 "?"
 *   insn=0x00000000004D9428 string=0x00000000004D942C "("
 *   insn=0x00000000004D942C string=0x00000000004D9430 "\t}@"
 *   insn=0x00000000004D9438 string=0x00000000004D943C ")}"
 *   insn=0x00000000004D9440 string=0x00000000004D9444 "}~"
 *   insn=0x00000000004D9450 string=0x00000000004D9454 "G|"
 *   insn=0x00000000004D9454 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D947C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004D948C string=0x00000000004D9490 ""
 *   insn=0x00000000004D9490 string=0x00000000004D9494 "h"
 *   insn=0x00000000004D949C string=0x00000000004D94A0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedInt32(
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

