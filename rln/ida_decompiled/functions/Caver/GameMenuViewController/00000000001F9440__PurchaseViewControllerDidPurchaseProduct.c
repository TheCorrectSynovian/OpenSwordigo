/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9440
 * Mangled: ._ZN5Caver22GameMenuViewController40PurchaseViewControllerDidPurchaseProductEPNS_22PurchaseViewControllerE
 * Demangled: Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *
 * Callers: 1
 *   0x0000000000346870  Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *
 * Callees: 1
 *   0x0000000000346870  Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9448 string=0x00000000001F944C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(
        Caver::GameMenuViewController *this,
        Caver::PurchaseViewController *a2)
{
  return _ZN5Caver22GameMenuViewController40PurchaseViewControllerDidPurchaseProductEPNS_22PurchaseViewControllerE(
           this,
           a2);
}

