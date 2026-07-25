/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202690
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUISliderES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISlider,Caver::GUISlider>(boost::shared_ptr<Caver::GUISlider> const*,Caver::GUISlider *)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x0000000000342864  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISlider,Caver::GUISlider>(boost::shared_ptr<Caver::GUISlider> const*,Caver::GUISlider *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202698 string=0x000000000020269C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISlider,Caver::GUISlider>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUISliderES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

