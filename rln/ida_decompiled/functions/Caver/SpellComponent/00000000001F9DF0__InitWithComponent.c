/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9DF0
 * Mangled: ._ZN5Caver14SpellComponent17InitWithComponentEPKS0_
 * Demangled: Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Callers: 10
 *   0x0000000000281EA4  Caver::DimensionSpellComponent::InitWithComponent(Caver::DimensionSpellComponent const*)
 *   0x0000000000281F14  Caver::SpellComponent::~SpellComponent()
 *   0x0000000000282584  Caver::FireBreathComponent::InitWithComponent(Caver::FireBreathComponent const*)
 *   0x0000000000282FD8  Caver::FireBreathComponent::Clone(void)
 *   0x0000000000283E70  Caver::MagicBoltComponent::InitWithComponent(Caver::MagicBoltComponent const*)
 *   0x000000000028570C  Caver::MagicBoltComponent::Clone(void)
 *   0x00000000002858C8  Caver::MagicBombComponent::InitWithComponent(Caver::MagicBombComponent const*)
 *   0x0000000000286774  Caver::MagicBombComponent::Clone(void)
 *   0x000000000028940C  Caver::MagicHookshotComponent::InitWithComponent(Caver::MagicHookshotComponent const*)
 *   0x000000000028B41C  Caver::MagicHookshotComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000028F9C4  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9DF8 string=0x00000000001F9DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::InitWithComponent(
        Caver::SpellComponent *this,
        const Caver::SpellComponent *a2)
{
  return _ZN5Caver14SpellComponent17InitWithComponentEPKS0_(this, a2);
}

