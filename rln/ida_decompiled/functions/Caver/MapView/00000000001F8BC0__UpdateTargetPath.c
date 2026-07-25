/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8BC0
 * Mangled: ._ZN5Caver7MapView16UpdateTargetPathEv
 * Demangled: Caver::MapView::UpdateTargetPath(void)
 *
 * Callers: 4
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *   0x0000000000425ABC  Caver::MapView::Update(float)
 *
 * Callees: 1
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8BC8 string=0x00000000001F8BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::UpdateTargetPath(Caver::MapView *this)
{
  return _ZN5Caver7MapView16UpdateTargetPathEv(this);
}

