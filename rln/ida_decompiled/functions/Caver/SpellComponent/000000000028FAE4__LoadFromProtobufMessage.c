/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028FAE4
 * Mangled: _ZN5Caver14SpellComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001FC2D0  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 9
 *   insn=0x000000000028FAF4 string=0x000000000028FAF8 "R"
 *   insn=0x000000000028FAF8 string=0x00000000001FA840 "0'"
 *   insn=0x000000000028FAFC string=0x000000000028FB00 "UG"
 *   insn=0x000000000028FB00 string=0x000000000028FB04 "`""
 *   insn=0x000000000028FB14 string=0x000000000028FB18 "@"
 *   insn=0x000000000028FB18 string=0x000000000028FB1C ")]C"
 *   insn=0x000000000028FB24 string=0x000000000028FB28 ")"
 *   insn=0x000000000028FB28 string=0x000000000028FB2C "("
 *   insn=0x000000000028FB38 string=0x000000000028FB3C "y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpellComponent::LoadFromProtobufMessage(
        Caver::SpellComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  __int64 v5; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::SpellComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9898);
  if ( *(_QWORD *)(Message + 16) )
    v5 = Message;
  else
    v5 = Caver::Proto::SpellComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::SpellComponent *)((char *)this + 144),
    *(const Caver::Proto::Program **)(v5 + 16));
}

