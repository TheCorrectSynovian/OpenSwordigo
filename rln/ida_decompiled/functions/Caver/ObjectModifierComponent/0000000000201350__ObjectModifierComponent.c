/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201350
 * Mangled: ._ZN5Caver23ObjectModifierComponentC2Ev
 * Demangled: Caver::ObjectModifierComponent::ObjectModifierComponent(void)
 *
 * Callers: 1
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000028BFE4  Caver::ObjectModifierComponent::ObjectModifierComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201358 string=0x000000000020135C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectModifierComponent::ObjectModifierComponent(Caver::ObjectModifierComponent *this)
{
  return _ZN5Caver23ObjectModifierComponentC2Ev(this);
}

