/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402bd4
 * Function: Caver::Proto::SpriteComponent::Clear
 * Signature: undefined __thiscall Clear(SpriteComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpriteComponent::Clear() */

void __thiscall Caver::Proto::SpriteComponent::Clear(SpriteComponent *this)

{
  long *plVar1;
  
  if ((((byte)this[0x18] & 1) != 0) &&
     (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_texture_name__007e5d90)) {
    FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


