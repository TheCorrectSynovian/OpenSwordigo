/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFC00
 * Mangled: ._ZN5Caver11TargetFrame9SetHealthEf
 * Demangled: Caver::TargetFrame::SetHealth(float)
 *
 * Callers: 2
 *   0x000000000034A6BC  Caver::GameSceneController::UpdateTarget(void)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 1
 *   0x00000000003E3EE4  Caver::TargetFrame::SetHealth(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFC08 string=0x00000000001FFC0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TargetFrame::SetHealth(Caver::TargetFrame *this, float a2)
{
  return _ZN5Caver11TargetFrame9SetHealthEf(this, a2);
}

