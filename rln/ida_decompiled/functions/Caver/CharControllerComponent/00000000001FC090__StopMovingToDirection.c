/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC090
 * Mangled: ._ZN5Caver23CharControllerComponent21StopMovingToDirectionEi
 * Demangled: Caver::CharControllerComponent::StopMovingToDirection(int)
 *
 * Callers: 2
 *   0x000000000029E624  Caver::SkellyMonsterControllerComponent::HandleMessage(int,void *)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025E9AC  Caver::CharControllerComponent::StopMovingToDirection(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC094 string=0x000000000025E9AC "0B"
 *   insn=0x00000000001FC098 string=0x00000000001FC09C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::StopMovingToDirection(Caver::CharControllerComponent *this, int a2)
{
  return _ZN5Caver23CharControllerComponent21StopMovingToDirectionEi(this, a2);
}

