/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F59C
 * Mangled: _ZNK5Caver18TouchableComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::TouchableComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8210  Caver::Proto::TouchableComponent::default_instance(void)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023F644  Caver::TouchableComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x000000000023F5B0 string=0x000000000023F5B4 "["
 *   insn=0x000000000023F5B4 string=0x000000000023F5B8 "H%"
 *   insn=0x000000000023F5B8 string=0x000000000023F5BC ""
 *   insn=0x000000000023F5C8 string=0x00000000001F8210 "0'"
 *   insn=0x000000000023F5CC string=0x000000000023F5D0 "b"
 *   insn=0x000000000023F5E0 string=0x00000000001F7570 "0'"
 *   insn=0x000000000023F5E4 string=0x000000000023F5E8 "hr@"
 *   insn=0x000000000023F5F4 string=0x000000000023F5F8 "("
 *   insn=0x000000000023F600 string=0x000000000023F618 "`"
 *   insn=0x000000000023F608 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023F60C string=0x000000000023F610 "|"
 *   insn=0x000000000023F610 string=0x00000000001F5000 "P'"
 *   insn=0x000000000023F628 string=0x000000000023F62C "Y"
 *   insn=0x000000000023F62C string=0x00000000001F8790 "0'"
 *   insn=0x000000000023F638 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TouchableComponent::SaveToProtobufMessage(
        Caver::TouchableComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::TouchableComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w9
  Caver::Proto::Program *v6; // x21

  v3 = (Caver::Proto::TouchableComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::TouchableComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 24);
  v6 = *(Caver::Proto::Program **)(v4 + 16);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)this + 28);
  *(_DWORD *)(v4 + 24) = v5 | 3;
  if ( !v6 )
  {
    v6 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v6);
    *(_QWORD *)(v4 + 16) = v6;
  }
  return Caver::Program::SaveToProtobufMessage((Caver::TouchableComponent *)((char *)this + 128), v6);
}

