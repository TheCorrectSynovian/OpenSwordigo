/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003229A0
 * Mangled: _ZN5Caver5Proto23ParticleObjectComponentC2ERKS1_
 * Demangled: Caver::Proto::ParticleObjectComponent::ParticleObjectComponent(Caver::Proto::ParticleObjectComponent const&)
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
 *   0x00000000001FE660  Caver::Proto::ParticleObjectComponent::MergeFrom(Caver::Proto::ParticleObjectComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000003229A8 string=0x00000000003229AC "("
 *   insn=0x00000000003229AC string=0x00000000003229B0 "A@"
 *   insn=0x00000000003229B8 string=0x00000000003229BC "A"
 *   insn=0x00000000003229BC string=0x00000000003229C0 "h~"
 *   insn=0x00000000003229C0 string=0x00000000003229C4 "'o"
 *   insn=0x00000000003229D8 string=0x00000000003229DC "\tS"
 *   insn=0x00000000003229DC string=0x00000000001F7600 "0'"
 *   insn=0x00000000003229E4 string=0x00000000003229E8 "Y"
 *   insn=0x00000000003229FC string=0x0000000000322A00 "U"
 *   insn=0x0000000000322A18 string=0x0000000000322A1C "hB@9"
 *   insn=0x0000000000322A18 string=0x0000000000322A58 "B"
 *   insn=0x0000000000322A24 string=0x0000000000322A28 "i"
 *   insn=0x0000000000322A28 string=0x0000000000322A2C ""
 *   insn=0x0000000000322A58 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000322A68 string=0x0000000000322A6C "aN"
 *   insn=0x0000000000322A6C string=0x0000000000322A70 "A"
 *   insn=0x0000000000322A6C string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000322A70 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000322A7C string=0x00000000001FC210 "0'"
 *   insn=0x0000000000322A88 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000322A90 string=0x0000000000322A94 "hB@9h"
 *   insn=0x0000000000322A90 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000322A94 string=0x0000000000322A98 "h"
 *   insn=0x0000000000322AA0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000322AB4 string=0x0000000000322AB8 "%"
 *   insn=0x0000000000322AB8 string=0x0000000000322ABC "("
 *   insn=0x0000000000322ABC string=0x0000000000322AC0 "A@"
 *   insn=0x0000000000322AC0 string=0x0000000000322AC4 "A"
 *   insn=0x0000000000322AC4 string=0x0000000000322AC8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleObjectComponent::ParticleObjectComponent(
        Caver::Proto::ParticleObjectComponent *this,
        const Caver::Proto::ParticleObjectComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C8988;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::ParticleObjectComponent::MergeFrom();
}

