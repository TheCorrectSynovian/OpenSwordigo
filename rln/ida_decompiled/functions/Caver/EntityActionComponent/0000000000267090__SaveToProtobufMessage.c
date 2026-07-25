/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267090
 * Mangled: _ZNK5Caver21EntityActionComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::EntityActionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000200E80  Caver::Proto::EntityActionComponent::default_instance(void)
 *   0x0000000000267130  Caver::EntityActionComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000002670AC string=0x00000000002670B0 ""
 *   insn=0x00000000002670B8 string=0x00000000002670BC "qg"
 *   insn=0x00000000002670C0 string=0x00000000002670C4 "b"
 *   insn=0x00000000002670D0 string=0x00000000002670D4 "'A"
 *   insn=0x00000000002670D4 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002670E0 string=0x00000000002670E4 ""
 *   insn=0x00000000002670EC string=0x0000000000267104 "`"
 *   insn=0x00000000002670F0 string=0x00000000002670F4 ";9"
 *   insn=0x00000000002670F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002670FC string=0x00000000001F5000 "P'"
 *   insn=0x0000000000267118 string=0x00000000001F8790 "0'"
 *   insn=0x0000000000267120 string=0x0000000000267124 "c@"
 *   insn=0x0000000000267124 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityActionComponent::SaveToProtobufMessage(
        Caver::EntityActionComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::EntityActionComponent *v3; // x0
  __int64 v4; // x21
  Caver::Proto::Program *v5; // x20

  v3 = (Caver::Proto::EntityActionComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::EntityActionComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(Caver::Proto::Program **)(v4 + 16);
  *(_DWORD *)(v4 + 24) |= 1u;
  if ( !v5 )
  {
    v5 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v5);
    *(_QWORD *)(v4 + 16) = v5;
  }
  return Caver::Program::SaveToProtobufMessage((Caver::EntityActionComponent *)((char *)this + 112), v5);
}

