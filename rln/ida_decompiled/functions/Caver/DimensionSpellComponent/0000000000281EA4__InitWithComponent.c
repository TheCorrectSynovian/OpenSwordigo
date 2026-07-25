/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281EA4
 * Mangled: _ZN5Caver23DimensionSpellComponent17InitWithComponentEPKS0_
 * Demangled: Caver::DimensionSpellComponent::InitWithComponent(Caver::DimensionSpellComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000281EA4 string=0x00000000001F9DF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DimensionSpellComponent::InitWithComponent(
        Caver::DimensionSpellComponent *this,
        const Caver::DimensionSpellComponent *a2)
{
  return Caver::SpellComponent::InitWithComponent(this, a2);
}

