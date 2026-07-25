/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3C60
 * Mangled: ._ZN5Caver14TabbedMenuView22SetStripeAccessoryViewERKN5boost10shared_ptrINS_7GUIViewEEE
 * Demangled: Caver::TabbedMenuView::SetStripeAccessoryView(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3C68 string=0x00000000001F3C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::TabbedMenuView::SetStripeAccessoryView()
{
  JUMPOUT(0x345030);
}

