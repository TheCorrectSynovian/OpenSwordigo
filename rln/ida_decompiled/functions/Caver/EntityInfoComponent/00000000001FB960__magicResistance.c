/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB960
 * Mangled: ._ZNK5Caver19EntityInfoComponent15magicResistanceEv
 * Demangled: Caver::EntityInfoComponent::magicResistance(void)
 *
 * Callers: 1
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000026F4AC  Caver::EntityInfoComponent::magicResistance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB964 string=0x000000000026F4AC "@@"
 *   insn=0x00000000001FB968 string=0x00000000001FB96C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityInfoComponent::magicResistance(Caver::EntityInfoComponent *this)
{
  return _ZNK5Caver19EntityInfoComponent15magicResistanceEv(this);
}

