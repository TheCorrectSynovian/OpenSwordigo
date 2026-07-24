/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429b70
 * Function: Caver::Proto::SwingableWeaponComponent::Clear
 * Signature: undefined __thiscall Clear(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::Clear() */

void __thiscall Caver::Proto::SwingableWeaponComponent::Clear(SwingableWeaponComponent *this)

{
  uint uVar1;
  
                    /* try { // try from 00429b70 to 00529b97 has its CatchHandler @ 00429b9c */
  uVar1 = *(uint *)(this + 0x44);
  if ((uVar1 & 0xff) != 0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
                    /* catch() { ... } // from try @ 00429b70 with catch @ 00429b9c */
                    /* catch() { ... } // from try @ 00429a1c with catch @ 00429ba0 */
    if (((uVar1 >> 5 & 1) != 0) && (*(FloatColor **)(this + 0x20) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x20));
      uVar1 = *(uint *)(this + 0x44);
    }
    *(undefined8 *)(this + 0x28) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x40) = 0;
  }
  *(undefined4 *)(this + 0x44) = 0;
                    /* try { // try from 00429bc4 to 00529beb has its CatchHandler @ 00429c48 */
  return;
}


