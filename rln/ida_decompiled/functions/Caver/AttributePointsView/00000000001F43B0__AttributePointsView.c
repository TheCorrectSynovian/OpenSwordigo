/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F43B0
 * Mangled: ._ZN5Caver19AttributePointsViewC2Ev
 * Demangled: Caver::AttributePointsView::AttributePointsView(void)
 *
 * Callers: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F43B8 string=0x00000000001F43BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AttributePointsView::AttributePointsView(Caver::AttributePointsView *this)
{
  JUMPOUT(0x3F5D10);
}

