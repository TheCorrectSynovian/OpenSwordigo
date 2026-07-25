/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F36B0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver8GUILabelEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *
 * Callers: 4
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Callees: 1
 *   0x00000000003CCB70  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F36B8 string=0x00000000001F36BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::GUILabel>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver8GUILabelEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

