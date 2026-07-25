/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E428
 * Mangled: _ZN5Caver25EntityControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::EntityControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000026E434 string=0x000000000026E438 "B"
 *   insn=0x000000000026E444 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::RegisterInterfaces(
        Caver::EntityControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::EntityControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

