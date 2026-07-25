/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA3F0
 * Mangled: ._ZN5Caver16StoreProductViewC2Ev
 * Demangled: Caver::StoreProductView::StoreProductView(void)
 *
 * Callers: 1
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *
 * Callees: 1
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA3F8 string=0x00000000001FA3FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreProductView::StoreProductView(Caver::StoreProductView *this)
{
  return _ZN5Caver16StoreProductViewC2Ev(this);
}

