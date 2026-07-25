/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203780
 * Mangled: ._ZN5Caver27CharAnimControllerComponent10StopMovingEv
 * Demangled: Caver::CharAnimControllerComponent::StopMoving(void)
 *
 * Callers: 1
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x00000000002575C8  Caver::CharAnimControllerComponent::StopMoving(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203788 string=0x000000000020378C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::StopMoving(Caver::CharAnimControllerComponent *this)
{
  return _ZN5Caver27CharAnimControllerComponent10StopMovingEv(this);
}

