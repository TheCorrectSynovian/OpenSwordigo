/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bf24
 * Function: Caver::Proto::WeaponGlowComponent::Clear
 * Signature: undefined __thiscall Clear(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::Clear() */

void __thiscall Caver::Proto::WeaponGlowComponent::Clear(WeaponGlowComponent *this)

{
  WeaponGlowComponent WVar1;
  uint uVar2;
  
                    /* catch() { ... } // from try @ 0042c010 with catch @ 0042bf34
                       catch() { ... } // from try @ 0042c218 with catch @ 0042bf34
                       catch() { ... } // from try @ 0042c264 with catch @ 0042bf34
                       catch() { ... } // from try @ 0042c3b4 with catch @ 0042bf34
                       catch() { ... } // from try @ 0042c468 with catch @ 0042bf34 */
  WVar1 = this[0x24];
  uVar2 = (uint)(byte)WVar1;
  if (WVar1 != (WeaponGlowComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)WVar1 >> 1 & 1) != 0) && (*(FloatColor **)(this + 0x10) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x24);
    }
    if (((uVar2 >> 2 & 1) != 0) && (*(FloatColor **)(this + 0x18) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x18));
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


