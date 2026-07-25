/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000239BE0
 * Mangled: _ZNK5Caver20SoundEffectComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SoundEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FD6F0  Caver::Proto::SoundEffectComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 18
 *   insn=0x0000000000239BF8 string=0x0000000000239BFC "h%"
 *   insn=0x0000000000239BFC string=0x0000000000239C00 "AE"
 *   insn=0x0000000000239C0C string=0x00000000001FD6F0 "0'"
 *   insn=0x0000000000239C10 string=0x0000000000239C14 "b"
 *   insn=0x0000000000239C20 string=0x0000000000239C24 "S"
 *   insn=0x0000000000239C24 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000239C28 string=0x0000000000239C2C "i%"
 *   insn=0x0000000000239C34 string=0x0000000000239C38 ")"
 *   insn=0x0000000000239C38 string=0x0000000000239C3C "u"
 *   insn=0x0000000000239C3C string=0x0000000000239C40 ""
 *   insn=0x0000000000239C50 string=0x0000000000239C54 "c"
 *   insn=0x0000000000239C54 string=0x0000000000239C58 "h%"
 *   insn=0x0000000000239C54 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000239C58 string=0x0000000000239C5C ""
 *   insn=0x0000000000239C5C string=0x0000000000239C60 "a"
 *   insn=0x0000000000239C60 string=0x0000000000239C64 ""
 *   insn=0x0000000000239C74 string=0x0000000000239C78 "iB@"
 *   insn=0x0000000000239C78 string=0x0000000000239C7C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectComponent::SaveToProtobufMessage(
        Caver::SoundEffectComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SoundEffectComponent *v3; // x0
  __int64 v4; // x20
  __int64 *v5; // x0
  __int64 result; // x0
  __int64 v7; // x9

  v3 = (Caver::Proto::SoundEffectComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::SoundEffectComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(__int64 **)(v4 + 16);
  *(_DWORD *)(v4 + 32) |= 1u;
  if ( v5 == &Caver::Proto::SoundEffectComponent::_default_name_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 16) = v5;
  }
  result = sub_56A6A8(v5);
  v7 = *((_QWORD *)this + 16);
  *(_DWORD *)(v4 + 32) |= 6u;
  *(_QWORD *)(v4 + 24) = v7;
  return result;
}

