/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8390
 * Mangled: ._ZN5Caver19SimpleGlowComponentC2Ev
 * Demangled: Caver::SimpleGlowComponent::SimpleGlowComponent(void)
 *
 * Callers: 2
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x0000000000250378  Caver::SimpleGlowComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002AF60C  Caver::ShatterComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8398 string=0x00000000001F839C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SimpleGlowComponent::SimpleGlowComponent(Caver::SimpleGlowComponent *this)
{
  JUMPOUT(0x2AF664);
}

