/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B22A4
 * Mangled: _ZN5Caver23BushControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::BushControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002B22E0  Caver::BushControllerComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B22B0 string=0x00000000002B22B4 "B(B"
 *   insn=0x00000000002B22BC string=0x00000000002B22C0 "x"
 *   insn=0x00000000002B22C0 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BushControllerComponent::RegisterInterfaces(
        Caver::BushControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::BushControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

