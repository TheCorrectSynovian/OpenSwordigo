/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00471760
 * Function: Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct
 * Signature: undefined __cdecl PurchaseViewControllerDidPurchaseProduct(PurchaseViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController*)
    */

void Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct
               (PurchaseViewController *param_1)

{
  GUISwitch *this;
  
  this = *(GUISwitch **)(*(long *)(*(long *)(param_1 + 0x80) + 0x170) + 0x108);
  if (this[0x148] != (GUISwitch)0x0) {
    return;
  }
  this[0x148] = (GUISwitch)0x1;
  GUISwitch::UpdateFrameTexture(this);
                    /* WARNING: Could not recover jumptable at 0x004717b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x70))(param_1,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x170))
  ;
  return;
}


