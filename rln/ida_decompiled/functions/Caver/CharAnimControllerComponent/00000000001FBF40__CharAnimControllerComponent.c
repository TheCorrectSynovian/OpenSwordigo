/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF40
 * Mangled: ._ZN5Caver27CharAnimControllerComponentC2Ev
 * Demangled: Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *
 * Callers: 1
 *   0x0000000000258A2C  Caver::CharAnimControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000256100  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF48 string=0x00000000001FBF4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::CharAnimControllerComponent(
        Caver::CharAnimControllerComponent *this)
{
  return _ZN5Caver27CharAnimControllerComponentC2Ev(this);
}

