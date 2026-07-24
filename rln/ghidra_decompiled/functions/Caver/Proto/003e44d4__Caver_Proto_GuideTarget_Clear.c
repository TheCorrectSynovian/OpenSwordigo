/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e44d4
 * Function: Caver::Proto::GuideTarget::Clear
 * Signature: undefined __thiscall Clear(GuideTarget * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget::Clear() */

void __thiscall Caver::Proto::GuideTarget::Clear(GuideTarget *this)

{
  GuideTarget GVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  GVar1 = this[0x70];
  uVar3 = (uint)(byte)GVar1;
  if (GVar1 != (GuideTarget)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)GVar1 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e4fe0)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x70);
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_level_name__007e6788)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x70);
    }
    if (((uVar3 >> 3 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x20), plVar2 != (long *)PTR__default_object_identifier__007e7520
       )) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x70);
    }
    if (((uVar3 >> 4 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x28),
       plVar2 != (long *)PTR__default_carry_object_identifier__007e49b0)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
    this[0x30] = (GuideTarget)0x0;
  }
  if (0 < *(int *)(this + 0x40)) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x38) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x40));
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


