/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201930
 * Mangled: ._ZN5Caver15HealthComponent28ApplyFireArmorDamageToObjectEPNS_11SceneObjectE
 * Demangled: Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201938 string=0x000000000020193C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthComponent::ApplyFireArmorDamageToObject(
        Caver::HealthComponent *this,
        Caver::SceneObject *a2)
{
  return _ZN5Caver15HealthComponent28ApplyFireArmorDamageToObjectEPNS_11SceneObjectE(this, a2);
}

