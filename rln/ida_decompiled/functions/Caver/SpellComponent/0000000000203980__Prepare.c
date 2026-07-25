/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203980
 * Mangled: ._ZN5Caver14SpellComponent7PrepareEv
 * Demangled: Caver::SpellComponent::Prepare(void)
 *
 * Callers: 4
 *   0x0000000000282B68  Caver::FireBreathComponent::Prepare(void)
 *   0x00000000002846CC  Caver::MagicBoltComponent::Prepare(void)
 *   0x0000000000285DC0  Caver::MagicBombComponent::Prepare(void)
 *   0x0000000000289A6C  Caver::MagicHookshotComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000290018  Caver::SpellComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203988 string=0x000000000020398C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::Prepare(Caver::SpellComponent *this)
{
  return _ZN5Caver14SpellComponent7PrepareEv(this);
}

