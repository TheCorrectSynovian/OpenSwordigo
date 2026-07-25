/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200400
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUISwitchES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>(boost::shared_ptr<Caver::GUISwitch> const*,Caver::GUISwitch *)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000003429A8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>(boost::shared_ptr<Caver::GUISwitch> const*,Caver::GUISwitch *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200408 string=0x000000000020040C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUISwitchES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

