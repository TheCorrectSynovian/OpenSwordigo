/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7190
 * Mangled: ._ZN5Caver5Proto15PortalComponent10SharedDtorEv
 * Demangled: Caver::Proto::PortalComponent::SharedDtor(void)
 *
 * Callers: 2
 *   0x000000000032CCF8  Caver::Proto::PortalComponent::PortalComponent(Caver::Proto::PortalComponent const&)
 *   0x000000000032D090  Caver::Proto::PortalComponent::~PortalComponent()
 *
 * Callees: 1
 *   0x000000000032CCF8  Caver::Proto::PortalComponent::PortalComponent(Caver::Proto::PortalComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7198 string=0x00000000001F719C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PortalComponent::SharedDtor(Caver::Proto::PortalComponent *this)
{
  JUMPOUT(0x32CF4C);
}

