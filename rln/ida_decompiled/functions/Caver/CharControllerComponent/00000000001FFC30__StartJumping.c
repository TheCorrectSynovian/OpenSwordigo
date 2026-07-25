/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFC30
 * Mangled: ._ZN5Caver23CharControllerComponent12StartJumpingEv
 * Demangled: Caver::CharControllerComponent::StartJumping(void)
 *
 * Callers: 3
 *   0x000000000029DC48  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *   0x000000000029E128  Caver::SkellyMonsterControllerComponent::Update(float)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025E9C8  Caver::CharControllerComponent::StartJumping(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFC38 string=0x00000000001FFC3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::StartJumping(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent12StartJumpingEv(this);
}

