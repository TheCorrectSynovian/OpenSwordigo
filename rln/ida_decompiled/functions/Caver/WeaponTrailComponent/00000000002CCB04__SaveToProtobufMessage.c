/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCB04
 * Mangled: _ZNK5Caver20WeaponTrailComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::WeaponTrailComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7360  Caver::Proto::WeaponTrailComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x00000000002CCBA4  Caver::WeaponTrailComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000002CCB20 string=0x00000000002CCB24 ""
 *   insn=0x00000000002CCB30 string=0x00000000001F7360 "0'"
 *   insn=0x00000000002CCB34 string=0x00000000002CCB38 "b"
 *   insn=0x00000000002CCB48 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002CCB54 string=0x00000000002CCB58 ""
 *   insn=0x00000000002CCB60 string=0x00000000002CCB78 "`"
 *   insn=0x00000000002CCB68 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CCB70 string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002CCB88 string=0x00000000002CCB8C "E"
 *   insn=0x00000000002CCB98 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CCB9C string=0x00000000002CCBA0 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrailComponent::SaveToProtobufMessage(
        Caver::WeaponTrailComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::WeaponTrailComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x21
  Caver::Proto::FloatColor *v6; // x20

  v3 = (Caver::Proto::WeaponTrailComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::WeaponTrailComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(Caver::Proto::FloatColor **)(v5 + 16);
  *(_DWORD *)(v5 + 24) |= 1u;
  if ( !v6 )
  {
    v6 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v6);
    *(_QWORD *)(v5 + 16) = v6;
  }
  return Caver::FloatColorToProtobufMessage((Caver::WeaponTrailComponent *)((char *)this + 176), v6, v4);
}

