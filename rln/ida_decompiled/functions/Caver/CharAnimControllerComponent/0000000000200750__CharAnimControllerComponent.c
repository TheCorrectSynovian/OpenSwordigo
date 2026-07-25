/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200750
 * Mangled: ._ZN5Caver27CharAnimControllerComponentC2Ev_0
 * Demangled: Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000024FA44  Caver::CharAnimControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000256100  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200758 string=0x000000000020075C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::CharAnimControllerComponent(
        Caver::CharAnimControllerComponent *this)
{
  return _ZN5Caver27CharAnimControllerComponentC2Ev(this);
}

