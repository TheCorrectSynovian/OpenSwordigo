/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8B24
 * Mangled: _ZN5Caver5Proto21PlayerProfile_CounterC2ERKS1_
 * Demangled: Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(Caver::Proto::PlayerProfile_Counter const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000200D40  Caver::Proto::PlayerProfile_Counter::MergeFrom(Caver::Proto::PlayerProfile_Counter const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x00000000002E8B34 string=0x00000000002E8B38 ""
 *   insn=0x00000000002E8B40 string=0x00000000002E8B44 ")"
 *   insn=0x00000000002E8B44 string=0x00000000002E8B48 "A"
 *   insn=0x00000000002E8B48 string=0x00000000002E8B4C "h"
 *   insn=0x00000000002E8B4C string=0x00000000002E8B50 "i~"
 *   insn=0x00000000002E8B50 string=0x00000000002E8B54 "{`"
 *   insn=0x00000000002E8B6C string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E8B70 string=0x00000000002E8B74 "Tc\n"
 *   insn=0x00000000002E8B8C string=0x00000000002E8B90 "V"
 *   insn=0x00000000002E8BA8 string=0x00000000002E8BE8 "hr@9H"
 *   insn=0x00000000002E8BAC string=0x000000000058B0FC "./../../../../Source/Caver/Content/Proto/GameState.pb.cc"
 *   insn=0x00000000002E8BB8 string=0x00000000002E8BBC "#"
 *   insn=0x00000000002E8BC0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002E8BC4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002E8BD0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002E8BD8 string=0x00000000002E8BDC "IF"
 *   insn=0x00000000002E8BDC string=0x00000000001FA500 "0'"
 *   insn=0x00000000002E8BE4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002E8BE8 string=0x00000000002E8BEC "H"
 *   insn=0x00000000002E8BFC string=0x00000000002E8C00 "u\n@"
 *   insn=0x00000000002E8C00 string=0x00000000002E8C04 ")"
 *   insn=0x00000000002E8C04 string=0x00000000002E8C08 ""
 *   insn=0x00000000002E8C18 string=0x00000000002E8C1C "q2"
 *   insn=0x00000000002E8C1C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E8C20 string=0x00000000002E8C24 ""
 *   insn=0x00000000002E8C24 string=0x00000000002E8C28 "a"
 *   insn=0x00000000002E8C28 string=0x00000000002E8C2C ""
 *   insn=0x00000000002E8C38 string=0x00000000002E8C3C "h"
 *   insn=0x00000000002E8C44 string=0x00000000002E8C48 "i"
 *   insn=0x00000000002E8C48 string=0x00000000002E8C4C ""
 *   insn=0x00000000002E8C78 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E8C80 string=0x00000000002E8C84 "[E"
 *   insn=0x00000000002E8CA0 string=0x00000000002E8CA4 "T"
 *   insn=0x00000000002E8CB8 string=0x00000000002E8CBC "`\n@"
 *   insn=0x00000000002E8CBC string=0x00000000002E8CC0 ""
 *   insn=0x00000000002E8CC0 string=0x00000000002E8CC4 ")"
 *   insn=0x00000000002E8CC4 string=0x00000000002E8CC8 "A"
 *   insn=0x00000000002E8CCC string=0x00000000002E8CD0 "h"
 *   insn=0x00000000002E8CD0 string=0x00000000002E8CD4 " "
 *   insn=0x00000000002E8CD8 string=0x00000000002E8CDC "\t"
 *   insn=0x00000000002E8CE0 string=0x00000000002E8CE4 "J"
 *   insn=0x00000000002E8CE4 string=0x00000000002E8CE8 "(a"
 *   insn=0x00000000002E8CF0 string=0x00000000002E8CF4 "o9"
 *   insn=0x00000000002E8CF4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E8CF8 string=0x00000000002E8CFC "A:"
 *   insn=0x00000000002E8D08 string=0x00000000002E8D0C "!"
 *   insn=0x00000000002E8D0C string=0x00000000002E8D70 "X5"
 *   insn=0x00000000002E8D20 string=0x00000000002E8D24 "J=G"
 *   insn=0x00000000002E8D24 string=0x00000000002E8D28 ")!"
 *   insn=0x00000000002E8D2C string=0x00000000002E8D30 "*"
 *   insn=0x00000000002E8D2C string=0x00000000002E8D44 "*"
 *   insn=0x00000000002E8D30 string=0x00000000002E8D34 "K"
 *   insn=0x00000000002E8D34 string=0x00000000002E8D38 "+"
 *   insn=0x00000000002E8D40 string=0x00000000002E8D50 "_"
 *   insn=0x00000000002E8D44 string=0x00000000002E8D48 "K"
 *   insn=0x00000000002E8D48 string=0x00000000002E8D4C "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(
        Caver::Proto::PlayerProfile_Counter *this,
        const Caver::Proto::PlayerProfile_Counter *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C6D30;
  *((_QWORD *)this + 2) = &Caver::Proto::PlayerProfile_Counter::_default_name_;
  *((_QWORD *)this + 3) = 0;
  Caver::Proto::PlayerProfile_Counter::MergeFrom();
}

