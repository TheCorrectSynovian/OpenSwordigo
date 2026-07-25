/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FADD0
 * Mangled: ._ZN5Caver10QuestsView10LabelGroupD2Ev
 * Demangled: Caver::QuestsView::LabelGroup::~LabelGroup()
 *
 * Callers: 6
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x0000000000432350  std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *   0x0000000000433850  std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>::~pair()
 *   0x0000000000434110  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node(std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> const&)
 *   0x0000000000434510  std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x00000000004327B0  Caver::QuestsView::LabelGroup::~LabelGroup()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FADD8 string=0x00000000001FADDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::QuestsView::LabelGroup::~LabelGroup(Caver::QuestsView::LabelGroup *this)
{
  _ZN5Caver10QuestsView10LabelGroupD2Ev(this);
}

