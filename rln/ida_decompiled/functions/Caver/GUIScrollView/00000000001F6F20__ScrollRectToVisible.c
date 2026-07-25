/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6F20
 * Mangled: ._ZN5Caver13GUIScrollView19ScrollRectToVisibleERKNS_9RectangleEb
 * Demangled: Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *
 * Callers: 7
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000041EF8C  Caver::MapMenuPage::CenterAtNode(Caver::MapViewNode *,bool)
 *   0x000000000041F0FC  Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *   0x000000000041F7D4  Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *   0x000000000042F014  Caver::PortalView::LayoutSubviews(void)
 *   0x000000000042F388  Caver::PortalView::CenterAtNode(Caver::MapViewNode *,bool)
 *   0x000000000042F460  Caver::PortalView::AnimateIn(void)
 *
 * Callees: 1
 *   0x000000000049BBEC  Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6F24 string=0x000000000049BBEC "\n"
 *   insn=0x00000000001F6F28 string=0x00000000001F6F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIScrollView::ScrollRectToVisible(
        Caver::GUIScrollView *this,
        const Caver::Rectangle *a2,
        bool a3)
{
  return _ZN5Caver13GUIScrollView19ScrollRectToVisibleERKNS_9RectangleEb(this, a2, a3);
}

