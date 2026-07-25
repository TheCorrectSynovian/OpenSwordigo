/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6850
 * Mangled: ._ZN5Caver23ObjectModifierComponent13ApplyModifierENS_18ObjectModifierTypeEff
 * Demangled: Caver::ObjectModifierComponent::ApplyModifier(Caver::ObjectModifierType,float,float)
 *
 * Callers: 1
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000028C260  Caver::ObjectModifierComponent::ApplyModifier(Caver::ObjectModifierType,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6858 string=0x00000000001F685C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ObjectModifierComponent::ApplyModifier()
{
  return _ZN5Caver23ObjectModifierComponent13ApplyModifierENS_18ObjectModifierTypeEff();
}

