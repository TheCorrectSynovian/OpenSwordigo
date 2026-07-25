/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8560
 * Mangled: ._ZN5Caver29AndroidQueueStoreProductFetchERKSs
 * Demangled: Caver::AndroidQueueStoreProductFetch(std::string const&)
 *
 * Callers: 1
 *   0x00000000004BD7CC  Caver::StoreController_Android::FetchProductsWithIdentifiers(std::vector<std::string,std::allocator<std::string>> const&,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>)
 *
 * Callees: 1
 *   0x000000000047A378  Caver::AndroidQueueStoreProductFetch(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8568 string=0x00000000001F856C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AndroidQueueStoreProductFetch()
{
  return _ZN5Caver29AndroidQueueStoreProductFetchERKSs();
}

