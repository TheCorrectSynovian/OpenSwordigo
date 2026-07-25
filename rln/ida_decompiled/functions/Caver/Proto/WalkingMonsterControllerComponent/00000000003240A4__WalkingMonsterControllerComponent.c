/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003240A4
 * Mangled: _ZN5Caver5Proto33WalkingMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(Caver::Proto::WalkingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FA810  Caver::Proto::WalkingMonsterControllerComponent::MergeFrom(Caver::Proto::WalkingMonsterControllerComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000003240AC string=0x00000000003240B0 ""
 *   insn=0x00000000003240B0 string=0x00000000003240B4 ""
 *   insn=0x00000000003240BC string=0x00000000003240C0 "A"
 *   insn=0x00000000003240C0 string=0x00000000003240C4 "h~"
 *   insn=0x00000000003240C8 string=0x00000000001FA810 "0'"
 *   insn=0x00000000003240DC string=0x00000000003240E0 "HM"
 *   insn=0x00000000003240E0 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000324100 string=0x0000000000324104 "U"
 *   insn=0x000000000032411C string=0x0000000000324120 "hB@9"
 *   insn=0x000000000032411C string=0x000000000032415C """
 *   insn=0x0000000000324128 string=0x000000000032412C "i"
 *   insn=0x000000000032412C string=0x0000000000324130 ""
 *   insn=0x0000000000324144 string=0x00000000003241A4 "KH"
 *   insn=0x000000000032415C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000324170 string=0x0000000000324174 "!"
 *   insn=0x0000000000324170 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000324174 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032417C string=0x0000000000324180 "$`"
 *   insn=0x0000000000324180 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032418C string=0x00000000001FA500 "0'"
 *   insn=0x0000000000324194 string=0x0000000000324198 "hB@9h"
 *   insn=0x0000000000324194 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000324198 string=0x000000000032419C "h"
 *   insn=0x00000000003241A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003241B8 string=0x00000000003241BC "d"
 *   insn=0x00000000003241BC string=0x00000000003241C0 ""
 *   insn=0x00000000003241C0 string=0x00000000003241C4 ""
 *   insn=0x00000000003241C4 string=0x00000000003241C8 "A"
 *   insn=0x00000000003241C8 string=0x00000000003241CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(
        Caver::Proto::WalkingMonsterControllerComponent *this,
        const Caver::Proto::WalkingMonsterControllerComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C8B68;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::WalkingMonsterControllerComponent::MergeFrom();
}

