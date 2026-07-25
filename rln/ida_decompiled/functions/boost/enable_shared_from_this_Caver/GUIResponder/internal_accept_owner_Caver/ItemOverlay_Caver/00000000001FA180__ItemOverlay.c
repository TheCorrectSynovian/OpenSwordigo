/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA180
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11ItemOverlayES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *
 * Callers: 1
 *   0x00000000003D993C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(boost::shared_ptr<Caver::CoinBar> const*,Caver::CoinBar *)
 *
 * Callees: 1
 *   0x00000000003D9B68  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA188 string=0x00000000001FA18C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11ItemOverlayES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

