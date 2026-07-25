/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213E7C
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::BoneControlledCollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA400  Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 13
 *   insn=0x0000000000213E8C string=0x0000000000213E90 "\"
 *   insn=0x0000000000213E90 string=0x00000000001FA400 "0'"
 *   insn=0x0000000000213E94 string=0x0000000000213E98 ""
 *   insn=0x0000000000213EB0 string=0x0000000000213EB4 "i"
 *   insn=0x0000000000213EB4 string=0x0000000000213EB8 "?"
 *   insn=0x0000000000213EBC string=0x0000000000213EC0 "`"
 *   insn=0x0000000000213EC0 string=0x0000000000213EC4 "h"
 *   insn=0x0000000000213ECC string=0x0000000000213ED0 "@"
 *   insn=0x0000000000213ED0 string=0x0000000000213ED4 ""
 *   insn=0x0000000000213ED4 string=0x0000000000213ED8 ""
 *   insn=0x0000000000213EDC string=0x0000000000213EE0 ""
 *   insn=0x0000000000213EE0 string=0x0000000000213EE4 ""
 *   insn=0x0000000000213EF0 string=0x0000000000213EF4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::LoadFromProtobufMessage(
        Caver::BoneControlledCollisionShapeComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x20
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8

  Caver::CollisionShapeComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::BoneControlledCollisionShapeComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9400);
  v5 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 118) != v5 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 60);
    *((_DWORD *)this + 118) = v5;
    *((_QWORD *)this + 60) = 0;
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return sub_56A6A8((char *)this + 488, *(_QWORD *)(Message + 16));
}

