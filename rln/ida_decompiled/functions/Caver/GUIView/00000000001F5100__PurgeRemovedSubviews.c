/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5100
 * Mangled: ._ZN5Caver7GUIView20PurgeRemovedSubviewsEv
 * Demangled: Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Callers: 1
 *   0x000000000049A550  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callees: 1
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5108 string=0x00000000001F510C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::PurgeRemovedSubviews(Caver::GUIView *this)
{
  return _ZN5Caver7GUIView20PurgeRemovedSubviewsEv(this);
}

