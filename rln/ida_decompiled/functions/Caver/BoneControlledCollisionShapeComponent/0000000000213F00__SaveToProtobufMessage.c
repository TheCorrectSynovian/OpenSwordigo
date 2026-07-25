/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213F00
 * Mangled: _ZNK5Caver37BoneControlledCollisionShapeComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F53F0  Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F5590  Caver::Proto::BoneControlledCollisionShapeComponent::default_instance(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 13
 *   insn=0x0000000000213F14 string=0x0000000000213F18 "6"
 *   insn=0x0000000000213F18 string=0x00000000001F53F0 "P'"
 *   insn=0x0000000000213F1C string=0x0000000000213F20 ""
 *   insn=0x0000000000213F20 string=0x0000000000213F24 "s""
 *   insn=0x0000000000213F2C string=0x00000000001F5590 "P'"
 *   insn=0x0000000000213F30 string=0x0000000000213F34 "b"
 *   insn=0x0000000000213F44 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000213F58 string=0x0000000000213F5C "J"
 *   insn=0x0000000000213F64 string=0x0000000000213F68 "("
 *   insn=0x0000000000213F7C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000213F80 string=0x0000000000213F84 ""
 *   insn=0x0000000000213F84 string=0x0000000000213F88 "a"
 *   insn=0x0000000000213F88 string=0x0000000000213F8C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage(
        Caver::BoneControlledCollisionShapeComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::BoneControlledCollisionShapeComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w9
  __int64 *v6; // x0

  v3 = (Caver::Proto::BoneControlledCollisionShapeComponent *)Caver::CollisionShapeComponent::SaveToProtobufMessage(
                                                                this,
                                                                a2);
  Caver::Proto::BoneControlledCollisionShapeComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 24);
  v6 = *(__int64 **)(v4 + 16);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)this + 118);
  *(_DWORD *)(v4 + 24) = v5 | 3;
  if ( v6 == &Caver::Proto::BoneControlledCollisionShapeComponent::_default_controlling_bone_name_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 16) = v6;
  }
  return sub_56A6A8(v6, (char *)this + 488);
}

