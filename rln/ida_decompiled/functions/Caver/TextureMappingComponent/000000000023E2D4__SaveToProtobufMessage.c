/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023E2D4
 * Mangled: _ZNK5Caver23TextureMappingComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::TextureMappingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FAA50  Caver::Proto::TextureMappingComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023E3D0  Caver::TextureMappingComponent::Prepare(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x000000000023E2E8 string=0x000000000023E2EC ""
 *   insn=0x000000000023E2EC string=0x000000000023E2F0 "H%"
 *   insn=0x000000000023E2F0 string=0x000000000023E2F4 ""
 *   insn=0x000000000023E300 string=0x00000000001FAA50 "0'"
 *   insn=0x000000000023E304 string=0x000000000023E308 "b"
 *   insn=0x000000000023E318 string=0x00000000001F7570 "0'"
 *   insn=0x000000000023E31C string=0x000000000023E320 "I%"
 *   insn=0x000000000023E328 string=0x000000000023E32C ")-F"
 *   insn=0x000000000023E32C string=0x000000000023E330 "u"
 *   insn=0x000000000023E330 string=0x000000000023E334 ""
 *   insn=0x000000000023E348 string=0x000000000023E34C "(%"
 *   insn=0x000000000023E348 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023E34C string=0x000000000023E350 ""
 *   insn=0x000000000023E350 string=0x000000000023E354 "a"
 *   insn=0x000000000023E354 string=0x000000000023E358 ""
 *   insn=0x000000000023E364 string=0x000000000023E368 "h"
 *   insn=0x000000000023E374 string=0x000000000023E378 "("
 *   insn=0x000000000023E38C string=0x000000000023E390 "P"
 *   insn=0x000000000023E390 string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000023E398 string=0x000000000023E39C "iBH"
 *   insn=0x000000000023E39C string=0x000000000023E3A0 ""
 *   insn=0x000000000023E3C4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023E3C8 string=0x000000000023E3CC ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextureMappingComponent::SaveToProtobufMessage(
        Caver::TextureMappingComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::TextureMappingComponent *v3; // x0
  __int64 v4; // x20
  __int64 *v5; // x0
  int v6; // w9
  __int64 v7; // x21
  __int64 v8; // x9

  v3 = (Caver::Proto::TextureMappingComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::TextureMappingComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(__int64 **)(v4 + 16);
  *(_DWORD *)(v4 + 40) |= 1u;
  if ( v5 == &Caver::Proto::TextureMappingComponent::_default_texture_name_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 16) = v5;
  }
  sub_56A6A8(v5);
  v6 = *(_DWORD *)(v4 + 40);
  v7 = *(_QWORD *)(v4 + 32);
  *(_DWORD *)(v4 + 24) = *((_DWORD *)this + 32);
  *(_DWORD *)(v4 + 40) = v6 | 6;
  if ( !v7 )
  {
    v7 = operator new(0x18u);
    Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v7);
    *(_QWORD *)(v4 + 32) = v7;
  }
  v8 = *(_QWORD *)((char *)this + 132);
  *(_DWORD *)(v7 + 20) |= 3u;
  *(_QWORD *)(v7 + 12) = v8;
}

