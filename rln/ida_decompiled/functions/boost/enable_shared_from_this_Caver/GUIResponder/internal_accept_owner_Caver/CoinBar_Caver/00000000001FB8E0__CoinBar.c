/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB8E0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7CoinBarES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(boost::shared_ptr<Caver::CoinBar> const*,Caver::CoinBar *)
 *
 * Callers: 1
 *   0x00000000003D9710  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(boost::shared_ptr<Caver::ExperienceBar> const*,Caver::ExperienceBar *)
 *
 * Callees: 1
 *   0x00000000003D993C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(boost::shared_ptr<Caver::CoinBar> const*,Caver::CoinBar *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB8E8 string=0x00000000001FB8EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7CoinBarES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

