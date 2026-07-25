/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E2A0
 * Mangled: _ZN5Caver19BackgroundComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::BackgroundComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021E330  Caver::BackgroundComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000021E2A8 string=0x000000000021E2AC ""&"
 *   insn=0x000000000021E2AC string=0x000000000021E2B0 "BlA"
 *   insn=0x000000000021E2B0 string=0x000000000021E330 " &"
 *   insn=0x000000000021E2B8 string=0x000000000021E2BC "yU"
 *   insn=0x000000000021E2BC string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BackgroundComponent::RegisterInterfaces(
        Caver::BackgroundComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::BackgroundComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

