/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241DD4
 * Mangled: _ZN5Caver28TransformControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::TransformControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000241E78  Caver::TransformControllerComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000241DDC string=0x0000000000241DE0 ""%"
 *   insn=0x0000000000241DE0 string=0x0000000000241DE4 "B0E"
 *   insn=0x0000000000241DE4 string=0x0000000000241E78 " %"
 *   insn=0x0000000000241DF0 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000241E00 string=0x0000000000241E04 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TransformControllerComponent::RegisterInterfaces(
        Caver::TransformControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::TransformControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

