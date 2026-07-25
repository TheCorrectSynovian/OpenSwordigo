/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA640
 * Mangled: ._ZN5Caver9StoreView15SetProductCountEi
 * Demangled: Caver::StoreView::SetProductCount(int)
 *
 * Callers: 1
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA648 string=0x00000000001FA64C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreView::SetProductCount(Caver::StoreView *this, int a2)
{
  return _ZN5Caver9StoreView15SetProductCountEi(this, a2);
}

