/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7680
 * Mangled: ._ZN5Caver10PortalView19ScrollNodeToVisibleEPNS_11MapViewNodeEb
 * Demangled: Caver::PortalView::ScrollNodeToVisible(Caver::MapViewNode *,bool)
 *
 * Callers: 1
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000042F460  Caver::PortalView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7688 string=0x00000000001F768C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::PortalView::ScrollNodeToVisible()
{
  JUMPOUT(0x42F918);
}

