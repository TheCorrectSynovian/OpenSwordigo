/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5DB0
 * Mangled: ._ZN5Caver23CharControllerComponentC2Ev
 * Demangled: Caver::CharControllerComponent::CharControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000026106C  Caver::CharControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5DB8 string=0x00000000001F5DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::CharControllerComponent(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponentC2Ev(this);
}

