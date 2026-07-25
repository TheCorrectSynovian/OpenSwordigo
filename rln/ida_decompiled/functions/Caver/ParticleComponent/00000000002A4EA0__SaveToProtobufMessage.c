/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4EA0
 * Mangled: _ZNK5Caver17ParticleComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ParticleComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6040  Caver::Proto::ParticleComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 17
 *   insn=0x00000000002A4EB8 string=0x00000000002A4EBC """
 *   insn=0x00000000002A4EBC string=0x00000000002A4EC0 ""
 *   insn=0x00000000002A4EC8 string=0x00000000002A4ECC "]D"
 *   insn=0x00000000002A4ECC string=0x00000000001F6040 "0'"
 *   insn=0x00000000002A4ED0 string=0x00000000002A4ED4 "b"
 *   insn=0x00000000002A4EE4 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002A4EE8 string=0x00000000002A4EEC "\t""
 *   insn=0x00000000002A4EF4 string=0x00000000002A4EF8 ")"
 *   insn=0x00000000002A4EF8 string=0x00000000002A4EFC "u"
 *   insn=0x00000000002A4EFC string=0x00000000002A4F00 ""
 *   insn=0x00000000002A4F14 string=0x00000000002A4F18 """
 *   insn=0x00000000002A4F14 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A4F18 string=0x00000000002A4F1C ""
 *   insn=0x00000000002A4F1C string=0x00000000002A4F20 "a"
 *   insn=0x00000000002A4F20 string=0x00000000002A4F24 ""
 *   insn=0x00000000002A4F34 string=0x00000000002A4F38 "i"
 *   insn=0x00000000002A4F38 string=0x00000000002A4F3C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleComponent::SaveToProtobufMessage(
        Caver::ParticleComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ParticleComponent *v3; // x0
  __int64 v4; // x20
  __int64 *v5; // x0
  __int64 result; // x0
  int v7; // w8

  v3 = (Caver::Proto::ParticleComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ParticleComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(__int64 **)(v4 + 16);
  *(_DWORD *)(v4 + 28) |= 1u;
  if ( v5 == &Caver::Proto::ParticleComponent::_default_texture_name_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 16) = v5;
  }
  result = sub_56A6A8(v5);
  v7 = *(_DWORD *)(v4 + 28) | 2;
  *(_DWORD *)(v4 + 24) = *((_DWORD *)this + 32);
  *(_DWORD *)(v4 + 28) = v7;
  return result;
}

