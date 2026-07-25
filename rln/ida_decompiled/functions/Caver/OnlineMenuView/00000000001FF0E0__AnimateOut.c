/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF0E0
 * Mangled: ._ZN5Caver14OnlineMenuView10AnimateOutEv
 * Demangled: Caver::OnlineMenuView::AnimateOut(void)
 *
 * Callers: 1
 *   0x000000000039801C  Caver::OnlineMenuViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000003973D4  Caver::OnlineMenuView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF0E8 string=0x00000000001FF0EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OnlineMenuView::AnimateOut(Caver::OnlineMenuView *this)
{
  JUMPOUT(0x397574);
}

