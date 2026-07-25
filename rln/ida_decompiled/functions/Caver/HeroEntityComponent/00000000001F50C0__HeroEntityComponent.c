/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F50C0
 * Mangled: ._ZN5Caver19HeroEntityComponentC2Ev
 * Demangled: Caver::HeroEntityComponent::HeroEntityComponent(void)
 *
 * Callers: 1
 *   0x0000000000274404  Caver::HeroEntityComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000271E60  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F50C8 string=0x00000000001F50CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEntityComponent::HeroEntityComponent(Caver::HeroEntityComponent *this)
{
  return _ZN5Caver19HeroEntityComponentC2Ev(this);
}

