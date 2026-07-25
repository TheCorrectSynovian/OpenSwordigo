/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F538
 * Mangled: _ZN5Caver18TouchableComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::TouchableComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 11
 *   insn=0x000000000023F54C string=0x000000000023F550 "H%"
 *   insn=0x000000000023F54C string=0x00000000001FA840 "0'"
 *   insn=0x000000000023F550 string=0x000000000023F554 ""
 *   insn=0x000000000023F554 string=0x000000000023F558 "`""
 *   insn=0x000000000023F560 string=0x000000000023F564 ""
 *   insn=0x000000000023F564 string=0x000000000023F568 ""
 *   insn=0x000000000023F568 string=0x000000000023F56C ")%"
 *   insn=0x000000000023F570 string=0x000000000023F574 "@"
 *   insn=0x000000000023F574 string=0x000000000023F578 ")"
 *   insn=0x000000000023F580 string=0x000000000023F584 ")"
 *   insn=0x000000000023F584 string=0x000000000023F588 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TouchableComponent::LoadFromProtobufMessage(
        Caver::TouchableComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  __int64 v5; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::TouchableComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E97A0);
  *((_DWORD *)this + 28) = *(_DWORD *)(Message + 12);
  if ( *(_QWORD *)(Message + 16) )
    v5 = Message;
  else
    v5 = Caver::Proto::TouchableComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::TouchableComponent *)((char *)this + 128),
    *(const Caver::Proto::Program **)(v5 + 16));
}

