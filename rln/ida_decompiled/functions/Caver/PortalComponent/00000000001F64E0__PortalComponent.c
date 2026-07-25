/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F64E0
 * Mangled: ._ZN5Caver15PortalComponentC2Ev
 * Demangled: Caver::PortalComponent::PortalComponent(void)
 *
 * Callers: 1
 *   0x00000000002311A8  Caver::PortalComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000022F3C8  Caver::FontText::~FontText()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F64E8 string=0x00000000001F64EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PortalComponent::PortalComponent(Caver::PortalComponent *this)
{
  JUMPOUT(0x22F584);
}

