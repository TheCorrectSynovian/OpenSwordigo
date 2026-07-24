/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040bc58
 * Function: Caver::Proto::CollisionShapeComponent::Clear
 * Signature: undefined __thiscall Clear(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::Clear() */

void __thiscall Caver::Proto::CollisionShapeComponent::Clear(CollisionShapeComponent *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x40);
  if ((uVar1 & 0xff) != 0) {
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    this[0xc] = (CollisionShapeComponent)0x1;
    *(undefined4 *)(this + 0xd) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined4 *)(this + 0x20) = 0;
    this[0x24] = (CollisionShapeComponent)0x0;
    if (((uVar1 >> 10 & 1) != 0) && (*(Program **)(this + 0x28) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x28));
      uVar1 = *(uint *)(this + 0x40);
    }
    if (((uVar1 >> 0xb & 1) != 0) && (*(Program **)(this + 0x30) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x30));
      uVar1 = *(uint *)(this + 0x40);
    }
    if (((uVar1 >> 0xc & 1) != 0) && (*(Program **)(this + 0x38) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x38));
    }
  }
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


