/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC560
 * Mangled: ._ZN5Caver25EntityControllerComponentC2Ev_0
 * Demangled: Caver::EntityControllerComponent::EntityControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000026E374  Caver::EntityControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000269C68  Caver::EntityControllerComponent::EntityControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC568 string=0x00000000001FC56C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityControllerComponent::EntityControllerComponent(Caver::EntityControllerComponent *this)
{
  return _ZN5Caver25EntityControllerComponentC2Ev(this);
}

