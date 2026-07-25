/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFCA0
 * Mangled: ._ZN5Caver15GuideToggleViewC2Ev
 * Demangled: Caver::GuideToggleView::GuideToggleView(void)
 *
 * Callers: 2
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *
 * Callees: 1
 *   0x00000000004069EC  Caver::GuideToggleView::GuideToggleView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFCA8 string=0x00000000001FFCAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GuideToggleView::GuideToggleView(Caver::GuideToggleView *this)
{
  return _ZN5Caver15GuideToggleViewC2Ev(this);
}

