/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA940
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver12GUITextFieldEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callers: 1
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callees: 1
 *   0x000000000049258C  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA948 string=0x00000000001FA94C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::GUITextField>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver12GUITextFieldEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

