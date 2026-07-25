/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201F10
 * Mangled: ._ZN5Caver19GameSceneController15HandleGameEventERKNS_9GameEventE
 * Demangled: Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201F18 string=0x0000000000201F1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneController::HandleGameEvent(
        Caver::GameSceneController *this,
        const Caver::GameEvent *a2)
{
  return _ZN5Caver19GameSceneController15HandleGameEventERKNS_9GameEventE(this, a2);
}

