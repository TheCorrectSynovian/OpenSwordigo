/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA2C0
 * Mangled: ._ZN5Caver23BushControllerComponentC2Ev
 * Demangled: Caver::BushControllerComponent::BushControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002B2210  Caver::BushControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002B1320  Caver::BushControllerComponent::BushControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA2C8 string=0x00000000001FA2CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BushControllerComponent::BushControllerComponent(Caver::BushControllerComponent *this)
{
  return _ZN5Caver23BushControllerComponentC2Ev(this);
}

