/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FACB0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13ExperienceBarES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(boost::shared_ptr<Caver::ExperienceBar> const*,Caver::ExperienceBar *)
 *
 * Callers: 1
 *   0x00000000003D94E4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>(boost::shared_ptr<Caver::TargetFrame> const*,Caver::TargetFrame *)
 *
 * Callees: 1
 *   0x00000000003D9710  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(boost::shared_ptr<Caver::ExperienceBar> const*,Caver::ExperienceBar *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FACB8 string=0x00000000001FACBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13ExperienceBarES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

