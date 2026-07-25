/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7160
 * Mangled: ._ZN5Caver23CharControllerComponent26UpdatePickupObjectPositionEv
 * Demangled: Caver::CharControllerComponent::UpdatePickupObjectPosition(void)
 *
 * Callers: 2
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025DC80  Caver::CharControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000025DB5C  Caver::CharControllerComponent::UpdatePickupObjectPosition(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7168 string=0x00000000001F716C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::UpdatePickupObjectPosition(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent26UpdatePickupObjectPositionEv(this);
}

