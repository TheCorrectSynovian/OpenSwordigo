/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028B980
 * Mangled: _ZNK5Caver23MagicSpellCastComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MagicSpellCastComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FA5E0  Caver::Proto::MagicSpellCastComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 13
 *   insn=0x000000000028B994 string=0x000000000028B998 "b"
 *   insn=0x000000000028B99C string=0x000000000028B9A0 ""
 *   insn=0x000000000028B9A0 string=0x000000000028B9A4 "s""
 *   insn=0x000000000028B9A8 string=0x000000000028B9AC ""
 *   insn=0x000000000028B9AC string=0x00000000001FA5E0 "0'"
 *   insn=0x000000000028B9B0 string=0x000000000028B9B4 "b"
 *   insn=0x000000000028B9C4 string=0x000000000028B9C8 ""
 *   insn=0x000000000028B9C4 string=0x00000000001F7570 "0'"
 *   insn=0x000000000028B9CC string=0x000000000028B9D0 "\n"
 *   insn=0x000000000028B9D0 string=0x000000000028B9D4 "\t"
 *   insn=0x000000000028B9D4 string=0x000000000028B9D8 "\n"
 *   insn=0x000000000028B9DC string=0x000000000028B9E0 ""
 *   insn=0x000000000028B9E0 string=0x000000000028B9E4 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::MagicSpellCastComponent::SaveToProtobufMessage(
        Caver::MagicSpellCastComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::MagicSpellCastComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8

  v3 = (Caver::Proto::MagicSpellCastComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::MagicSpellCastComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[5];
  result[3] = *((_DWORD *)this + 30);
  result[5] = v5 | 1;
  result[4] = *((_DWORD *)this + 36);
  result[5] = v5 | 3;
  return result;
}

