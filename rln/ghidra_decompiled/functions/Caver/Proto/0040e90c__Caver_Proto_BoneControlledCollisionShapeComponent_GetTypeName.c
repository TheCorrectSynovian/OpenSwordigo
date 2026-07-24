/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e90c
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::GetTypeName() const */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::GetTypeName
          (BoneControlledCollisionShapeComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0040e918 to 0050e92b has its CatchHandler @ 004106b8 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0040e92c to 0050e93b has its CatchHandler @ 0041065c */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0040e95c to 0050e963 has its CatchHandler @ 00410850 */
  __stack_chk_fail();
}


