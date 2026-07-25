/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD070
 * Mangled: ._ZN5Caver11CreditsViewC2Ev
 * Demangled: Caver::CreditsView::CreditsView(void)
 *
 * Callers: 1
 *   0x000000000038D4E4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *
 * Callees: 1
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD078 string=0x00000000001FD07C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CreditsView::CreditsView(Caver::CreditsView *this)
{
  return _ZN5Caver11CreditsViewC2Ev(this);
}

