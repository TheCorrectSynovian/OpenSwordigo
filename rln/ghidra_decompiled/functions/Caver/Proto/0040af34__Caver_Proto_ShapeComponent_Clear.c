/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040af34
 * Function: Caver::Proto::ShapeComponent::Clear
 * Signature: undefined __thiscall Clear(ShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::Clear() */

void __thiscall Caver::Proto::ShapeComponent::Clear(ShapeComponent *this)

{
  ShapeComponent SVar1;
  uint uVar2;
  
  SVar1 = this[0x28];
  uVar2 = (uint)(byte)SVar1;
  if (SVar1 != (ShapeComponent)0x0) {
    if ((((byte)SVar1 & 1) != 0) && (*(Rectangle **)(this + 0x10) != (Rectangle *)0x0)) {
      Rectangle::Clear(*(Rectangle **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x28);
    }
    if (((uVar2 >> 1 & 1) != 0) && (*(Circle **)(this + 0x18) != (Circle *)0x0)) {
      Circle::Clear(*(Circle **)(this + 0x18));
      uVar2 = *(uint *)(this + 0x28);
    }
    if (((uVar2 >> 2 & 1) != 0) && (*(Polygon **)(this + 0x20) != (Polygon *)0x0)) {
      Polygon::Clear(*(Polygon **)(this + 0x20));
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


