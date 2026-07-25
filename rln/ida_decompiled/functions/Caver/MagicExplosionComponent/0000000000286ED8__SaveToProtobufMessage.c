/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286ED8
 * Mangled: _ZNK5Caver23MagicExplosionComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MagicExplosionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F9B60  Caver::Proto::MagicExplosionComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x0000000000286FA4  Caver::MagicExplosionComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x0000000000286EF0 string=0x0000000000286EF4 "#"
 *   insn=0x0000000000286EF4 string=0x0000000000286EF8 ""
 *   insn=0x0000000000286F04 string=0x00000000001F9B60 "0'"
 *   insn=0x0000000000286F08 string=0x0000000000286F0C "b"
 *   insn=0x0000000000286F1C string=0x00000000001F7570 "0'"
 *   insn=0x0000000000286F20 string=0x0000000000286F24 "hz@"
 *   insn=0x0000000000286F30 string=0x0000000000286F34 "("
 *   insn=0x0000000000286F3C string=0x0000000000286F54 "`"
 *   insn=0x0000000000286F44 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000286F4C string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000286F58 string=0x0000000000286F5C "Q"
 *   insn=0x0000000000286F60 string=0x0000000000286F64 "ir@"
 *   insn=0x0000000000286F64 string=0x0000000000286F68 "\n"
 *   insn=0x0000000000286F70 string=0x0000000000286F74 "i"
 *   insn=0x0000000000286F74 string=0x0000000000286F78 "\t"
 *   insn=0x0000000000286F98 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000286F9C string=0x0000000000286FA0 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicExplosionComponent::SaveToProtobufMessage(
        Caver::MagicExplosionComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::MagicExplosionComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w9
  Caver::Proto::FloatColor *v7; // x21
  __int64 result; // x0
  int v9; // w8

  v3 = (Caver::Proto::MagicExplosionComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::MagicExplosionComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 36);
  v7 = *(Caver::Proto::FloatColor **)(v5 + 16);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(v5 + 36) = v6 | 3;
  if ( !v7 )
  {
    v7 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v7);
    *(_QWORD *)(v5 + 16) = v7;
  }
  result = Caver::FloatColorToProtobufMessage((Caver::MagicExplosionComponent *)((char *)this + 176), v7, v4);
  v9 = *(_DWORD *)(v5 + 36);
  *(_QWORD *)(v5 + 24) = *((_QWORD *)this + 28);
  *(_DWORD *)(v5 + 36) = v9 | 0xC;
  *(_DWORD *)(v5 + 32) = *((_DWORD *)this + 36);
  *(_DWORD *)(v5 + 36) = v9 | 0x1C;
  return result;
}

