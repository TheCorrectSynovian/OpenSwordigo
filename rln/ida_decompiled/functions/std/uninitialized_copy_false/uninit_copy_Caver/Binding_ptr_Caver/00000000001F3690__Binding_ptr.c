/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3690
 * Mangled: ._ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver7BindingES4_EET0_T_S6_S5_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *
 * Callers: 1
 *   0x0000000000215AA8  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *
 * Callees: 1
 *   0x0000000000215F14  std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3698 string=0x00000000001F369C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>()
{
  return _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver7BindingES4_EET0_T_S6_S5_();
}

