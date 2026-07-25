/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022CBA8
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::OverlayTargetArrowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *   0x000000000022CBF8  Caver::OverlayTargetArrowComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000022CBB4 string=0x000000000022CBB8 "B"
 *   insn=0x000000000022CBC0 string=0x000000000022CBC4 "7"
 *   insn=0x000000000022CBC4 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000022CBC8 string=0x000000000022CBCC "B"
 *   insn=0x000000000022CBD4 string=0x000000000022CBD8 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTargetArrowComponent::RegisterInterfaces(
        Caver::OverlayTargetArrowComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::OverlayTargetArrowComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::OverlayComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

