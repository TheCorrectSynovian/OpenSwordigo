/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271E48
 * Mangled: _ZN5Caver23ObjectModifierComponent9InterfaceEv
 * Demangled: Caver::ObjectModifierComponent::Interface(void)
 *
 * Callers: 4
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x0000000000271E48  Caver::ObjectModifierComponent::Interface(void)
 *   0x000000000028C4B0  Caver::ObjectModifierComponent::ImplementsInterface(long)
 *   0x000000000028C4C4  Caver::ObjectModifierComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::ObjectModifierComponent::Interface(
        Caver::ObjectModifierComponent *this))(Caver::ObjectModifierComponent *__hidden this)
{
  return Caver::ObjectModifierComponent::Interface;
}

