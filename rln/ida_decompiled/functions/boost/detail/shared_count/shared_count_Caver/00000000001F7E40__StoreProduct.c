/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7E40
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver12StoreProductEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::StoreProduct>(Caver::StoreProduct *)
 *
 * Callers: 1
 *   0x0000000000479528  Java_com_touchfoo_swordigo_Native_storeProductFetched
 *
 * Callees: 1
 *   0x000000000047BBE8  boost::detail::shared_count::shared_count<Caver::StoreProduct>(Caver::StoreProduct *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7E48 string=0x00000000001F7E4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::StoreProduct>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver12StoreProductEEEPT_();
}

