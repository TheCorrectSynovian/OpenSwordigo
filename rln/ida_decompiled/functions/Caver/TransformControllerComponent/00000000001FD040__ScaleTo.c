/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD040
 * Mangled: ._ZN5Caver28TransformControllerComponent7ScaleToEff
 * Demangled: Caver::TransformControllerComponent::ScaleTo(float,float)
 *
 * Callers: 2
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *
 * Callees: 1
 *   0x00000000002411B4  Caver::TransformControllerComponent::ScaleTo(float,float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD044 string=0x00000000002411B4 ""
 *   insn=0x00000000001FD048 string=0x00000000001FD04C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TransformControllerComponent::ScaleTo(
        Caver::TransformControllerComponent *this,
        float a2,
        float a3)
{
  return _ZN5Caver28TransformControllerComponent7ScaleToEff(this, a2, a3);
}

