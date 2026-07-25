/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267034
 * Mangled: _ZN5Caver21EntityActionComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::EntityActionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 9
 *   insn=0x0000000000267048 string=0x00000000001FA840 "0'"
 *   insn=0x000000000026704C string=0x0000000000267050 ""
 *   insn=0x0000000000267050 string=0x0000000000267054 "`""
 *   insn=0x000000000026705C string=0x0000000000267060 "L_"
 *   insn=0x0000000000267064 string=0x0000000000267068 "@"
 *   insn=0x0000000000267068 string=0x000000000026706C ")"
 *   insn=0x0000000000267074 string=0x0000000000267078 ")"
 *   insn=0x0000000000267078 string=0x000000000026707C "("
 *   insn=0x0000000000267088 string=0x000000000026708C "%k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityActionComponent::LoadFromProtobufMessage(
        Caver::EntityActionComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  __int64 v5; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::EntityActionComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9538);
  if ( *(_QWORD *)(Message + 16) )
    v5 = Message;
  else
    v5 = Caver::Proto::EntityActionComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::EntityActionComponent *)((char *)this + 112),
    *(const Caver::Proto::Program **)(v5 + 16));
}

