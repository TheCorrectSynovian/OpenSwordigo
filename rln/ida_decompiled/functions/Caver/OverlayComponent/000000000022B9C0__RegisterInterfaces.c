/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B9C0
 * Mangled: _ZN5Caver16OverlayComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::OverlayComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000022B9CC string=0x000000000022B9D0 "B"
 *   insn=0x000000000022B9DC string=0x00000000001F38A0 "P'"
 *   insn=0x000000000022B9EC string=0x000000000022B9F0 "8R"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayComponent::RegisterInterfaces(
        Caver::OverlayComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::OverlayComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

