/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA580
 * Mangled: _ZN5Caver5Proto22ParticleFieldComponent16default_instanceEv
 * Demangled: Caver::Proto::ParticleFieldComponent::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA588 string=0x00000000002FA58C "S"
 *   insn=0x00000000002FA58C string=0x00000000002FA590 "szD"
 *   insn=0x00000000002FA590 string=0x00000000002FA594 "`"
 *   insn=0x00000000002FA594 string=0x00000000002FA598 "`"
 *   insn=0x00000000002FA59C string=0x00000000002FA5A0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleFieldComponent::default_instance(Caver::Proto::ParticleFieldComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ParticleFieldComponent::default_instance_;
  if ( !Caver::Proto::ParticleFieldComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ParticleFieldComponent::default_instance_;
  }
  return result;
}

