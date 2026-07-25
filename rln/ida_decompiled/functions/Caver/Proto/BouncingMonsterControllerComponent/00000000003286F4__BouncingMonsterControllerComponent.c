/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003286F4
 * Mangled: _ZN5Caver5Proto34BouncingMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(Caver::Proto::BouncingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F8490  Caver::Proto::BouncingMonsterControllerComponent::MergeFrom(Caver::Proto::BouncingMonsterControllerComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x0000000000328700 string=0x0000000000328704 ""
 *   insn=0x000000000032870C string=0x0000000000328710 "A"
 *   insn=0x0000000000328710 string=0x0000000000328714 "h~"
 *   insn=0x0000000000328714 string=0x0000000000328718 "^?"
 *   insn=0x0000000000328718 string=0x00000000001F8490 "0'"
 *   insn=0x0000000000328730 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000328734 string=0x0000000000328738 "cd\t"
 *   insn=0x0000000000328750 string=0x0000000000328754 "U"
 *   insn=0x000000000032876C string=0x00000000003287AC "hr@9("
 *   insn=0x0000000000328770 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000328780 string=0x0000000000328784 "7"
 *   insn=0x0000000000328784 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000328788 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000328794 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032879C string=0x00000000003287A0 "XG"
 *   insn=0x00000000003287A0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003287A8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003287AC string=0x00000000003287B0 "("
 *   insn=0x00000000003287B0 string=0x00000000003287B4 "("
 *   insn=0x00000000003287C4 string=0x00000000003287C8 "i"
 *   insn=0x00000000003287C8 string=0x00000000003287CC ""
 *   insn=0x00000000003287F8 string=0x00000000003287FC "i"
 *   insn=0x00000000003287FC string=0x0000000000328800 ""
 *   insn=0x0000000000328808 string=0x000000000032880C "h"
 *   insn=0x000000000032880C string=0x0000000000328810 "h"
 *   insn=0x0000000000328814 string=0x0000000000328818 "i"
 *   insn=0x0000000000328818 string=0x000000000032881C ""
 *   insn=0x0000000000328824 string=0x0000000000328828 "h"
 *   insn=0x0000000000328830 string=0x0000000000328834 "i"
 *   insn=0x0000000000328834 string=0x0000000000328838 ""
 *   insn=0x0000000000328840 string=0x0000000000328844 "h"
 *   insn=0x0000000000328850 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000328858 string=0x000000000032885C "eF"
 *   insn=0x000000000032886C string=0x0000000000328870 ""
 *   insn=0x0000000000328870 string=0x0000000000328874 "A"
 *   insn=0x0000000000328874 string=0x0000000000328878 ""
 *   insn=0x0000000000328878 string=0x000000000032887C "a;"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(
        Caver::Proto::BouncingMonsterControllerComponent *this,
        const Caver::Proto::BouncingMonsterControllerComponent *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C8FA0;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::BouncingMonsterControllerComponent::MergeFrom();
}

