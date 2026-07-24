/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005642a8
 * Function: Caver::Scene::FinishLoad
 * Signature: undefined __thiscall FinishLoad(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::FinishLoad() */

void __thiscall Caver::Scene::FinishLoad(Scene *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Scene *pSVar5;
  SceneObject *this_00;
  SceneObjectGroup *this_01;
  ProgramState *local_58;
  long *local_50;
  
                    /* try { // try from 005642ac to 006642c7 has its CatchHandler @ 005641fc */
                    /* catch() { ... } // from try @ 00564284 with catch @ 005642b4 */
                    /* catch() { ... } // from try @ 00564214 with catch @ 005642b8 */
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005642c8 to 006642d3 has its CatchHandler @ 005642d4 */
                    /* catch() { ... } // from try @ 005642c8 with catch @ 005642d4 */
                    /* try { // try from 005642d8 to 006642db has its CatchHandler @ 005642e0 */
  this[8] = (Scene)0x1;
                    /* catch() { ... } // from try @ 005642d8 with catch @ 005642e0 */
  ObjectLibrary::LoadAllPrograms(*(ObjectLibrary **)(this + 0xa0),(ProgramState *)(this + 0x28));
  if ((*(long *)(this + 0x80) != 0) && (*(long *)(*(long *)(this + 0x80) + 0x18) != 0)) {
    NewProgramStateForProgram((Program *)this);
    if (local_58 != (ProgramState *)0x0) {
                    /* catch() { ... } // from try @ 00564378 with catch @ 00564308
                       catch() { ... } // from try @ 0056441c with catch @ 00564308 */
      ProgramState::Execute(local_58,0);
    }
    if ((local_50 != (long *)0x0) &&
       (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar4 = local_50[2];
      local_50[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
  }
  for (pSVar5 = *(Scene **)(this + 200); this + 0xb8 != pSVar5;
      pSVar5 = (Scene *)FUN_0064c6a0(pSVar5)) {
    this_00 = *(SceneObject **)(pSVar5 + 0x28);
    if (this_00 != (SceneObject *)0x0) {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    SceneObject::FinishLoad(this_00);
    if ((this_00 != (SceneObject *)0x0) &&
       (iVar1 = *(int *)(this_00 + 8), *(int *)(this_00 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
    }
                    /* try { // try from 00564374 to 00664377 has its CatchHandler @ 005643d4 */
                    /* try { // try from 00564378 to 006643f3 has its CatchHandler @ 00564308 */
  }
  for (pSVar5 = *(Scene **)(this + 0xf8); this + 0xe8 != pSVar5;
      pSVar5 = (Scene *)FUN_0064c6a0(pSVar5)) {
    this_01 = *(SceneObjectGroup **)(pSVar5 + 0x28);
    if (this_01 != (SceneObjectGroup *)0x0) {
                    /* try { // try from 005643f4 to 0066441b has its CatchHandler @ 00564424 */
      *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
    }
    SceneObjectGroup::FinishLoad(this_01);
    if ((this_01 != (SceneObjectGroup *)0x0) &&
       (iVar1 = *(int *)(this_01 + 8), *(int *)(this_01 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
                    /* try { // try from 0056441c to 00664427 has its CatchHandler @ 00564308 */
                    /* catch() { ... } // from try @ 005643f4 with catch @ 00564424 */
      (**(code **)(*(long *)this_01 + 8))(this_01);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
                    /* catch() { ... } // from try @ 0056446c with catch @ 0056444c
                       catch() { ... } // from try @ 005644d0 with catch @ 0056444c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


