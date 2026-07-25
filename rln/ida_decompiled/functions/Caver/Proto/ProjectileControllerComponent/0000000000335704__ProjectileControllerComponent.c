/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335704
 * Mangled: _ZN5Caver5Proto29ProjectileControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::ProjectileControllerComponent::ProjectileControllerComponent(Caver::Proto::ProjectileControllerComponent const&)
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
 *   0x00000000001FF4F0  Caver::Proto::ProjectileControllerComponent::MergeFrom(Caver::Proto::ProjectileControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x0000000000335710 string=0x0000000000335714 ""
 *   insn=0x0000000000335720 string=0x0000000000335724 "A"
 *   insn=0x0000000000335724 string=0x0000000000335728 "h"
 *   insn=0x000000000033572C string=0x0000000000335730 "p'"
 *   insn=0x0000000000335748 string=0x00000000001F7600 "0'"
 *   insn=0x000000000033574C string=0x0000000000335750 "]0\t"
 *   insn=0x0000000000335768 string=0x000000000033576C "U"
 *   insn=0x0000000000335784 string=0x00000000003357C4 "hB@9"
 *   insn=0x0000000000335788 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000033579C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003357A0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003357AC string=0x00000000001FC210 "0'"
 *   insn=0x00000000003357B4 string=0x00000000003357B8 "R"
 *   insn=0x00000000003357B8 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003357C0 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003357D0 string=0x00000000003357D4 "i2@9"
 *   insn=0x00000000003357D4 string=0x00000000003357D8 ""
 *   insn=0x00000000003357E0 string=0x00000000003357E4 "h"
 *   insn=0x00000000003357EC string=0x00000000003357F0 "i6@9"
 *   insn=0x00000000003357F0 string=0x00000000003357F4 ""
 *   insn=0x0000000000335824 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033582C string=0x0000000000335830 "p"
 *   insn=0x0000000000335834 string=0x0000000000335838 "#0\t"
 *   insn=0x0000000000335840 string=0x0000000000335844 ""
 *   insn=0x0000000000335844 string=0x0000000000335848 "A"
 *   insn=0x0000000000335848 string=0x000000000033584C ""
 *   insn=0x000000000033584C string=0x0000000000335850 "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ProjectileControllerComponent::ProjectileControllerComponent(
        Caver::Proto::ProjectileControllerComponent *this,
        const Caver::Proto::ProjectileControllerComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *(_QWORD *)this = off_6C9978;
  *((_DWORD *)this + 4) = 0;
  Caver::Proto::ProjectileControllerComponent::MergeFrom();
}

