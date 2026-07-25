/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB6B0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver7GUIViewEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUIView>,std::allocator<boost::shared_ptr<Caver::GUIView>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIView>*,std::vector<boost::shared_ptr<Caver::GUIView>,std::allocator<boost::shared_ptr<Caver::GUIView>>>>,boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 1
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Callees: 1
 *   0x000000000049258C  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB6B8 string=0x00000000001FB6BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::GUIView>>::_M_insert_aux()
{
  JUMPOUT(0x492968);
}

