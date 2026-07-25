/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA4F8
 * Mangled: _ZN5Caver5Proto23ParticleObjectComponent16default_instanceEv
 * Demangled: Caver::Proto::ParticleObjectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F4B90  Caver::Proto::ParticleObjectComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA500 string=0x00000000002FA504 "s"
 *   insn=0x00000000002FA504 string=0x00000000002FA508 "sfC"
 *   insn=0x00000000002FA508 string=0x00000000002FA50C "`"
 *   insn=0x00000000002FA50C string=0x00000000002FA510 "`"
 *   insn=0x00000000002FA514 string=0x00000000002FA518 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleObjectComponent::default_instance(Caver::Proto::ParticleObjectComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ParticleObjectComponent::default_instance_;
  if ( !Caver::Proto::ParticleObjectComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ParticleObjectComponent::default_instance_;
  }
  return result;
}

