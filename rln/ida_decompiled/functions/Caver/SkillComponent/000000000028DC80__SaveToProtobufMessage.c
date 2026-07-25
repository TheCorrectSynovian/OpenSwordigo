/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028DC80
 * Mangled: _ZNK5Caver14SkillComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SkillComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FBE20  Caver::Proto::SkillComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028DD7C  Caver::SkillComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x000000000028DC9C string=0x000000000028DCA0 "-C"
 *   insn=0x000000000028DCA8 string=0x000000000028DCAC "]"
 *   insn=0x000000000028DCAC string=0x00000000001FBE20 "0'"
 *   insn=0x000000000028DCB0 string=0x000000000028DCB4 "b"
 *   insn=0x000000000028DCC0 string=0x000000000028DCC4 "+"
 *   insn=0x000000000028DCC4 string=0x00000000001F7570 "0'"
 *   insn=0x000000000028DCCC string=0x000000000028DCD0 "hz@"
 *   insn=0x000000000028DCD8 string=0x000000000028DCDC "J"
 *   insn=0x000000000028DCDC string=0x000000000028DCE0 "u"
 *   insn=0x000000000028DCE4 string=0x000000000028DCE8 "("
 *   insn=0x000000000028DCF8 string=0x000000000028DCFC "9"
 *   insn=0x000000000028DCFC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028DD00 string=0x000000000028DD04 ""
 *   insn=0x000000000028DD04 string=0x000000000028DD08 "a"
 *   insn=0x000000000028DD08 string=0x000000000028DD0C ""
 *   insn=0x000000000028DD14 string=0x000000000028DD18 "dr"
 *   insn=0x000000000028DD20 string=0x000000000028DD24 ""
 *   insn=0x000000000028DD30 string=0x000000000028DD34 "+"
 *   insn=0x000000000028DD3C string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000028DD44 string=0x000000000028DD48 "iF@"
 *   insn=0x000000000028DD48 string=0x000000000028DD4C ""
 *   insn=0x000000000028DD6C string=0x000000000028DD70 "P"
 *   insn=0x000000000028DD70 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillComponent::SaveToProtobufMessage(Caver::SkillComponent *this, Caver::Proto::Component *a2)
{
  Caver::Proto::SkillComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w9
  __int64 *v6; // x0
  __int64 v7; // x21
  __int64 v8; // x9

  v3 = (Caver::Proto::SkillComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::SkillComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *(__int64 **)(v4 + 16);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(v4 + 32) = v5 | 3;
  if ( v6 == &Caver::Proto::SkillComponent::_default_cast_object_template_name_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 16) = v6;
  }
  sub_56A6A8(v6);
  v7 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 32) |= 4u;
  if ( !v7 )
  {
    v7 = operator new(0x18u);
    Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v7);
    *(_QWORD *)(v4 + 24) = v7;
  }
  v8 = *((_QWORD *)this + 17);
  *(_DWORD *)(v7 + 20) |= 3u;
  *(_QWORD *)(v7 + 12) = v8;
}

