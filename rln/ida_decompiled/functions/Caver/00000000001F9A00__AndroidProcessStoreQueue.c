/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9A00
 * Mangled: ._ZN5Caver24AndroidProcessStoreQueueEv
 * Demangled: Caver::AndroidProcessStoreQueue(void)
 *
 * Callers: 1
 *   0x00000000004BD7CC  Caver::StoreController_Android::FetchProductsWithIdentifiers(std::vector<std::string,std::allocator<std::string>> const&,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>)
 *
 * Callees: 1
 *   0x000000000047A3FC  Caver::AndroidProcessStoreQueue(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9A08 string=0x00000000001F9A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidProcessStoreQueue(Caver *this)
{
  return _ZN5Caver24AndroidProcessStoreQueueEv(this);
}

