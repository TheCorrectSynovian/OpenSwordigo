/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F82F0
 * Mangled: ._ZSt10_ConstructIN5Caver10QuestsView10LabelGroupES2_EvPT_RKT0_
 * Demangled: std::_Construct<Caver::QuestsView::LabelGroup,Caver::QuestsView::LabelGroup>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup const&)
 *
 * Callers: 1
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x0000000000434110  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node(std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F82F8 string=0x00000000001F82FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Construct<Caver::QuestsView::LabelGroup,Caver::QuestsView::LabelGroup>()
{
  JUMPOUT(0x434418);
}

