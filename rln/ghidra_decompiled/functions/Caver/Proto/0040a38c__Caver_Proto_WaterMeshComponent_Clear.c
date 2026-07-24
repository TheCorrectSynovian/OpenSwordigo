/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a38c
 * Function: Caver::Proto::WaterMeshComponent::Clear
 * Signature: undefined __thiscall Clear(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::Clear() */

void __thiscall Caver::Proto::WaterMeshComponent::Clear(WaterMeshComponent *this)

{
  WaterMeshComponent WVar1;
  uint uVar2;
  
  WVar1 = this[0x28];
  uVar2 = (uint)(byte)WVar1;
  if (WVar1 != (WaterMeshComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    if ((((byte)WVar1 >> 2 & 1) != 0) && (*(FloatColor **)(this + 0x18) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x18));
      uVar2 = *(uint *)(this + 0x28);
    }
    if (((uVar2 >> 3 & 1) != 0) && (*(FloatColor **)(this + 0x20) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x20));
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


