/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002011B0
 * Mangled: ._ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKN5Caver10QuestsView10LabelGroupESt6vectorIS6_SaIS6_EEEEPS6_EET0_T_SF_SE_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*)
 *
 * Callers: 2
 *   0x0000000000432350  std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *   0x0000000000434110  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node(std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> const&)
 *
 * Callees: 1
 *   0x0000000000434110  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node(std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002011B8 string=0x00000000002011BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup>>,Caver::QuestsView::LabelGroup*>()
{
  JUMPOUT(0x4342AC);
}

