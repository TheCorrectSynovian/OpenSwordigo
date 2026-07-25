/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201800
 * Mangled: ._ZN5Caver13ManaComponent8GainManaEi
 * Demangled: Caver::ManaComponent::GainMana(int)
 *
 * Callers: 1
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000027AD3C  Caver::ManaComponent::GainMana(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201804 string=0x000000000027AD3C "\t N)"
 *   insn=0x0000000000201808 string=0x000000000020180C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ManaComponent::GainMana(Caver::ManaComponent *this, int a2)
{
  return _ZN5Caver13ManaComponent8GainManaEi(this, a2);
}

