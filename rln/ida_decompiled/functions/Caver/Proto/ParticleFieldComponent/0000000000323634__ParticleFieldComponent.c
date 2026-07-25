/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323634
 * Mangled: _ZN5Caver5Proto22ParticleFieldComponentC2ERKS1_
 * Demangled: Caver::Proto::ParticleFieldComponent::ParticleFieldComponent(Caver::Proto::ParticleFieldComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6E30  Caver::Proto::ParticleFieldComponent::MergeFrom(Caver::Proto::ParticleFieldComponent const&)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x000000000032363C string=0x0000000000323640 ""
 *   insn=0x0000000000323640 string=0x0000000000323644 ""
 *   insn=0x0000000000323648 string=0x000000000032364C "A"
 *   insn=0x000000000032364C string=0x0000000000323650 "h~"
 *   insn=0x0000000000323654 string=0x00000000001F6E30 "0'"
 *   insn=0x000000000032366C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000323674 string=0x0000000000323678 "5"
 *   insn=0x0000000000323688 string=0x000000000032368C "S"
 *   insn=0x000000000032368C string=0x0000000000323690 "h"
 *   insn=0x0000000000323690 string=0x0000000000323694 "?"
 *   insn=0x000000000032369C string=0x00000000003236A0 "B"
 *   insn=0x000000000032369C string=0x00000000003236DC "h"
 *   insn=0x00000000003236A0 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003236B0 string=0x00000000003236B4 "OK"
 *   insn=0x00000000003236B4 string=0x00000000003236B8 "!"
 *   insn=0x00000000003236B4 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003236B8 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003236C4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003236D0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003236D8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003236FC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032370C string=0x0000000000323710 "mx\t"
 *   insn=0x0000000000323714 string=0x0000000000323718 ""
 *   insn=0x0000000000323718 string=0x000000000032371C ""
 *   insn=0x000000000032371C string=0x0000000000323720 "A"
 *   insn=0x0000000000323720 string=0x0000000000323724 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleFieldComponent::ParticleFieldComponent(
        Caver::Proto::ParticleFieldComponent *this,
        const Caver::Proto::ParticleFieldComponent *a2)
{
  *(_QWORD *)this = off_6C8A78;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::ParticleFieldComponent::MergeFrom();
}

