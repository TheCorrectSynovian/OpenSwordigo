/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028D7D4
 * Mangled: _ZN5Caver29ProjectileControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ProjectileControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000271DE4  Caver::HealthComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000028D7E0 string=0x000000000028D7E4 "B4G"
 *   insn=0x000000000028D7EC string=0x000000000028D7F0 ","
 *   insn=0x000000000028D7F0 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileControllerComponent::RegisterInterfaces(
        Caver::ProjectileControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ProjectileControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

