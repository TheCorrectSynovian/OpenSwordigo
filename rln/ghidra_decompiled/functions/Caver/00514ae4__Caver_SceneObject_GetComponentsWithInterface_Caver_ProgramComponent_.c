/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00514ae4
 * Function: Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>
 * Signature: void __thiscall GetComponentsWithInterface<Caver::ProgramComponent>(SceneObject * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent*,
   std::allocator<Caver::ProgramComponent*> >*) */

void __thiscall
Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>
          (SceneObject *this,vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long *local_50;
  long local_48;
  
  puVar6 = PTR_Interface_007e6398;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar3 = *(undefined8 **)(this + 200);
  for (puVar1 = *(undefined8 **)(this + 0xc0); puVar1 != puVar3; puVar1 = puVar1 + 1) {
    plVar8 = (long *)*puVar1;
    if (plVar8 != (long *)0x0) {
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    }
    uVar7 = (**(code **)(*plVar8 + 0xa0))(plVar8,puVar6);
    if ((uVar7 & 1) != 0) {
                    /* catch() { ... } // from try @ 00514b80 with catch @ 00514b50 */
      puVar2 = *(undefined8 **)(param_1 + 8);
      local_50 = plVar8;
      if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
        std::vector<Caver::ProgramComponent*,std::allocator<Caver::ProgramComponent*>>::
        _M_insert_aux((vector<Caver::ProgramComponent*,std::allocator<Caver::ProgramComponent*>> *)
                      param_1,puVar2,&local_50);
      }
      else {
        *puVar2 = plVar8;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
                    /* try { // try from 00514b6c to 00614b7f has its CatchHandler @ 00514ba4 */
      }
    }
                    /* try { // try from 00514b80 to 00614ba7 has its CatchHandler @ 00514b50 */
    iVar4 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar4;
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
                    /* catch() { ... } // from try @ 00514b6c with catch @ 00514ba4 */
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00514c14 with catch @ 00514bd0 */
  __stack_chk_fail();
}


