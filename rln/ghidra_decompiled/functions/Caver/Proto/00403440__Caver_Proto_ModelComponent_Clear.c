/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00403440
 * Function: Caver::Proto::ModelComponent::Clear
 * Signature: undefined __thiscall Clear(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::Clear() */

void __thiscall Caver::Proto::ModelComponent::Clear(ModelComponent *this)

{
  ModelComponent MVar1;
  long *plVar2;
  uint uVar3;
  
  MVar1 = this[0x48];
  uVar3 = (uint)(byte)MVar1;
  if (MVar1 != (ModelComponent)0x0) {
    if ((((byte)MVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e7d30)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x48);
    }
    if (((uVar3 >> 1 & 1) != 0) && (*(Vector3 **)(this + 0x18) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x18));
      uVar3 = *(uint *)(this + 0x48);
    }
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    if (((uVar3 >> 5 & 1) != 0) && (*(FloatColor **)(this + 0x30) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x30));
      uVar3 = *(uint *)(this + 0x48);
    }
    this[0x38] = (ModelComponent)0x0;
    if (((uVar3 >> 7 & 1) != 0) && (*(FloatColor **)(this + 0x40) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x40));
    }
  }
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


