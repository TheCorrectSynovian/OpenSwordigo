/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002019A0
 * Mangled: ._ZNK5Caver19EntityInfoComponent18physicalResistanceEv
 * Demangled: Caver::EntityInfoComponent::physicalResistance(void)
 *
 * Callers: 1
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000026F4C4  Caver::EntityInfoComponent::physicalResistance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002019A4 string=0x000000000026F4C4 "@@"
 *   insn=0x00000000002019A8 string=0x00000000002019AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityInfoComponent::physicalResistance(Caver::EntityInfoComponent *this)
{
  return _ZNK5Caver19EntityInfoComponent18physicalResistanceEv(this);
}

