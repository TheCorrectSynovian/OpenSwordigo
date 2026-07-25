/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD260
 * Mangled: ._ZN5Caver26MonsterControllerComponent16UpdateRoamBoundsEv
 * Demangled: Caver::MonsterControllerComponent::UpdateRoamBounds(void)
 *
 * Callers: 1
 *   0x00000000002969F8  Caver::ChargingMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x0000000000299AA0  Caver::MonsterControllerComponent::UpdateRoamBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD268 string=0x00000000001FD26C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::UpdateRoamBounds(Caver::MonsterControllerComponent *this)
{
  return _ZN5Caver26MonsterControllerComponent16UpdateRoamBoundsEv(this);
}

