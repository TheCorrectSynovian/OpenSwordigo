/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201FE0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver12StoreProductEEESaIS4_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS4_S6_EEmRKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::StoreProduct>*,std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>>,ulong,boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callers: 1
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003F5500  std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::StoreProduct>*,std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>>,ulong,boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201FE8 string=0x0000000000201FEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::StoreProduct>>::_M_fill_insert()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver12StoreProductEEESaIS4_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS4_S6_EEmRKS4_();
}

