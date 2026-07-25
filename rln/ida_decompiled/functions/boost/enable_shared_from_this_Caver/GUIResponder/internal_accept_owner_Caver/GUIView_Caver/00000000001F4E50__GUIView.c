/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E50
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7GUIViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>(boost::shared_ptr<Caver::GUIView> const*,Caver::GUIView *)
 *
 * Callers: 1
 *   0x0000000000388D70  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *
 * Callees: 1
 *   0x0000000000388E7C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>(boost::shared_ptr<Caver::GUIView> const*,Caver::GUIView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E58 string=0x00000000001F4E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7GUIViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

