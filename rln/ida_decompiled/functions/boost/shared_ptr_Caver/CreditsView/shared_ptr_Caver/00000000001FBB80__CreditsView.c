/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB80
 * Mangled: ._ZN5boost10shared_ptrIN5Caver11CreditsViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView *)
 *
 * Callers: 1
 *   0x000000000038D4E4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *
 * Callees: 1
 *   0x000000000038DC3C  boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBB88 string=0x00000000001FBB8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>()
{
  return _ZN5boost10shared_ptrIN5Caver11CreditsViewEEC2IS2_EEPT_();
}

