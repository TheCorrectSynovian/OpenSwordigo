/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261188
 * Mangled: _ZN5Caver23CharControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::CharControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000261190 string=0x0000000000261194 ""$"
 *   insn=0x0000000000261194 string=0x0000000000261198 "B"
 *   insn=0x0000000000261198 string=0x0000000000261698 " $"
 *   insn=0x00000000002611A4 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002611B4 string=0x00000000002611B8 "F|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::RegisterInterfaces(
        Caver::CharControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::CharControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

