/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE260
 * Mangled: ._ZN5Caver10PortalView10AnimateOutEv
 * Demangled: Caver::PortalView::AnimateOut(void)
 *
 * Callers: 1
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000042F460  Caver::PortalView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE268 string=0x00000000001FE26C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PortalView::AnimateOut(Caver::PortalView *this)
{
  JUMPOUT(0x42F56C);
}

