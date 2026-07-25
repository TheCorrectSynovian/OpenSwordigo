/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAD88
 * Mangled: _ZN5Caver5Proto29ProjectileControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ProjectileControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000201780  Caver::Proto::ProjectileControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FAD90 string=0x00000000002FAD94 "s"
 *   insn=0x00000000002FAD94 string=0x00000000002FAD98 "s"
 *   insn=0x00000000002FAD98 string=0x00000000002FAD9C "`"
 *   insn=0x00000000002FAD9C string=0x00000000002FADA0 "`"
 *   insn=0x00000000002FADA4 string=0x00000000002FADA8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProjectileControllerComponent::default_instance(
        Caver::Proto::ProjectileControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ProjectileControllerComponent::default_instance_;
  if ( !Caver::Proto::ProjectileControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ProjectileControllerComponent::default_instance_;
  }
  return result;
}

