/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201400
 * Mangled: ._ZN5Caver19HeroEntityComponent17InitWithComponentEPKS0_
 * Demangled: Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*)
 *
 * Callers: 1
 *   0x0000000000274404  Caver::HeroEntityComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000272028  Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201408 string=0x000000000020140C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEntityComponent::InitWithComponent(
        Caver::HeroEntityComponent *this,
        const Caver::HeroEntityComponent *a2)
{
  return _ZN5Caver19HeroEntityComponent17InitWithComponentEPKS0_(this, a2);
}

