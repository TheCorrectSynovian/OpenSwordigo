/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F51F0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS5_EEESt10_Select1stIS8_ESt4lessISsESaIS8_EE24_M_get_insert_unique_posERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x0000000000433D1C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>> const&)
 *
 * Callees: 1
 *   0x0000000000433FD0  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F51F8 string=0x00000000001F51FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>>::_M_get_insert_unique_pos()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS5_EEESt10_Select1stIS8_ESt4lessISsESaIS8_EE24_M_get_insert_unique_posERS1_();
}

