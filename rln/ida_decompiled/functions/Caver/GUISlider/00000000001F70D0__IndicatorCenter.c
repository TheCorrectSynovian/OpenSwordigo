/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F70D0
 * Mangled: ._ZN5Caver9GUISlider15IndicatorCenterEv
 * Demangled: Caver::GUISlider::IndicatorCenter(void)
 *
 * Callers: 1
 *   0x000000000038BA14  Caver::ChooseAgeView::UpdateArrowFrames(void)
 *
 * Callees: 1
 *   0x000000000049CF4C  Caver::GUISlider::UpdateSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F70D8 string=0x00000000001F70DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUISlider::IndicatorCenter(Caver::GUISlider *this)
{
  JUMPOUT(0x49D150);
}

