/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B37D8
 * Mangled: _ZN5Caver23DoorControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::DoorControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002B3814  Caver::DoorControllerComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B37E4 string=0x00000000002B37E8 "B,D"
 *   insn=0x00000000002B37F0 string=0x00000000002B37F4 "+"
 *   insn=0x00000000002B37F4 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DoorControllerComponent::RegisterInterfaces(
        Caver::DoorControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::DoorControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

