/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9D0C
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponent16default_instanceEv
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F5590  Caver::Proto::BoneControlledCollisionShapeComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9D14 string=0x00000000002F9D18 "s"
 *   insn=0x00000000002F9D18 string=0x00000000002F9D1C "snD"
 *   insn=0x00000000002F9D1C string=0x00000000002F9D20 "`"
 *   insn=0x00000000002F9D20 string=0x00000000002F9D24 "`"
 *   insn=0x00000000002F9D28 string=0x00000000002F9D2C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::default_instance(
        Caver::Proto::BoneControlledCollisionShapeComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::BoneControlledCollisionShapeComponent::default_instance_;
  if ( !Caver::Proto::BoneControlledCollisionShapeComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::BoneControlledCollisionShapeComponent::default_instance_;
  }
  return result;
}

