/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3BFC
 * Mangled: _ZNK5Caver24OrbitControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::OrbitControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5970  Caver::Proto::OrbitControllerComponent::default_instance(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A3CC0  Caver::OrbitControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x00000000002A3C14 string=0x00000000002A3C18 """
 *   insn=0x00000000002A3C18 string=0x00000000002A3C1C ""
 *   insn=0x00000000002A3C24 string=0x00000000002A3C28 "RG"
 *   insn=0x00000000002A3C28 string=0x00000000001F5970 "P'"
 *   insn=0x00000000002A3C2C string=0x00000000002A3C30 "b"
 *   insn=0x00000000002A3C3C string=0x00000000002A3C40 "LN"
 *   insn=0x00000000002A3C40 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002A3C4C string=0x00000000002A3C50 ""
 *   insn=0x00000000002A3C58 string=0x00000000002A3C70 "h"
 *   insn=0x00000000002A3C5C string=0x00000000002A3C60 "`F"
 *   insn=0x00000000002A3C60 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A3C68 string=0x00000000001FAF50 "0'"
 *   insn=0x00000000002A3C78 string=0x00000000002A3C7C "h"
 *   insn=0x00000000002A3C7C string=0x00000000002A3C80 ")\t"
 *   insn=0x00000000002A3C88 string=0x00000000002A3C8C "iF@"
 *   insn=0x00000000002A3C8C string=0x00000000002A3C90 ""
 *   insn=0x00000000002A3CB4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OrbitControllerComponent::SaveToProtobufMessage(
        Caver::OrbitControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::OrbitControllerComponent *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  int v6; // w9
  __int64 v7; // x9

  v3 = (Caver::Proto::OrbitControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::OrbitControllerComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_QWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 32) |= 1u;
  if ( !v5 )
  {
    v5 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v5);
    *(_QWORD *)(v4 + 16) = v5;
  }
  v6 = *(_DWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 12) = *(_QWORD *)((char *)this + 124);
  *(_DWORD *)(v5 + 20) = *((_DWORD *)this + 33);
  *(_DWORD *)(v5 + 24) = v6 | 7;
  v7 = *((_QWORD *)this + 17);
  *(_DWORD *)(v4 + 32) |= 6u;
  *(_QWORD *)(v4 + 24) = v7;
}

