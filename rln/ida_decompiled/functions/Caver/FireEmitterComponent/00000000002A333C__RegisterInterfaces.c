/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A333C
 * Mangled: _ZN5Caver20FireEmitterComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::FireEmitterComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002A34A0  Caver::FireEmitterComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002A3348 string=0x00000000002A334C "B"
 *   insn=0x00000000002A3354 string=0x00000000002A3358 "RA"
 *   insn=0x00000000002A3358 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FireEmitterComponent::RegisterInterfaces(
        Caver::FireEmitterComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::FireEmitterComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

