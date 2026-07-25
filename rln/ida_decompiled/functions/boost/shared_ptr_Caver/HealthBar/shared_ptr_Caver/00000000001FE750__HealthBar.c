/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE750
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9HealthBarEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::HealthBar>::shared_ptr<Caver::HealthBar>(Caver::HealthBar *)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003D8E60  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(boost::shared_ptr<Caver::ConsumableItemView> const*,Caver::ConsumableItemView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE758 string=0x00000000001FE75C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::HealthBar>::shared_ptr<Caver::HealthBar>()
{
  JUMPOUT(0x3D8F80);
}

