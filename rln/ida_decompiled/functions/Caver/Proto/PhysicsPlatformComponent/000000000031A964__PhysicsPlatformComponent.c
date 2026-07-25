/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A964
 * Mangled: _ZN5Caver5Proto24PhysicsPlatformComponentC2ERKS1_
 * Demangled: Caver::Proto::PhysicsPlatformComponent::PhysicsPlatformComponent(Caver::Proto::PhysicsPlatformComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3CA0  Caver::Proto::PhysicsPlatformComponent::MergeFrom(Caver::Proto::PhysicsPlatformComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 35
 *   insn=0x000000000031A96C string=0x000000000031A970 "H"
 *   insn=0x000000000031A970 string=0x000000000031A974 ""
 *   insn=0x000000000031A97C string=0x000000000031A980 "A"
 *   insn=0x000000000031A980 string=0x000000000031A984 "h~"
 *   insn=0x000000000031A988 string=0x00000000001F3CA0 "P'"
 *   insn=0x000000000031A9A0 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031A9A8 string=0x000000000031A9AC "h"
 *   insn=0x000000000031A9C0 string=0x000000000031A9C4 "U"
 *   insn=0x000000000031A9DC string=0x000000000031AA1C "hr@9("
 *   insn=0x000000000031A9E0 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031A9F4 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031A9F8 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031AA04 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031AA10 string=0x00000000001FA500 "0'"
 *   insn=0x000000000031AA18 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031AA1C string=0x000000000031AA20 "("
 *   insn=0x000000000031AA20 string=0x000000000031AA24 "("
 *   insn=0x000000000031AA34 string=0x000000000031AA38 "i"
 *   insn=0x000000000031AA38 string=0x000000000031AA3C ""
 *   insn=0x000000000031AA68 string=0x000000000031AA6C "i"
 *   insn=0x000000000031AA6C string=0x000000000031AA70 ""
 *   insn=0x000000000031AA78 string=0x000000000031AA7C "h"
 *   insn=0x000000000031AA7C string=0x000000000031AA80 "h"
 *   insn=0x000000000031AA84 string=0x000000000031AA88 "i"
 *   insn=0x000000000031AA88 string=0x000000000031AA8C ""
 *   insn=0x000000000031AA94 string=0x000000000031AA98 "h"
 *   insn=0x000000000031AAA0 string=0x000000000031AAA4 "i"
 *   insn=0x000000000031AAA4 string=0x000000000031AAA8 ""
 *   insn=0x000000000031AAB0 string=0x000000000031AAB4 "h"
 *   insn=0x000000000031AAC0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031AAD0 string=0x000000000031AAD4 "|"
 *   insn=0x000000000031AAD8 string=0x000000000031AADC "H"
 *   insn=0x000000000031AADC string=0x000000000031AAE0 ""
 *   insn=0x000000000031AAE0 string=0x000000000031AAE4 "A"
 *   insn=0x000000000031AAE4 string=0x000000000031AAE8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PhysicsPlatformComponent::PhysicsPlatformComponent(
        Caver::Proto::PhysicsPlatformComponent *this,
        const Caver::Proto::PhysicsPlatformComponent *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C84D8;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::PhysicsPlatformComponent::MergeFrom();
}

