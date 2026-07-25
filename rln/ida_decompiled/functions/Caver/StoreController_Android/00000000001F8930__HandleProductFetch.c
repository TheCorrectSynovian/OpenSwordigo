/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8930
 * Mangled: ._ZN5Caver23StoreController_Android18HandleProductFetchERKSsRKN5boost10shared_ptrINS_12StoreProductEEES2_
 * Demangled: Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Callers: 2
 *   0x0000000000479528  Java_com_touchfoo_swordigo_Native_storeProductFetched
 *   0x0000000000479AA8  Java_com_touchfoo_swordigo_Native_storeProductFetchFailed
 *
 * Callees: 1
 *   0x00000000004BE34C  Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8938 string=0x00000000001F893C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StoreController_Android::HandleProductFetch()
{
  return _ZN5Caver23StoreController_Android18HandleProductFetchERKSsRKN5boost10shared_ptrINS_12StoreProductEEES2_();
}

