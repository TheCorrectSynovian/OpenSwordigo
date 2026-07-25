/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B50A8
 * Mangled: _ZN5Caver27ElevatorControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ElevatorControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002B50F8  Caver::ElevatorControllerComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B50B4 string=0x00000000002B50B8 "B"
 *   insn=0x00000000002B50C4 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002B50D4 string=0x00000000002B50D8 "~,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ElevatorControllerComponent::RegisterInterfaces(
        Caver::ElevatorControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ElevatorControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

