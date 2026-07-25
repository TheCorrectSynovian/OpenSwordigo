/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9350
 * Mangled: ._ZN5Caver23CharControllerComponent13FinishCastingEv
 * Demangled: Caver::CharControllerComponent::FinishCasting(void)
 *
 * Callers: 1
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Callees: 1
 *   0x00000000002601E0  Caver::CharControllerComponent::FinishCasting(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9358 string=0x00000000001F935C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::FinishCasting(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent13FinishCastingEv(this);
}

