/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B00
 * Mangled: ._ZN5Caver15PortalComponentC2Ev_0
 * Demangled: Caver::PortalComponent::PortalComponent(void)
 *
 * Callers: 1
 *   0x00000000002504F8  Caver::PortalComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000022F3C8  Caver::FontText::~FontText()
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B08 string=0x0000000000200B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PortalComponent::PortalComponent(Caver::PortalComponent *this)
{
  JUMPOUT(0x22F584);
}

