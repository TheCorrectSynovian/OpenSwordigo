/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272138
 * Mangled: _ZN5Caver19HeroEntityComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::HeroEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4D30  Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 8
 *   insn=0x000000000027214C string=0x00000000001F4D30 "P'"
 *   insn=0x0000000000272150 string=0x0000000000272154 ""
 *   insn=0x0000000000272154 string=0x0000000000272158 "`""
 *   insn=0x0000000000272160 string=0x0000000000272164 "3"
 *   insn=0x0000000000272168 string=0x000000000027216C "@"
 *   insn=0x000000000027216C string=0x0000000000272170 ")"
 *   insn=0x0000000000272178 string=0x000000000027217C ")"
 *   insn=0x000000000027217C string=0x0000000000272180 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEntityComponent::LoadFromProtobufMessage(
        Caver::HeroEntityComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  __int64 v5; // x8

  Caver::EntityComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::HeroEntityComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9570);
  if ( *(_QWORD *)(Message + 16) )
    v5 = Message;
  else
    v5 = Caver::Proto::HeroEntityComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::HeroEntityComponent *)((char *)this + 336),
    *(const Caver::Proto::Program **)(v5 + 16));
}

