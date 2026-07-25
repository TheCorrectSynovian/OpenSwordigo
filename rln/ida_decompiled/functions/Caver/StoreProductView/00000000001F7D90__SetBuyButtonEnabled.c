/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7D90
 * Mangled: ._ZN5Caver16StoreProductView19SetBuyButtonEnabledEb
 * Demangled: Caver::StoreProductView::SetBuyButtonEnabled(bool)
 *
 * Callers: 1
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *
 * Callees: 1
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7D98 string=0x00000000001F7D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::StoreProductView::SetBuyButtonEnabled(Caver::StoreProductView *this)
{
  JUMPOUT(0x3ED4E4);
}

