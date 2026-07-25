/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000240668
 * Mangled: _ZN5Caver18TransformComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::TransformComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000240670 string=0x0000000000240674 ""%"
 *   insn=0x0000000000240674 string=0x0000000000240678 "B"
 *   insn=0x0000000000240684 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TransformComponent::RegisterInterfaces(
        Caver::TransformComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::TransformComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

