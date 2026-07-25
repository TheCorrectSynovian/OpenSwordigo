/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF810
 * Mangled: _ZNK5Caver19SimpleGlowComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SimpleGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FE0B0  Caver::GlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001FF120  Caver::Proto::SimpleGlowComponent::default_instance(void)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x00000000002AF920  Caver::SimpleGlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x00000000002AF824 string=0x00000000002AF828 "":"
 *   insn=0x00000000002AF82C string=0x00000000002AF830 "aC"
 *   insn=0x00000000002AF838 string=0x00000000002AF83C "9>"
 *   insn=0x00000000002AF840 string=0x00000000002AF844 "b"
 *   insn=0x00000000002AF850 string=0x00000000002AF854 "G"
 *   insn=0x00000000002AF854 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002AF860 string=0x00000000002AF864 ""
 *   insn=0x00000000002AF86C string=0x00000000002AF884 "`"
 *   insn=0x00000000002AF870 string=0x00000000002AF874 "["
 *   insn=0x00000000002AF874 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AF87C string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002AF894 string=0x00000000002AF898 "\t"
 *   insn=0x00000000002AF89C string=0x00000000002AF8A0 "iBK"
 *   insn=0x00000000002AF8A0 string=0x00000000002AF8A4 ""
 *   insn=0x00000000002AF8A8 string=0x00000000002AF8AC "i"
 *   insn=0x00000000002AF8BC string=0x00000000002AF8C0 "H"
 *   insn=0x00000000002AF8C8 string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000002AF8D0 string=0x00000000002AF8D4 "i"
 *   insn=0x00000000002AF8D4 string=0x00000000002AF8D8 ""
 *   insn=0x00000000002AF8E4 string=0x00000000002AF8E8 "i"
 *   insn=0x00000000002AF8E8 string=0x00000000002AF8EC ""
 *   insn=0x00000000002AF910 string=0x00000000002AF914 "g"
 *   insn=0x00000000002AF914 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SimpleGlowComponent::SaveToProtobufMessage(
        Caver::SimpleGlowComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SimpleGlowComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  Caver::Proto::FloatColor *v6; // x21
  int v7; // w8
  __int64 v8; // x21
  int v9; // w9
  int v10; // w8
  __int64 v11; // x9

  v3 = (Caver::Proto::SimpleGlowComponent *)Caver::GlowComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::SimpleGlowComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(Caver::Proto::FloatColor **)(v5 + 16);
  *(_DWORD *)(v5 + 56) |= 1u;
  if ( !v6 )
  {
    v6 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v6);
    *(_QWORD *)(v5 + 16) = v6;
  }
  Caver::FloatColorToProtobufMessage((Caver::SimpleGlowComponent *)((char *)this + 164), v6, v4);
  v7 = *(_DWORD *)(v5 + 56);
  v8 = *(_QWORD *)(v5 + 40);
  *(_DWORD *)(v5 + 56) = v7 | 2;
  *(_QWORD *)(v5 + 24) = *(_QWORD *)((char *)this + 180);
  v9 = *((_DWORD *)this + 49);
  *(_DWORD *)(v5 + 56) = v7 | 0x1E;
  *(_DWORD *)(v5 + 32) = v9;
  if ( !v8 )
  {
    v8 = operator new(0x18u);
    Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v8);
    *(_QWORD *)(v5 + 40) = v8;
  }
  v10 = *(_DWORD *)(v8 + 20) | 3;
  *(_QWORD *)(v8 + 12) = *(_QWORD *)((char *)this + 188);
  *(_DWORD *)(v8 + 20) = v10;
  v11 = *(_QWORD *)((char *)this + 204);
  *(_DWORD *)(v5 + 56) |= 0x60u;
  *(_QWORD *)(v5 + 48) = v11;
}

