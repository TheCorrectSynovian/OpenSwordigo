/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040fd6c
 * Function: Caver::Proto::LightComponent::Clear
 * Signature: undefined __thiscall Clear(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::Clear() */

void __thiscall Caver::Proto::LightComponent::Clear(LightComponent *this)

{
  LightComponent LVar1;
  uint uVar2;
  
  LVar1 = this[0x38];
  uVar2 = (uint)(byte)LVar1;
  if (LVar1 != (LightComponent)0x0) {
    *(undefined8 *)(this + 0xc) = 0;
    if ((((byte)LVar1 >> 2 & 1) != 0) && (*(FloatColor **)(this + 0x18) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x18));
      uVar2 = *(uint *)(this + 0x38);
    }
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x28) = 0;
                    /* catch() { ... } // from try @ 0040efec with catch @ 0040fdac */
    if (((uVar2 >> 6 & 1) != 0) && (*(Vector3 **)(this + 0x30) != (Vector3 *)0x0)) {
                    /* catch() { ... } // from try @ 0040e8d4 with catch @ 0040fdb0 */
      Vector3::Clear(*(Vector3 **)(this + 0x30));
    }
  }
  *(undefined4 *)(this + 0x38) = 0;
                    /* catch() { ... } // from try @ 0040e890 with catch @ 0040fdb8 */
  return;
}


