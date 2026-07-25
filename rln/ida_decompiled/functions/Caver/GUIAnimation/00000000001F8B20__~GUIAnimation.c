/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B20
 * Mangled: ._ZN5Caver12GUIAnimationD2Ev
 * Demangled: Caver::GUIAnimation::~GUIAnimation()
 *
 * Callers: 2
 *   0x0000000000350CBC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>(boost::shared_ptr<Caver::ItemInfoPopupView> const*,Caver::ItemInfoPopupView *)
 *   0x0000000000350E70  boost::detail::sp_counted_impl_p<Caver::GUIAnimation>::dispose(void)
 *
 * Callees: 1
 *   0x0000000000350EC4  Caver::GUIAnimation::~GUIAnimation()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B28 string=0x00000000001F8B2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIAnimation::~GUIAnimation(Caver::GUIAnimation *this)
{
  _ZN5Caver12GUIAnimationD2Ev(this);
}

