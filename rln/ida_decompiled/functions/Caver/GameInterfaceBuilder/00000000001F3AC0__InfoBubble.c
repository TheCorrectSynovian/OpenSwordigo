/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3AC0
 * Mangled: ._ZN5Caver20GameInterfaceBuilder10InfoBubbleERKSsf
 * Demangled: Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Callers: 3
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x0000000000411444  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3AC8 string=0x00000000001F3ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameInterfaceBuilder::InfoBubble()
{
  return _ZN5Caver20GameInterfaceBuilder10InfoBubbleERKSsf();
}

