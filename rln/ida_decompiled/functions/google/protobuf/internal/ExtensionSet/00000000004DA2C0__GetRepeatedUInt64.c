/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DA2C0
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet17GetRepeatedUInt64Eii
 * Demangled: google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(int,int)
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
 *   insn=0x00000000004DA2D0 string=0x00000000004DA2D4 "T"
 *   insn=0x00000000004DA2E4 string=0x00000000004DA2E8 "\t@"
 *   insn=0x00000000004DA2EC string=0x00000000004DA2F0 ")"
 *   insn=0x00000000004DA2F0 string=0x00000000004DA2F4 "*!@"
 *   insn=0x00000000004DA2F4 string=0x00000000004DA2F8 "+a"
 *   insn=0x00000000004DA2F8 string=0x00000000004DA2FC ",A"
 *   insn=0x00000000004DA2FC string=0x00000000004DA300 "_"
 *   insn=0x00000000004DA300 string=0x00000000004DA304 "j"
 *   insn=0x00000000004DA304 string=0x00000000004DA308 ""
 *   insn=0x00000000004DA308 string=0x00000000004DA30C "I"
 *   insn=0x00000000004DA30C string=0x00000000004DA310 ")"
 *   insn=0x00000000004DA318 string=0x00000000004DA31C "\t!@"
 *   insn=0x00000000004DA31C string=0x00000000004DA320 "?"
 *   insn=0x00000000004DA32C string=0x00000000004DA37C ""
 *   insn=0x00000000004DA330 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DA340 string=0x00000000004DA344 "+p"
 *   insn=0x00000000004DA344 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DA348 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004DA354 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DA358 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004DA368 string=0x00000000004DA36C "e"
 *   insn=0x00000000004DA36C string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DA374 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DA37C string=0x00000000004DA380 ""
 *   insn=0x00000000004DA3AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DA3BC string=0x00000000004DA3C0 "A"
 *   insn=0x00000000004DA3D8 string=0x00000000004DA3DC "U"
 *   insn=0x00000000004DA3F0 string=0x00000000004DA3F4 "\t@"
 *   insn=0x00000000004DA3F8 string=0x00000000004DA3FC ")"
 *   insn=0x00000000004DA3FC string=0x00000000004DA400 "*!@"
 *   insn=0x00000000004DA400 string=0x00000000004DA404 "+a"
 *   insn=0x00000000004DA404 string=0x00000000004DA408 ",A"
 *   insn=0x00000000004DA408 string=0x00000000004DA40C "_"
 *   insn=0x00000000004DA40C string=0x00000000004DA410 "j"
 *   insn=0x00000000004DA410 string=0x00000000004DA414 ""
 *   insn=0x00000000004DA414 string=0x00000000004DA418 "I"
 *   insn=0x00000000004DA418 string=0x00000000004DA41C ")"
 *   insn=0x00000000004DA424 string=0x00000000004DA428 "\t!@"
 *   insn=0x00000000004DA428 string=0x00000000004DA42C "?"
 *   insn=0x00000000004DA438 string=0x00000000004DA488 ""
 *   insn=0x00000000004DA45C string=0x00000000004DA460 "l"
 *   insn=0x00000000004DA464 string=0x00000000004DA46C "i"
 *   insn=0x00000000004DA474 string=0x00000000004DA478 """
 *   insn=0x00000000004DA47C string=0x00000000004DA480 "\"
 *   insn=0x00000000004DA488 string=0x00000000004DA48C ""
 *   insn=0x00000000004DA4C0 string=0x00000000004DA4C4 "K"
 *   insn=0x00000000004DA4F0 string=0x00000000004DA4F4 "S"
 *   insn=0x00000000004DA4F4 string=0x00000000004DA4F8 "h"
 *   insn=0x00000000004DA530 string=0x00000000004DA534 "H#@"
 *   insn=0x00000000004DA534 string=0x00000000004DA538 "Ic"
 *   insn=0x00000000004DA538 string=0x00000000004DA53C "JC"
 *   insn=0x00000000004DA540 string=0x00000000004DA544 "I"
 *   insn=0x00000000004DA544 string=0x00000000004DA548 ")"
 *   insn=0x00000000004DA548 string=0x00000000004DA54C ")"
 *   insn=0x00000000004DA554 string=0x00000000004DA558 "l"
 *   insn=0x00000000004DA558 string=0x00000000004DA55C ""
 *   insn=0x00000000004DA55C string=0x00000000004DA578 " @"
 *   insn=0x00000000004DA564 string=0x00000000004DA568 "_"
 *   insn=0x00000000004DA570 string=0x00000000004DA574 "c"
 *   insn=0x00000000004DA57C string=0x00000000004DA580 "J"
 *   insn=0x00000000004DA584 string=0x00000000004DA588 "?"
 *   insn=0x00000000004DA58C string=0x00000000004DA590 " "
 *   insn=0x00000000004DA590 string=0x00000000004DA594 "H#@"
 *   insn=0x00000000004DA5AC string=0x00000000004DA5B0 "$"
 *   insn=0x00000000004DA5B8 string=0x00000000004DA5BC "\tl"
 *   insn=0x00000000004DA5BC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004DA600 string=0x00000000004DA604 ""
 *   insn=0x00000000004DA62C string=0x00000000004DA630 "@"
 *   insn=0x00000000004DA630 string=0x00000000004DA634 ""
 *   insn=0x00000000004DA648 string=0x00000000004DA64C "A"
 *   insn=0x00000000004DA654 string=0x00000000004DA658 "?"
 *   insn=0x00000000004DA658 string=0x00000000004DA65C "("
 *   insn=0x00000000004DA65C string=0x00000000004DA660 "\t}@"
 *   insn=0x00000000004DA668 string=0x00000000004DA66C ")}"
 *   insn=0x00000000004DA670 string=0x00000000004DA674 "}}"
 *   insn=0x00000000004DA684 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004DA690 string=0x00000000004DA694 "3"
 *   insn=0x00000000004DA6A8 string=0x00000000004DA6AC "-j"
 *   insn=0x00000000004DA6AC string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004DA6BC string=0x00000000004DA6C0 ""
 *   insn=0x00000000004DA6C0 string=0x00000000004DA6C4 "h"
 *   insn=0x00000000004DA6CC string=0x00000000004DA6D0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(
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

