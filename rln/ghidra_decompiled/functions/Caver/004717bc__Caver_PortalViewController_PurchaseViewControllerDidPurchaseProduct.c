/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004717bc
 * Function: Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct
 * Signature: undefined __thiscall PurchaseViewControllerDidPurchaseProduct(PortalViewController * this, PurchaseViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController*)
    */

void __thiscall
Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct
          (PortalViewController *this,PurchaseViewController *param_1)

{
  GUISwitch *this_00;
  
  this_00 = *(GUISwitch **)(*(long *)(*(long *)(this + 0x28) + 0x170) + 0x108);
  if (this_00[0x148] != (GUISwitch)0x0) {
    return;
  }
  this_00[0x148] = (GUISwitch)0x1;
  GUISwitch::UpdateFrameTexture(this_00);
                    /* WARNING: Could not recover jumptable at 0x00471810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x58) + 0x70))
            (this + -0x58,*(undefined8 *)(*(long *)(this + 0x28) + 0x170));
  return;
}


