/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040631c
 * Function: Caver::Proto::GroundPolygonComponent::Clear
 * Signature: undefined __thiscall Clear(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::Clear() */

void __thiscall Caver::Proto::GroundPolygonComponent::Clear(GroundPolygonComponent *this)

{
  GroundPolygonComponent GVar1;
  uint uVar2;
  long lVar3;
  
  GVar1 = this[0x6c];
  uVar2 = (uint)(byte)GVar1;
  if (GVar1 != (GroundPolygonComponent)0x0) {
    if ((((byte)GVar1 & 1) != 0) && (*(Program **)(this + 0x10) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x6c);
    }
    if (((uVar2 >> 2 & 1) != 0) && (*(Polygon **)(this + 0x50) != (Polygon *)0x0)) {
      Polygon::Clear(*(Polygon **)(this + 0x50));
    }
    *(undefined8 *)(this + 0x61) = 0;
    this[0x58] = (GroundPolygonComponent)0x1;
    *(undefined8 *)(this + 0x5c) = 0;
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x18) + lVar3 * 8) + 0x20))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x20));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return;
}


