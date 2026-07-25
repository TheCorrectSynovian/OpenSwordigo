/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE4D0
 * Mangled: ._ZN5Caver13ChooseAgeView17UpdateArrowFramesEv
 * Demangled: Caver::ChooseAgeView::UpdateArrowFrames(void)
 *
 * Callers: 2
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000038B894  Caver::ChooseAgeView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x000000000038BA14  Caver::ChooseAgeView::UpdateArrowFrames(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE4D8 string=0x00000000001FE4DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ChooseAgeView::UpdateArrowFrames(Caver::ChooseAgeView *this)
{
  return _ZN5Caver13ChooseAgeView17UpdateArrowFramesEv(this);
}

