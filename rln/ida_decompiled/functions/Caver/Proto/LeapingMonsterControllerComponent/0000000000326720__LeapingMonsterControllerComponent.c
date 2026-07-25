/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326720
 * Mangled: _ZN5Caver5Proto33LeapingMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(Caver::Proto::LeapingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAE00  Caver::Proto::LeapingMonsterControllerComponent::MergeFrom(Caver::Proto::LeapingMonsterControllerComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x000000000032672C string=0x0000000000326730 ""
 *   insn=0x0000000000326738 string=0x000000000032673C "A"
 *   insn=0x000000000032673C string=0x0000000000326740 "h"
 *   insn=0x0000000000326744 string=0x00000000001FAE00 "0'"
 *   insn=0x000000000032675C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000326760 string=0x0000000000326764 "Xl\t"
 *   insn=0x000000000032677C string=0x0000000000326780 "U"
 *   insn=0x0000000000326798 string=0x000000000032679C """
 *   insn=0x0000000000326798 string=0x00000000003267D8 "hR@9"
 *   insn=0x000000000032679C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003267B0 string=0x00000000003267B4 "!"
 *   insn=0x00000000003267B0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003267B4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003267C0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003267C8 string=0x00000000003267CC "MO"
 *   insn=0x00000000003267CC string=0x00000000001FA500 "0'"
 *   insn=0x00000000003267D4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003267E4 string=0x00000000003267E8 "i"
 *   insn=0x00000000003267E8 string=0x00000000003267EC ""
 *   insn=0x00000000003267F4 string=0x00000000003267F8 "h"
 *   insn=0x0000000000326800 string=0x0000000000326804 "i"
 *   insn=0x0000000000326804 string=0x0000000000326808 ""
 *   insn=0x0000000000326834 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032683C string=0x0000000000326840 "lN"
 *   insn=0x0000000000326850 string=0x0000000000326854 ""
 *   insn=0x0000000000326854 string=0x0000000000326858 "A"
 *   insn=0x0000000000326858 string=0x000000000032685C ""
 *   insn=0x000000000032685C string=0x0000000000326860 "hC"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(
        Caver::Proto::LeapingMonsterControllerComponent *this,
        const Caver::Proto::LeapingMonsterControllerComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8D48;
  Caver::Proto::LeapingMonsterControllerComponent::MergeFrom();
}

