/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e385c
 * Function: Caver::Proto::GuideTarget_LevelObject::Clear
 * Signature: undefined __thiscall Clear(GuideTarget_LevelObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::Clear() */

void __thiscall Caver::Proto::GuideTarget_LevelObject::Clear(GuideTarget_LevelObject *this)

{
  GuideTarget_LevelObject GVar1;
  long *plVar2;
  uint uVar3;
  
  GVar1 = this[0x20];
  uVar3 = (uint)(byte)GVar1;
  if (GVar1 != (GuideTarget_LevelObject)0x0) {
    if ((((byte)GVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_level_name__007e6158)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x20);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_object_identifier__007e7308
       )) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


