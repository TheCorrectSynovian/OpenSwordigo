/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002015B0
 * Mangled: ._ZN5Caver22PurchaseViewController15EnableBuyButtonEv
 * Demangled: Caver::PurchaseViewController::EnableBuyButton(void)
 *
 * Callers: 2
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EB2F4  Caver::PurchaseViewController::PurchaseCompletion(std::string const&,bool,std::string const&)
 *
 * Callees: 1
 *   0x00000000003EAF20  Caver::PurchaseViewController::EnableBuyButton(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002015B8 string=0x00000000002015BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PurchaseViewController::EnableBuyButton(Caver::PurchaseViewController *this)
{
  return _ZN5Caver22PurchaseViewController15EnableBuyButtonEv(this);
}

