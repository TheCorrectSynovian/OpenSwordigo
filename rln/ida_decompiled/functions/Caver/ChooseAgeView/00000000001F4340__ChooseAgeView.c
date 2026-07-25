/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4340
 * Mangled: ._ZN5Caver13ChooseAgeViewC2Ev
 * Demangled: Caver::ChooseAgeView::ChooseAgeView(void)
 *
 * Callers: 1
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Callees: 1
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4348 string=0x00000000001F434C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ChooseAgeView::ChooseAgeView(Caver::ChooseAgeView *this)
{
  return _ZN5Caver13ChooseAgeViewC2Ev(this);
}

