/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e530
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::Clear
 * Signature: undefined __thiscall Clear(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::Clear() */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::Clear
          (BoneControlledCollisionShapeComponent *this)

{
  long *plVar1;
  
                    /* try { // try from 0040e548 to 0050e5a3 has its CatchHandler @ 0040e548
                       catch() { ... } // from try @ 0040e548 with catch @ 0040e548
                       catch() { ... } // from try @ 0040e5a8 with catch @ 0040e548
                       catch() { ... } // from try @ 0040f304 with catch @ 0040e548
                       catch() { ... } // from try @ 00410658 with catch @ 0040e548
                       catch() { ... } // from try @ 00410914 with catch @ 0040e548 */
  if (((this[0x18] != (BoneControlledCollisionShapeComponent)0x0) &&
      (*(undefined4 *)(this + 0xc) = 0, ((byte)this[0x18] >> 1 & 1) != 0)) &&
     (plVar1 = *(long **)(this + 0x10),
     plVar1 != (long *)PTR__default_controlling_bone_name__007e79d8)) {
    FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


