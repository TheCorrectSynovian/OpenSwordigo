/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA3FC
 * Mangled: _ZN5Caver5Proto17ParticleComponent16default_instanceEv
 * Demangled: Caver::Proto::ParticleComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F6040  Caver::Proto::ParticleComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA404 string=0x00000000002FA408 "s"
 *   insn=0x00000000002FA408 string=0x00000000002FA40C "s"
 *   insn=0x00000000002FA40C string=0x00000000002FA410 "`"
 *   insn=0x00000000002FA410 string=0x00000000002FA414 "`"
 *   insn=0x00000000002FA418 string=0x00000000002FA41C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::default_instance(Caver::Proto::ParticleComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ParticleComponent::default_instance_;
  if ( !Caver::Proto::ParticleComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ParticleComponent::default_instance_;
  }
  return result;
}

