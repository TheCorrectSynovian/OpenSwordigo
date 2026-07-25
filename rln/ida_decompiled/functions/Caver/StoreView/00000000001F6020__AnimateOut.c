/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6020
 * Mangled: ._ZN5Caver9StoreView10AnimateOutEv
 * Demangled: Caver::StoreView::AnimateOut(void)
 *
 * Callers: 1
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6028 string=0x00000000001F602C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::StoreView::AnimateOut(Caver::StoreView *this)
{
  JUMPOUT(0x3EF714);
}

