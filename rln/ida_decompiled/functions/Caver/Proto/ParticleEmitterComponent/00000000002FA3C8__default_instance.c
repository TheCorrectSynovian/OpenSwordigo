/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA3C8
 * Mangled: _ZN5Caver5Proto24ParticleEmitterComponent16default_instanceEv
 * Demangled: Caver::Proto::ParticleEmitterComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000201590  Caver::Proto::ParticleEmitterComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA3D0 string=0x00000000002FA3D4 "S"
 *   insn=0x00000000002FA3D4 string=0x00000000002FA3D8 "s"
 *   insn=0x00000000002FA3D8 string=0x00000000002FA3DC "`"
 *   insn=0x00000000002FA3DC string=0x00000000002FA3E0 "`"
 *   insn=0x00000000002FA3E0 string=0x00000000002FA3E4 "!"
 *   insn=0x00000000002FA3E4 string=0x00000000002FA3E8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitterComponent::default_instance(
        Caver::Proto::ParticleEmitterComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ParticleEmitterComponent::default_instance_;
  if ( !Caver::Proto::ParticleEmitterComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ParticleEmitterComponent::default_instance_;
  }
  return result;
}

