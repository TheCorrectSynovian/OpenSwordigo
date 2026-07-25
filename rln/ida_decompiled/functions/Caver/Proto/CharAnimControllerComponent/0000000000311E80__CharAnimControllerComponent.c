/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311E80
 * Mangled: _ZN5Caver5Proto27CharAnimControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent(Caver::Proto::CharAnimControllerComponent const&)
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
 *   0x00000000002015E0  Caver::Proto::CharAnimControllerComponent::MergeFrom(Caver::Proto::CharAnimControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x0000000000311E8C string=0x0000000000311E90 ""
 *   insn=0x0000000000311E9C string=0x0000000000311EA0 "A"
 *   insn=0x0000000000311EA0 string=0x0000000000311EA4 "h"
 *   insn=0x0000000000311EC0 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000311EC8 string=0x0000000000311ECC " "
 *   insn=0x0000000000311EE0 string=0x0000000000311EE4 "U"
 *   insn=0x0000000000311EFC string=0x0000000000311F3C "h"
 *   insn=0x0000000000311F00 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000311F0C string=0x0000000000311F10 "C"
 *   insn=0x0000000000311F10 string=0x0000000000311F14 "7"
 *   insn=0x0000000000311F14 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000311F18 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000311F24 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000311F2C string=0x0000000000311F30 "t"
 *   insn=0x0000000000311F30 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000311F38 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000311F3C string=0x0000000000311F40 "h"
 *   insn=0x0000000000311F40 string=0x0000000000311F44 "h"
 *   insn=0x0000000000311F44 string=0x0000000000311F48 "("
 *   insn=0x0000000000311F50 string=0x0000000000311F54 "h"
 *   insn=0x0000000000311F5C string=0x0000000000311F60 "i"@"
 *   insn=0x0000000000311F60 string=0x0000000000311F64 ""
 *   insn=0x0000000000311F74 string=0x0000000000311F78 "A"
 *   insn=0x0000000000311F90 string=0x0000000000311F94 "i"
 *   insn=0x0000000000311F94 string=0x0000000000311F98 ""
 *   insn=0x0000000000311FA0 string=0x0000000000311FA4 "h&@"
 *   insn=0x0000000000311FA4 string=0x0000000000311FA8 "("
 *   insn=0x0000000000311FAC string=0x0000000000311FB0 "i"
 *   insn=0x0000000000311FB0 string=0x0000000000311FB4 ""
 *   insn=0x0000000000311FBC string=0x0000000000311FC0 "h&@"
 *   insn=0x0000000000311FC0 string=0x0000000000311FC4 "h"
 *   insn=0x0000000000311FC8 string=0x0000000000311FCC "i"
 *   insn=0x0000000000311FCC string=0x0000000000311FD0 ""
 *   insn=0x0000000000311FD8 string=0x0000000000311FDC "h&@"
 *   insn=0x0000000000311FE4 string=0x0000000000311FE8 "i"
 *   insn=0x0000000000311FE8 string=0x0000000000311FEC ""
 *   insn=0x0000000000311FF4 string=0x0000000000311FF8 "h&@"
 *   insn=0x0000000000312000 string=0x0000000000312004 "i"
 *   insn=0x0000000000312004 string=0x0000000000312008 ""
 *   insn=0x0000000000312010 string=0x0000000000312014 "h&@"
 *   insn=0x0000000000312014 string=0x0000000000312018 "("
 *   insn=0x0000000000312020 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000312028 string=0x000000000031202C "q"
 *   insn=0x0000000000312030 string=0x0000000000312034 "$"
 *   insn=0x000000000031203C string=0x0000000000312040 ""
 *   insn=0x0000000000312040 string=0x0000000000312044 "A"
 *   insn=0x0000000000312044 string=0x0000000000312048 ""
 *   insn=0x0000000000312048 string=0x000000000031204C "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent(
        Caver::Proto::CharAnimControllerComponent *this,
        const Caver::Proto::CharAnimControllerComponent *a2)
{
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C7EC0;
  Caver::Proto::CharAnimControllerComponent::MergeFrom();
}

