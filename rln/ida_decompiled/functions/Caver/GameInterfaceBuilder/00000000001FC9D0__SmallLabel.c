/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC9D0
 * Mangled: ._ZN5Caver20GameInterfaceBuilder10SmallLabelERKSsNS_5ColorES3_
 * Demangled: Caver::GameInterfaceBuilder::SmallLabel(std::string const&,Caver::Color,Caver::Color)
 *
 * Callers: 2
 *   0x00000000004069EC  Caver::GuideToggleView::GuideToggleView(void)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC9D8 string=0x00000000001FC9DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameInterfaceBuilder::SmallLabel()
{
  JUMPOUT(0x33EE2C);
}

