/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAC74
 * Mangled: _ZN5Caver24OnlineController_Android15StartReviewFlowEv
 * Demangled: Caver::OnlineController_Android::StartReviewFlow(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6AB0  Caver::AndroidStartReviewFlow(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAC74 string=0x00000000001F6AB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::StartReviewFlow(Caver::OnlineController_Android *this)
{
  return Caver::AndroidStartReviewFlow(this);
}

