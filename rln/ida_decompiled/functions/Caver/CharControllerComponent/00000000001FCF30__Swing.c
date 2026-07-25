/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF30
 * Mangled: ._ZN5Caver23CharControllerComponent5SwingEv
 * Demangled: Caver::CharControllerComponent::Swing(void)
 *
 * Callers: 3
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000029E128  Caver::SkellyMonsterControllerComponent::Update(float)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCF38 string=0x00000000001FCF3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::Swing(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent5SwingEv(this);
}

