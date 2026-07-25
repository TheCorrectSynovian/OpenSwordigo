/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282B68
 * Mangled: _ZN5Caver19FireBreathComponent7PrepareEv
 * Demangled: Caver::FireBreathComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203980  Caver::SpellComponent::Prepare(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FireBreathComponent::Prepare(Caver::FireBreathComponent *this)
{
  return Caver::SpellComponent::Prepare(this);
}

