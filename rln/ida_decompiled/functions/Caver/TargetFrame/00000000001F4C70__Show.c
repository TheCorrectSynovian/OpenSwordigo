/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C70
 * Mangled: ._ZN5Caver11TargetFrame4ShowEv
 * Demangled: Caver::TargetFrame::Show(void)
 *
 * Callers: 1
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 1
 *   0x00000000003E42F0  Caver::TargetFrame::Show(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C78 string=0x00000000001F4C7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TargetFrame::Show(Caver::TargetFrame *this)
{
  return _ZN5Caver11TargetFrame4ShowEv(this);
}

