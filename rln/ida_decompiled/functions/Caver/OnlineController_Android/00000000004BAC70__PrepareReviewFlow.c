/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAC70
 * Mangled: _ZN5Caver24OnlineController_Android17PrepareReviewFlowEv
 * Demangled: Caver::OnlineController_Android::PrepareReviewFlow(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCDC0  Caver::AndroidPrepareReviewFlow(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAC70 string=0x00000000001FCDC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::PrepareReviewFlow(Caver::OnlineController_Android *this)
{
  return Caver::AndroidPrepareReviewFlow(this);
}

