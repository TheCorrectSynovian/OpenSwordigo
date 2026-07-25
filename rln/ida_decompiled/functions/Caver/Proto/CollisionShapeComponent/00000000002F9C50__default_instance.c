/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9C50
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponent16default_instanceEv
 * Demangled: Caver::Proto::CollisionShapeComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000200590  Caver::Proto::CollisionShapeComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9C58 string=0x00000000002F9C5C "s"
 *   insn=0x00000000002F9C5C string=0x00000000002F9C60 "s"
 *   insn=0x00000000002F9C60 string=0x00000000002F9C64 "`"
 *   insn=0x00000000002F9C64 string=0x00000000002F9C68 "`"
 *   insn=0x00000000002F9C6C string=0x00000000002F9C70 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::default_instance(Caver::Proto::CollisionShapeComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::CollisionShapeComponent::default_instance_;
  if ( !Caver::Proto::CollisionShapeComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::CollisionShapeComponent::default_instance_;
  }
  return result;
}

