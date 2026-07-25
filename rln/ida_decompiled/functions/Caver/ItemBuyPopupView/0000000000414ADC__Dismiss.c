/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000414ADC
 * Mangled: _ZN5Caver16ItemBuyPopupView7DismissEv
 * Demangled: Caver::ItemBuyPopupView::Dismiss(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8750  Caver::GUIView::DismissModalView(Caver::GUIView*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000414AE0 string=0x00000000001F8750 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemBuyPopupView::Dismiss(Caver::ItemBuyPopupView *this)
{
  Caver::GUIView::DismissModalView();
}

