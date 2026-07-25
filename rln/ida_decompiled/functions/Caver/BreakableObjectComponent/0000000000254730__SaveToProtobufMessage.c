/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000254730
 * Mangled: _ZNK5Caver24BreakableObjectComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::BreakableObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3D80  Caver::ProtobufValueFromSpecialDamageType(Caver::SpecialDamageType)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FB0A0  Caver::Proto::BreakableObjectComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000254800  Caver::BreakableObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000025474C string=0x0000000000254750 ""
 *   insn=0x0000000000254758 string=0x000000000025475C "Q"
 *   insn=0x000000000025475C string=0x00000000001FB0A0 "0'"
 *   insn=0x0000000000254760 string=0x0000000000254764 "b"
 *   insn=0x0000000000254774 string=0x00000000001F7570 "0'"
 *   insn=0x000000000025477C string=0x0000000000254780 "i"
 *   insn=0x0000000000254780 string=0x0000000000254784 "\n"
 *   insn=0x000000000025478C string=0x0000000000254790 "iv@"
 *   insn=0x0000000000254790 string=0x0000000000254794 ""
 *   insn=0x000000000025479C string=0x00000000002547A0 "`z@"
 *   insn=0x00000000002547A0 string=0x00000000002547A4 "w}"
 *   insn=0x00000000002547A4 string=0x00000000001F3D80 "P'"
 *   insn=0x00000000002547B0 string=0x00000000002547B4 ""
 *   insn=0x00000000002547BC string=0x00000000002547D4 "`"
 *   insn=0x00000000002547C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002547C8 string=0x00000000002547CC ""
 *   insn=0x00000000002547CC string=0x00000000001F5000 "P'"
 *   insn=0x00000000002547E8 string=0x00000000001F8790 "0'"
 *   insn=0x00000000002547F4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002547F8 string=0x00000000002547FC "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BreakableObjectComponent::SaveToProtobufMessage(
        Caver::BreakableObjectComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::BreakableObjectComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w8
  char v6; // w9
  int v7; // w9
  int v8; // w0
  int v9; // w8
  Caver::Proto::Program *v10; // x21

  v3 = (Caver::Proto::BreakableObjectComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::BreakableObjectComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *((_BYTE *)this + 113);
  *(_DWORD *)(v4 + 32) = v5 | 1;
  *(_BYTE *)(v4 + 12) = v6;
  v7 = *((_DWORD *)this + 29);
  *(_DWORD *)(v4 + 32) = v5 | 3;
  *(_DWORD *)(v4 + 16) = v7;
  v8 = Caver::ProtobufValueFromSpecialDamageType();
  v9 = *(_DWORD *)(v4 + 32);
  v10 = *(Caver::Proto::Program **)(v4 + 24);
  *(_DWORD *)(v4 + 20) = v8;
  *(_DWORD *)(v4 + 32) = v9 | 0xC;
  if ( !v10 )
  {
    v10 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v10);
    *(_QWORD *)(v4 + 24) = v10;
  }
  return Caver::Program::SaveToProtobufMessage((Caver::BreakableObjectComponent *)((char *)this + 128), v10);
}

