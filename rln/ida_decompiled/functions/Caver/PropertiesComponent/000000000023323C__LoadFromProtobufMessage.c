/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023323C
 * Mangled: _ZN5Caver19PropertiesComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::PropertiesComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 8
 *   insn=0x000000000023324C string=0x0000000000233250 "|"
 *   insn=0x0000000000233250 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000233254 string=0x0000000000233258 "UD"
 *   insn=0x0000000000233258 string=0x000000000023325C "`""
 *   insn=0x000000000023326C string=0x0000000000233270 "@"
 *   insn=0x0000000000233270 string=0x0000000000233274 ")"
 *   insn=0x000000000023327C string=0x0000000000233280 ")"
 *   insn=0x0000000000233280 string=0x0000000000233284 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PropertiesComponent::LoadFromProtobufMessage(
        Caver::PropertiesComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  __int64 v5; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::PropertiesComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9598);
  if ( *(_QWORD *)(Message + 16) )
    v5 = Message;
  else
    v5 = Caver::Proto::PropertiesComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::PropertiesComponent *)((char *)this + 120),
    *(const Caver::Proto::Program **)(v5 + 16));
}

