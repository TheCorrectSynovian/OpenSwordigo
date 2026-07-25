/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F55D0
 * Mangled: ._ZN5Caver9StoreViewC2Ev
 * Demangled: Caver::StoreView::StoreView(void)
 *
 * Callers: 1
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F55D8 string=0x00000000001F55DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreView::StoreView(Caver::StoreView *this)
{
  return _ZN5Caver9StoreViewC2Ev(this);
}

