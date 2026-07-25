/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF560
 * Mangled: ._ZN5Caver27GuidePurchaseViewController19SetBuyButtonEnabledEb
 * Demangled: Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool)
 *
 * Callers: 2
 *   0x0000000000365DF0  Caver::GuidePurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *
 * Callees: 1
 *   0x00000000003662D0  Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF568 string=0x00000000001FF56C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GuidePurchaseViewController::SetBuyButtonEnabled(
        Caver::GuidePurchaseViewController *this,
        bool a2)
{
  return _ZN5Caver27GuidePurchaseViewController19SetBuyButtonEnabledEb(this, a2);
}

