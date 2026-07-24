/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004099f0
 * Function: Caver::Proto::TextureMappingComponent::Clear
 * Signature: undefined __thiscall Clear(TextureMappingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::Clear() */

void __thiscall Caver::Proto::TextureMappingComponent::Clear(TextureMappingComponent *this)

{
  TextureMappingComponent TVar1;
  long *plVar2;
  uint uVar3;
  
  TVar1 = this[0x28];
  uVar3 = (uint)(byte)TVar1;
  if (TVar1 != (TextureMappingComponent)0x0) {
    if ((((byte)TVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_texture_name__007e7c58)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x28);
    }
    *(undefined4 *)(this + 0x18) = 0;
    if (((uVar3 >> 2 & 1) != 0) && (*(Vector2 **)(this + 0x20) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x20));
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


