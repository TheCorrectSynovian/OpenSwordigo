/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000234C58
 * Mangled: _ZNK5Caver15ShadowComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ShadowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6F50  Caver::Proto::ShadowComponent::default_instance(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000234D10  Caver::ShadowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x0000000000234C74 string=0x0000000000234C78 "ID"
 *   insn=0x0000000000234C84 string=0x00000000001F6F50 "0'"
 *   insn=0x0000000000234C88 string=0x0000000000234C8C "b"
 *   insn=0x0000000000234C98 string=0x0000000000234C9C "5\n"
 *   insn=0x0000000000234C9C string=0x00000000001F7570 "0'"
 *   insn=0x0000000000234CA0 string=0x0000000000234CA4 "h"
 *   insn=0x0000000000234CB0 string=0x0000000000234CB4 "(\t"
 *   insn=0x0000000000234CBC string=0x0000000000234CD4 "hBH"
 *   insn=0x0000000000234CC0 string=0x0000000000234CC4 "G"
 *   insn=0x0000000000234CC4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000234CCC string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000234CDC string=0x0000000000234CE0 "h"
 *   insn=0x0000000000234CE0 string=0x0000000000234CE4 ")\t"
 *   insn=0x0000000000234D00 string=0x0000000000234D04 "k\t"
 *   insn=0x0000000000234D04 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowComponent::SaveToProtobufMessage(
        Caver::ShadowComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ShadowComponent *v3; // x0
  __int64 v4; // x21
  int v5; // w9
  __int64 v6; // x20
  int v7; // w9

  v3 = (Caver::Proto::ShadowComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ShadowComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 12) = *(_QWORD *)((char *)this + 124);
  *(_DWORD *)(v4 + 32) = v5 | 7;
  if ( !v6 )
  {
    v6 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v6);
    *(_QWORD *)(v4 + 24) = v6;
  }
  v7 = *(_DWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 12) = *(_QWORD *)((char *)this + 132);
  *(_DWORD *)(v6 + 20) = *((_DWORD *)this + 35);
  *(_DWORD *)(v6 + 24) = v7 | 7;
}

