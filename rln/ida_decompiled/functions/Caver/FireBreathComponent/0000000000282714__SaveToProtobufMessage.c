/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282714
 * Mangled: _ZNK5Caver19FireBreathComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::FireBreathComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4E00  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FD3B0  Caver::Proto::FireBreathComponent::default_instance(void)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x00000000002827CC  Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::identifier(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000028272C string=0x0000000000282730 "(#"
 *   insn=0x000000000028272C string=0x00000000001F4E00 "P'"
 *   insn=0x0000000000282730 string=0x0000000000282734 "5A"
 *   insn=0x0000000000282740 string=0x00000000001FD3B0 "0'"
 *   insn=0x0000000000282744 string=0x0000000000282748 "b"
 *   insn=0x0000000000282758 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000282760 string=0x0000000000282764 "i"
 *   insn=0x0000000000282768 string=0x000000000028276C "\n"
 *   insn=0x0000000000282774 string=0x0000000000282778 "i"
 *   insn=0x0000000000282778 string=0x000000000028277C "\t"
 *   insn=0x0000000000282788 string=0x00000000002827A0 "`"
 *   insn=0x0000000000282790 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000282798 string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002827B0 string=0x00000000002827B4 ";"
 *   insn=0x00000000002827C0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002827C4 string=0x00000000002827C8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FireBreathComponent::SaveToProtobufMessage(
        Caver::FireBreathComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::FireBreathComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w8
  Caver::Proto::FloatColor *v7; // x21
  int v8; // w9

  v3 = (Caver::Proto::FireBreathComponent *)Caver::SpellComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::FireBreathComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 32);
  v7 = *(Caver::Proto::FloatColor **)(v5 + 24);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 50);
  *(_DWORD *)(v5 + 32) = v6 | 1;
  v8 = *((_DWORD *)this + 56);
  *(_DWORD *)(v5 + 32) = v6 | 7;
  *(_DWORD *)(v5 + 16) = v8;
  if ( !v7 )
  {
    v7 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v7);
    *(_QWORD *)(v5 + 24) = v7;
  }
  return Caver::FloatColorToProtobufMessage((Caver::FireBreathComponent *)((char *)this + 240), v7, v4);
}

