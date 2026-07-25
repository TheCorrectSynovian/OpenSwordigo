/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAC78
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicExplosionComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F9B60  Caver::Proto::MagicExplosionComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FAC80 string=0x00000000002FAC84 "S"
 *   insn=0x00000000002FAC84 string=0x00000000002FAC88 "s"
 *   insn=0x00000000002FAC88 string=0x00000000002FAC8C "`"
 *   insn=0x00000000002FAC8C string=0x00000000002FAC90 "`"
 *   insn=0x00000000002FAC94 string=0x00000000002FAC98 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicExplosionComponent::default_instance(Caver::Proto::MagicExplosionComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::MagicExplosionComponent::default_instance_;
  if ( !Caver::Proto::MagicExplosionComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MagicExplosionComponent::default_instance_;
  }
  return result;
}

