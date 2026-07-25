/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F39A0
 * Mangled: ._ZN5Caver23CharControllerComponent22StartMovingToDirectionEi
 * Demangled: Caver::CharControllerComponent::StartMovingToDirection(int)
 *
 * Callers: 2
 *   0x000000000029E128  Caver::SkellyMonsterControllerComponent::Update(float)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025E888  Caver::CharControllerComponent::StartMovingToDirection(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F39A8 string=0x00000000001F39AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::StartMovingToDirection(Caver::CharControllerComponent *this, int a2)
{
  return _ZN5Caver23CharControllerComponent22StartMovingToDirectionEi(this, a2);
}

