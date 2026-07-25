/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022D0C0
 * Mangled: _ZNK5Caver20OverlayTextComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::OverlayTextComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4530  Caver::OverlayComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F8870  Caver::Proto::OverlayTextComponent::default_instance(void)
 *   0x000000000022D23C  Caver::OverlayTextComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x000000000022D0D8 string=0x00000000001F4530 "P'"
 *   insn=0x000000000022D0DC string=0x000000000022D0E0 "%G"
 *   insn=0x000000000022D0EC string=0x00000000001F8870 "0'"
 *   insn=0x000000000022D0F0 string=0x000000000022D0F4 "b"
 *   insn=0x000000000022D100 string=0x000000000022D104 ")"
 *   insn=0x000000000022D104 string=0x00000000001F7570 "0'"
 *   insn=0x000000000022D114 string=0x000000000022D118 ")\tG"
 *   insn=0x000000000022D118 string=0x000000000022D11C "u"
 *   insn=0x000000000022D11C string=0x000000000022D120 ""
 *   insn=0x000000000022D130 string=0x000000000022D134 "+!"
 *   insn=0x000000000022D134 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022D138 string=0x000000000022D13C ""
 *   insn=0x000000000022D13C string=0x000000000022D140 "a"
 *   insn=0x000000000022D140 string=0x000000000022D144 ""
 *   insn=0x000000000022D14C string=0x000000000022D150 "V"
 *   insn=0x000000000022D158 string=0x000000000022D15C ""
 *   insn=0x000000000022D174 string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000022D17C string=0x000000000022D180 "i>@"
 *   insn=0x000000000022D180 string=0x000000000022D184 ""
 *   insn=0x000000000022D198 string=0x000000000022D19C ")"
 *   insn=0x000000000022D19C string=0x000000000022D1A0 "uB"
 *   insn=0x000000000022D1A0 string=0x000000000022D1A4 ""
 *   insn=0x000000000022D1B4 string=0x000000000022D1B8 "\n!"
 *   insn=0x000000000022D1BC string=0x000000000022D1C0 ""
 *   insn=0x000000000022D1C0 string=0x000000000022D1C4 "a"
 *   insn=0x000000000022D1C4 string=0x000000000022D1C8 ""
 *   insn=0x000000000022D1D0 string=0x000000000022D1D4 "5"
 *   insn=0x000000000022D1DC string=0x000000000022D1E0 ""
 *   insn=0x000000000022D200 string=0x000000000022D204 "iN@"
 *   insn=0x000000000022D204 string=0x000000000022D208 ""
 *   insn=0x000000000022D22C string=0x000000000022D230 " ("
 *   insn=0x000000000022D230 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTextComponent::SaveToProtobufMessage(
        Caver::OverlayTextComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::OverlayTextComponent *v3; // x0
  __int64 v4; // x20
  __int64 *v5; // x0
  __int64 v6; // x21
  int v7; // w8
  __int64 *v8; // x0
  __int64 v9; // x21
  __int64 v10; // x9

  v3 = (Caver::Proto::OverlayTextComponent *)Caver::OverlayComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::OverlayTextComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(__int64 **)(v4 + 16);
  *(_DWORD *)(v4 + 48) |= 1u;
  if ( v5 == &Caver::Proto::OverlayTextComponent::_default_text_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 16) = v5;
  }
  sub_56A6A8(v5);
  v6 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 48) |= 2u;
  if ( !v6 )
  {
    v6 = operator new(0x18u);
    Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v6);
    *(_QWORD *)(v4 + 24) = v6;
  }
  v7 = *(_DWORD *)(v6 + 20) | 3;
  *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 15);
  *(_DWORD *)(v6 + 20) = v7;
  v8 = *(__int64 **)(v4 + 32);
  *(_DWORD *)(v4 + 48) |= 4u;
  if ( v8 == &Caver::Proto::OverlayTextComponent::_default_sprite_name_ )
  {
    v8 = (__int64 *)operator new(8u);
    *v8 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 32) = v8;
  }
  sub_56A6A8(v8);
  v9 = *(_QWORD *)(v4 + 40);
  *(_DWORD *)(v4 + 48) |= 8u;
  if ( !v9 )
  {
    v9 = operator new(0x18u);
    Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v9);
    *(_QWORD *)(v4 + 40) = v9;
  }
  v10 = *((_QWORD *)this + 19);
  *(_DWORD *)(v9 + 20) |= 3u;
  *(_QWORD *)(v9 + 12) = v10;
}

