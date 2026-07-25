/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8220
 * Mangled: ._ZN5Caver19HeroEntityComponentC2Ev_0
 * Demangled: Caver::HeroEntityComponent::HeroEntityComponent(void)
 *
 * Callers: 1
 *   0x000000000024F804  Caver::HeroEntityComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000271E60  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8228 string=0x00000000001F822C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEntityComponent::HeroEntityComponent(Caver::HeroEntityComponent *this)
{
  return _ZN5Caver19HeroEntityComponentC2Ev(this);
}

