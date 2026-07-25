/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEC00
 * Mangled: _ZN5Caver5Proto9RectangleC2ERKS1_
 * Demangled: Caver::Proto::Rectangle::Rectangle(Caver::Proto::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002021D0  Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x00000000002CEC0C string=0x00000000002CEC10 ""
 *   insn=0x00000000002CEC18 string=0x00000000002CEC1C "A"
 *   insn=0x00000000002CEC1C string=0x00000000002CEC20 "h~"
 *   insn=0x00000000002CEC20 string=0x00000000002CEC24 "k"
 *   insn=0x00000000002CEC38 string=0x00000000002CEC3C "q"
 *   insn=0x00000000002CEC3C string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CEC40 string=0x00000000002CEC44 " "
 *   insn=0x00000000002CEC5C string=0x00000000002CEC60 "U"
 *   insn=0x00000000002CEC78 string=0x00000000002CECB8 "hr@9("
 *   insn=0x00000000002CEC7C string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002CEC90 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002CEC94 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002CEC9C string=0x00000000002CECA0 "\"
 *   insn=0x00000000002CECA0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002CECAC string=0x00000000001FA500 "0'"
 *   insn=0x00000000002CECB0 string=0x00000000002CECB4 "O"
 *   insn=0x00000000002CECB4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002CECB8 string=0x00000000002CECBC "("
 *   insn=0x00000000002CECBC string=0x00000000002CECC0 "("
 *   insn=0x00000000002CECD0 string=0x00000000002CECD4 "i"
 *   insn=0x00000000002CECD4 string=0x00000000002CECD8 ""
 *   insn=0x00000000002CECEC string=0x00000000002CED5C "]"
 *   insn=0x00000000002CED04 string=0x00000000002CED08 "i"
 *   insn=0x00000000002CED08 string=0x00000000002CED0C ""
 *   insn=0x00000000002CED14 string=0x00000000002CED18 "h"
 *   insn=0x00000000002CED18 string=0x00000000002CED1C "h"
 *   insn=0x00000000002CED20 string=0x00000000002CED24 "i"
 *   insn=0x00000000002CED24 string=0x00000000002CED28 ""
 *   insn=0x00000000002CED30 string=0x00000000002CED34 "h"
 *   insn=0x00000000002CED3C string=0x00000000002CED40 "i"
 *   insn=0x00000000002CED40 string=0x00000000002CED44 ""
 *   insn=0x00000000002CED4C string=0x00000000002CED50 "h"
 *   insn=0x00000000002CED5C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CED64 string=0x00000000002CED68 """
 *   insn=0x00000000002CED70 string=0x00000000002CED74 "v"
 *   insn=0x00000000002CED78 string=0x00000000002CED7C ""
 *   insn=0x00000000002CED7C string=0x00000000002CED80 "A"
 *   insn=0x00000000002CED80 string=0x00000000002CED84 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Rectangle::Rectangle(Caver::Proto::Rectangle *this, const Caver::Proto::Rectangle *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C5AF8;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::Rectangle::MergeFrom(this, a2);
}

