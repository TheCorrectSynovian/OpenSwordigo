/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431594
 * Function: Caver::Proto::OverlayTextComponent::Clear
 * Signature: undefined __thiscall Clear(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::Clear() */

void __thiscall Caver::Proto::OverlayTextComponent::Clear(OverlayTextComponent *this)

{
  OverlayTextComponent OVar1;
  long *plVar2;
  uint uVar3;
  
  OVar1 = this[0x30];
  uVar3 = (uint)(byte)OVar1;
  if (OVar1 != (OverlayTextComponent)0x0) {
    if ((((byte)OVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_text__007e5e10)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x30);
    }
    if (((uVar3 >> 1 & 1) != 0) && (*(Vector2 **)(this + 0x18) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x18));
      uVar3 = *(uint *)(this + 0x30);
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x20), plVar2 != (long *)PTR__default_sprite_name__007e6978)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x30);
    }
    if (((uVar3 >> 3 & 1) != 0) && (*(Vector2 **)(this + 0x28) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x28));
    }
  }
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


