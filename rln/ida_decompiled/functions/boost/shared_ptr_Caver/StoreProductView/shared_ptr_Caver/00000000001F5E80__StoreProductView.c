/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5E80
 * Mangled: ._ZN5boost10shared_ptrIN5Caver16StoreProductViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StoreProductView>::shared_ptr<Caver::StoreProductView>(Caver::StoreProductView *)
 *
 * Callers: 1
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *
 * Callees: 1
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5E88 string=0x00000000001F5E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::StoreProductView>::shared_ptr<Caver::StoreProductView>()
{
  JUMPOUT(0x3EF02C);
}

