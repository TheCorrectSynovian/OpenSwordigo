/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000258ADC
 * Mangled: _ZN5Caver27CharAnimControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::CharAnimControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021D49C  Caver::AnimationControllerComponent::Interface(void)
 *   0x0000000000258C4C  Caver::CharAnimControllerComponent::Interface(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000258AE4 string=0x0000000000258AE8 "b$"
 *   insn=0x0000000000258AE8 string=0x0000000000258AEC "B D"
 *   insn=0x0000000000258AEC string=0x0000000000258C4C "`$"
 *   insn=0x0000000000258AF4 string=0x0000000000258AF8 "jk"
 *   insn=0x0000000000258AF8 string=0x0000000000258AFC "b$"
 *   insn=0x0000000000258AF8 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000258AFC string=0x0000000000258B00 "B"
 *   insn=0x0000000000258B00 string=0x000000000021D49C " &"
 *   insn=0x0000000000258B08 string=0x0000000000258B0C "ek"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharAnimControllerComponent::RegisterInterfaces(
        Caver::CharAnimControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::CharAnimControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::AnimationControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

