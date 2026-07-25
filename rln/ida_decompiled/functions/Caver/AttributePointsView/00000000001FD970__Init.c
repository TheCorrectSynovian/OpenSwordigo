/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD970
 * Mangled: ._ZN5Caver19AttributePointsView4InitERKSsS2_
 * Demangled: Caver::AttributePointsView::Init(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD978 string=0x00000000001FD97C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::AttributePointsView::Init()
{
  JUMPOUT(0x3F7D54);
}

