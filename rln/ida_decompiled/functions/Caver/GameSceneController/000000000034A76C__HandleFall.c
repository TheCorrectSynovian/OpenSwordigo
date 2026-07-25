/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034A76C
 * Mangled: _ZN5Caver19GameSceneController10HandleFallEv
 * Demangled: Caver::GameSceneController::HandleFall(void)
 *
 * Callers: 1
 *   0x0000000000203560  Caver::GameSceneController::HandleFall(void)
 *
 * Callees: 1
 *   0x00000000001FF380  Caver::HeroEntityComponent::ResetToSafePosition(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameSceneController::HandleFall(Caver::GameSceneController *this)
{
  Caver::HeroEntityComponent *v1; // x8

  v1 = (Caver::HeroEntityComponent *)*((_QWORD *)this + 29);
  *((_BYTE *)this + 376) = 0;
  Caver::HeroEntityComponent::ResetToSafePosition(v1);
}

