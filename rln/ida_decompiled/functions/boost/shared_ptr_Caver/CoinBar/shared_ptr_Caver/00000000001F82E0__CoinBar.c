/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F82E0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver7CoinBarEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::CoinBar>::shared_ptr<Caver::CoinBar>(Caver::CoinBar *)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003D9710  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(boost::shared_ptr<Caver::ExperienceBar> const*,Caver::ExperienceBar *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F82E8 string=0x00000000001F82EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::CoinBar>::shared_ptr<Caver::CoinBar>()
{
  JUMPOUT(0x3D9830);
}

