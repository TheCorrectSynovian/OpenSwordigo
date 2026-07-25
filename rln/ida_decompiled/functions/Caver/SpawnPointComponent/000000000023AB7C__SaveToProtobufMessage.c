/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023AB7C
 * Mangled: _ZNK5Caver19SpawnPointComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SpawnPointComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6EF0  Caver::Proto::SpawnPointComponent::default_instance(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023AC34  Caver::SpawnPointComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000023AB94 string=0x000000000023AB98 "h%"
 *   insn=0x000000000023AB98 string=0x000000000023AB9C "iD"
 *   insn=0x000000000023ABA8 string=0x00000000001F6EF0 "0'"
 *   insn=0x000000000023ABAC string=0x000000000023ABB0 "b"
 *   insn=0x000000000023ABBC string=0x000000000023ABC0 "l"
 *   insn=0x000000000023ABC0 string=0x00000000001F7570 "0'"
 *   insn=0x000000000023ABC4 string=0x000000000023ABC8 "hr@"
 *   insn=0x000000000023ABD4 string=0x000000000023ABD8 "("
 *   insn=0x000000000023ABE0 string=0x000000000023ABF8 "hBG"
 *   insn=0x000000000023ABE4 string=0x000000000023ABE8 "~"
 *   insn=0x000000000023ABE8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023ABF0 string=0x00000000001FAF50 "0'"
 *   insn=0x000000000023AC00 string=0x000000000023AC04 "h~@"
 *   insn=0x000000000023AC04 string=0x000000000023AC08 ")\t"
 *   insn=0x000000000023AC28 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023AC2C string=0x000000000023AC30 "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpawnPointComponent::SaveToProtobufMessage(
        Caver::SpawnPointComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SpawnPointComponent *v3; // x0
  __int64 v4; // x21
  int v5; // w9
  __int64 v6; // x20
  int v7; // w9

  v3 = (Caver::Proto::SpawnPointComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::SpawnPointComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)this + 28);
  *(_DWORD *)(v4 + 24) = v5 | 3;
  if ( !v6 )
  {
    v6 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v6);
    *(_QWORD *)(v4 + 16) = v6;
  }
  v7 = *(_DWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 12) = *(_QWORD *)((char *)this + 116);
  *(_DWORD *)(v6 + 20) = *((_DWORD *)this + 31);
  *(_DWORD *)(v6 + 24) = v7 | 7;
}

