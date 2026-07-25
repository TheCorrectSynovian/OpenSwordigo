/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028598C
 * Mangled: _ZNK5Caver18MagicBombComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MagicBombComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4E00  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FB7F0  Caver::Proto::MagicBombComponent::default_instance(void)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x0000000000285A2C  Caver::MagicBombComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000002859A4 string=0x00000000002859A8 "#"
 *   insn=0x00000000002859A4 string=0x00000000001F4E00 "P'"
 *   insn=0x00000000002859A8 string=0x00000000002859AC ""
 *   insn=0x00000000002859B8 string=0x00000000001FB7F0 "0'"
 *   insn=0x00000000002859BC string=0x00000000002859C0 "b"
 *   insn=0x00000000002859D0 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002859DC string=0x00000000002859E0 ""
 *   insn=0x00000000002859E8 string=0x0000000000285A00 "`B"
 *   insn=0x00000000002859F0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002859F4 string=0x00000000002859F8 "J"
 *   insn=0x00000000002859F8 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000285A1C string=0x0000000000285A20 "$"
 *   insn=0x0000000000285A20 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBombComponent::SaveToProtobufMessage(
        Caver::MagicBombComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::MagicBombComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x21
  Caver::Proto::FloatColor *v6; // x20

  v3 = (Caver::Proto::MagicBombComponent *)Caver::SpellComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::MagicBombComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(Caver::Proto::FloatColor **)(v5 + 16);
  *(_DWORD *)(v5 + 24) |= 1u;
  if ( !v6 )
  {
    v6 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v6);
    *(_QWORD *)(v5 + 16) = v6;
  }
  return Caver::FloatColorToProtobufMessage((Caver::MagicBombComponent *)((char *)this + 208), v6, v4);
}

