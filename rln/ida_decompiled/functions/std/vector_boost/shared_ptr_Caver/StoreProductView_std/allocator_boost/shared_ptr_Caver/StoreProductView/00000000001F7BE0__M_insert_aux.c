/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7BE0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver16StoreProductViewEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::StoreProductView>,std::allocator<boost::shared_ptr<Caver::StoreProductView>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::StoreProductView>*,std::vector<boost::shared_ptr<Caver::StoreProductView>,std::allocator<boost::shared_ptr<Caver::StoreProductView>>>>,boost::shared_ptr<Caver::StoreProductView> const&)
 *
 * Callers: 1
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *
 * Callees: 1
 *   0x00000000003EFFF4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreProductView,Caver::StoreProductView>(boost::shared_ptr<Caver::StoreProductView> const*,Caver::StoreProductView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7BE8 string=0x00000000001F7BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::StoreProductView>>::_M_insert_aux()
{
  JUMPOUT(0x3F0114);
}

