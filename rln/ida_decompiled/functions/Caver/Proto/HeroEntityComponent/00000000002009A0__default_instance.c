/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002009A0
 * Mangled: ._ZN5Caver5Proto19HeroEntityComponent16default_instanceEv
 * Demangled: Caver::Proto::HeroEntityComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000272194  Caver::HeroEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA2B8  Caver::Proto::HeroEntityComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002009A8 string=0x00000000002009AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::HeroEntityComponent::default_instance(Caver::Proto::HeroEntityComponent *this)
{
  return _ZN5Caver5Proto19HeroEntityComponent16default_instanceEv(this);
}

