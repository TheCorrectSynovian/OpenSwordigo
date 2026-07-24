/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00570ec4
 * Function: Caver::SceneObject::FinishLoad
 * Signature: undefined __thiscall FinishLoad(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::FinishLoad() */

void __thiscall Caver::SceneObject::FinishLoad(SceneObject *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ProgramState *local_48;
  long *local_40;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 200);
                    /* try { // try from 00570eec to 00670eff has its CatchHandler @ 0057111c */
  for (puVar6 = *(undefined8 **)(this + 0xc0); puVar6 != puVar1; puVar6 = puVar6 + 1) {
                    /* try { // try from 00570f00 to 00670f13 has its CatchHandler @ 005710ac */
    (**(code **)(*(long *)*puVar6 + 0x48))();
  }
  lVar3 = *(long *)(this + 0x58);
  if (lVar3 == 0) {
    lVar5 = *(long *)(this + 0x48);
    if (lVar5 == 0) goto LAB_00571000;
                    /* catch() { ... } // from try @ 00570e70 with catch @ 00570ff4 */
    lVar3 = *(long *)(lVar5 + 0x58);
    plVar7 = *(long **)(lVar5 + 0x60);
  }
  else {
    plVar7 = *(long **)(this + 0x60);
  }
  if (plVar7 != (long *)0x0) {
    plVar7[1] = plVar7[1] + 1;
  }
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
                    /* try { // try from 00570f3c to 00670f3f has its CatchHandler @ 00571058 */
    Scene::NewProgramStateForProgram(*(Program **)(this + 0x20));
                    /* try { // try from 00570f40 to 0067107b has its CatchHandler @ 00570ddc */
    if (local_48 != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject(local_48,this);
      ProgramState::Execute(local_48,1);
    }
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = local_40[2];
      local_40[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
  }
  if ((plVar7 != (long *)0x0) && (lVar3 = plVar7[1], plVar7[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar3 = plVar7[2];
    plVar7[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
LAB_00571000:
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


