/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC3C0
 * Mangled: ._ZN5Caver19SimpleGlowComponent14AnimateToScaleEff
 * Demangled: Caver::SimpleGlowComponent::AnimateToScale(float,float)
 *
 * Callers: 1
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x00000000002B0CBC  Caver::SimpleGlowComponent::AnimateToScale(float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC3C8 string=0x00000000001FC3CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SimpleGlowComponent::AnimateToScale(Caver::SimpleGlowComponent *this, float a2, float a3)
{
  return _ZN5Caver19SimpleGlowComponent14AnimateToScaleEff(this, a2, a3);
}

