/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200450
 * Mangled: ._ZN5Caver11TargetFrame4HideEv
 * Demangled: Caver::TargetFrame::Hide(void)
 *
 * Callers: 1
 *   0x000000000034A6BC  Caver::GameSceneController::UpdateTarget(void)
 *
 * Callees: 1
 *   0x00000000003E4370  Caver::TargetFrame::Hide(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200458 string=0x000000000020045C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TargetFrame::Hide(Caver::TargetFrame *this)
{
  return _ZN5Caver11TargetFrame4HideEv(this);
}

