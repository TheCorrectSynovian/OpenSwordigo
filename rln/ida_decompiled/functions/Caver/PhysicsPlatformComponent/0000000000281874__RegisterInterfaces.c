/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281874
 * Mangled: _ZN5Caver24PhysicsPlatformComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::PhysicsPlatformComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002818B0  Caver::PhysicsPlatformComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000281880 string=0x0000000000281884 "B"
 *   insn=0x0000000000281890 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsPlatformComponent::RegisterInterfaces(
        Caver::PhysicsPlatformComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::PhysicsPlatformComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

