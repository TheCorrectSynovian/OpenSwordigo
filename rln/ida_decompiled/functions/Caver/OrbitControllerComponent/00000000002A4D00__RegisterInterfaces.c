/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4D00
 * Mangled: _ZN5Caver24OrbitControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::OrbitControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002A4D3C  Caver::OrbitControllerComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002A4D0C string=0x00000000002A4D10 "B"
 *   insn=0x00000000002A4D1C string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002A4D2C string=0x00000000002A4D30 "hm"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrbitControllerComponent::RegisterInterfaces(
        Caver::OrbitControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::OrbitControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

