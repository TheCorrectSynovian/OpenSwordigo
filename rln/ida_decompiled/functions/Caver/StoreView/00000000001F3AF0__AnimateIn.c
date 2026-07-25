/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3AF0
 * Mangled: ._ZN5Caver9StoreView9AnimateInEv
 * Demangled: Caver::StoreView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000003F51D8  Caver::StoreViewController::ViewDidAppear(void)
 *
 * Callees: 1
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3AF8 string=0x00000000001F3AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreView::AnimateIn(Caver::StoreView *this)
{
  return _ZN5Caver9StoreView9AnimateInEv(this);
}

