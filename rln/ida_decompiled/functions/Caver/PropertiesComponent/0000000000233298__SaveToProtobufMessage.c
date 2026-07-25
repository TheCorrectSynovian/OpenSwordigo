/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000233298
 * Mangled: _ZNK5Caver19PropertiesComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::PropertiesComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FBEB0  Caver::Proto::PropertiesComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000233338  Caver::PropertiesComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000002332B4 string=0x00000000002332B8 "UD"
 *   insn=0x00000000002332C4 string=0x00000000001FBEB0 "0'"
 *   insn=0x00000000002332C8 string=0x00000000002332CC "b"
 *   insn=0x00000000002332DC string=0x00000000001F7570 "0'"
 *   insn=0x00000000002332E8 string=0x00000000002332EC ""
 *   insn=0x00000000002332F4 string=0x000000000023330C "`"
 *   insn=0x00000000002332FC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000233300 string=0x0000000000233304 "?"
 *   insn=0x0000000000233304 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000233320 string=0x00000000001F8790 "0'"
 *   insn=0x000000000023332C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000233330 string=0x0000000000233334 "d9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PropertiesComponent::SaveToProtobufMessage(
        Caver::PropertiesComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::PropertiesComponent *v3; // x0
  __int64 v4; // x21
  Caver::Proto::Program *v5; // x20

  v3 = (Caver::Proto::PropertiesComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::PropertiesComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(Caver::Proto::Program **)(v4 + 16);
  *(_DWORD *)(v4 + 24) |= 1u;
  if ( !v5 )
  {
    v5 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v5);
    *(_QWORD *)(v4 + 16) = v5;
  }
  return Caver::Program::SaveToProtobufMessage((Caver::PropertiesComponent *)((char *)this + 120), v5);
}

