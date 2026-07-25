/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F37D0
 * Mangled: ._ZN5Caver19GameSceneController12UpdateTargetEv
 * Demangled: Caver::GameSceneController::UpdateTarget(void)
 *
 * Callers: 1
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Callees: 1
 *   0x000000000034A6BC  Caver::GameSceneController::UpdateTarget(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F37D8 string=0x00000000001F37DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneController::UpdateTarget(Caver::GameSceneController *this)
{
  return _ZN5Caver19GameSceneController12UpdateTargetEv(this);
}

