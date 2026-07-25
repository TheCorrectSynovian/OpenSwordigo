/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022F984
 * Mangled: _ZNK5Caver15PortalComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::PortalComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000203890  Caver::Proto::PortalComponent::default_instance(void)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 21
 *   insn=0x000000000022F998 string=0x000000000022F99C "a>"
 *   insn=0x000000000022F9A0 string=0x000000000022F9A4 "mA"
 *   insn=0x000000000022F9B4 string=0x000000000022F9B8 "b"
 *   insn=0x000000000022F9C8 string=0x00000000001F7570 "0'"
 *   insn=0x000000000022F9D0 string=0x000000000022F9D4 "hz@"
 *   insn=0x000000000022F9DC string=0x000000000022F9E0 "J5E"
 *   insn=0x000000000022F9E0 string=0x000000000022F9E4 "u""
 *   insn=0x000000000022F9E8 string=0x000000000022F9EC "("
 *   insn=0x000000000022FA00 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022FA04 string=0x000000000022FA08 ""
 *   insn=0x000000000022FA08 string=0x000000000022FA0C "a"
 *   insn=0x000000000022FA0C string=0x000000000022FA10 ""
 *   insn=0x000000000022FA18 string=0x000000000022FA1C "#"
 *   insn=0x000000000022FA28 string=0x000000000022FA2C ")QA"
 *   insn=0x000000000022FA2C string=0x000000000022FA30 "uB"
 *   insn=0x000000000022FA30 string=0x000000000022FA34 ""
 *   insn=0x000000000022FA4C string=0x000000000022FA50 ""
 *   insn=0x000000000022FA50 string=0x000000000022FA54 "a"
 *   insn=0x000000000022FA54 string=0x000000000022FA58 ""
 *   insn=0x000000000022FA68 string=0x000000000022FA6C "ibB9"
 *   insn=0x000000000022FA6C string=0x000000000022FA70 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalComponent::SaveToProtobufMessage(
        Caver::PortalComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::PortalComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w9
  __int64 *v6; // x0
  __int64 *v7; // x0
  __int64 result; // x0
  char v9; // w9

  v3 = (Caver::Proto::PortalComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::PortalComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 36);
  v6 = *(__int64 **)(v4 + 16);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(v4 + 36) = v5 | 3;
  if ( v6 == &Caver::Proto::PortalComponent::_default_destination_scene_name_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 16) = v6;
  }
  sub_56A6A8(v6);
  v7 = *(__int64 **)(v4 + 24);
  *(_DWORD *)(v4 + 36) |= 4u;
  if ( v7 == &Caver::Proto::PortalComponent::_default_spawn_point_name_ )
  {
    v7 = (__int64 *)operator new(8u);
    *v7 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 24) = v7;
  }
  result = sub_56A6A8(v7);
  v9 = *((_BYTE *)this + 152);
  *(_DWORD *)(v4 + 36) |= 8u;
  *(_BYTE *)(v4 + 32) = v9;
  return result;
}

