/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00570a2c
 * Function: Caver::SceneObject::Process
 * Signature: undefined __thiscall Process(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::Process() */

void __thiscall Caver::SceneObject::Process(SceneObject *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  long *local_60;
  long *local_58;
  long *plStack_50;
  long local_48;
  
                    /* try { // try from 00570a38 to 00670a93 has its CatchHandler @ 00570748 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  local_60 = (long *)0x0;
  lVar7 = *(long *)(this + 0xc0);
  lVar8 = *(long *)(this + 200);
  if (lVar8 != lVar7) {
    uVar11 = 0;
    do {
                    /* try { // try from 00570a94 to 00670a9f has its CatchHandler @ 00570c00 */
      if (*(char *)(*(long *)(lVar7 + uVar11 * 8) + 0x30) == '\0') {
                    /* try { // try from 00570aa0 to 00670b0f has its CatchHandler @ 00570748 */
        local_70 = (long *)0x0;
        uStack_68 = 0;
        local_78 = (long *)0x0;
        plVar4 = *(long **)(lVar7 + uVar11 * 8);
        uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_78);
        plVar9 = local_70;
        for (plVar4 = local_78; plVar4 != plVar9; plVar4 = plVar4 + 1) {
          local_80 = (long *)*plVar4;
          if (local_80 != (long *)0x0) {
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          }
          *(undefined4 *)((long)local_80 + 0x24) =
               *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + uVar11 * 8) + 0x20);
          if (local_58 == plStack_50) {
            std::
            vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
            ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
                             *)&local_60,local_58,&local_80);
          }
          else {
            *local_58 = (long)local_80;
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
                    /* try { // try from 00570b10 to 00670b4f has its CatchHandler @ 00570c70 */
            local_58 = local_58 + 1;
          }
          if ((local_80 != (long *)0x0) &&
             (iVar1 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*local_80 + 8))();
          }
                    /* try { // try from 00570b50 to 00670c8f has its CatchHandler @ 00570748 */
        }
        plVar4 = local_78;
        plVar9 = local_70;
        if ((uVar5 & 1) == 0) {
          if (local_78 != local_70) {
            lVar7 = *local_78;
            *(undefined4 *)(lVar7 + 0x20) =
                 *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + uVar11 * 8) + 0x20);
            *(undefined4 *)(lVar7 + 0x24) = 0;
          }
          plVar10 = *(long **)(this + 200);
          plVar9 = (long *)(*(long *)(this + 0xc0) + uVar11 * 8);
          plVar4 = plVar9 + 1;
          plVar6 = plVar4;
          if ((plVar4 != plVar10) && (plVar6 = plVar10, 0 < (long)plVar10 - (long)plVar4)) {
            lVar7 = ((ulong)((long)plVar10 - (long)plVar4) >> 3) + 1;
            do {
              lVar8 = plVar9[1];
              if (lVar8 != 0) {
                *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              }
              plVar4 = (long *)*plVar9;
              *plVar9 = lVar8;
              if ((plVar4 != (long *)0x0) &&
                 (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
                (**(code **)(*plVar4 + 8))();
              }
              lVar7 = lVar7 + -1;
              plVar9 = plVar9 + 1;
            } while (1 < lVar7);
            plVar6 = *(long **)(this + 200);
          }
                    /* catch() { ... } // from try @ 00570a94 with catch @ 00570c00 */
          *(long **)(this + 200) = plVar6 + -1;
          plVar4 = (long *)plVar6[-1];
          if ((plVar4 != (long *)0x0) &&
             (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*plVar4 + 8))();
          }
          uVar11 = uVar11 - 1;
          plVar4 = local_78;
          plVar9 = local_70;
        }
        for (; plVar10 = local_70, plVar4 != local_70; plVar4 = plVar4 + 1) {
          plVar6 = (long *)*plVar4;
          local_70 = plVar9;
          if ((plVar6 != (long *)0x0) &&
             (iVar1 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*plVar6 + 8))();
          }
          plVar9 = local_70;
          local_70 = plVar10;
        }
                    /* catch() { ... } // from try @ 00570b10 with catch @ 00570c70 */
        local_70 = plVar9;
        if (local_78 != (long *)0x0) {
          operator_delete(local_78);
        }
        lVar7 = *(long *)(this + 0xc0);
        lVar8 = *(long *)(this + 200);
      }
      plVar4 = local_58;
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)(lVar8 - lVar7 >> 3));
                    /* try { // try from 00570c90 to 00670ceb has its CatchHandler @ 00570dc4 */
    plVar10 = local_58;
    plVar9 = local_60;
    if (local_60 != local_58) {
      do {
        local_78 = (long *)*plVar9;
        if (local_78 != (long *)0x0) {
          *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        }
                    /* catch() { ... } // from try @ 00570a24 with catch @ 00570cbc */
        (**(code **)(*(long *)this + 0x48))(this,&local_78);
        if ((local_78 != (long *)0x0) &&
           (iVar1 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*local_78 + 8))();
        }
                    /* try { // try from 00570cec to 00670d1b has its CatchHandler @ 00570748 */
        plVar3 = local_58;
        plVar9 = plVar9 + 1;
        plVar6 = local_60;
        plVar10 = local_58;
      } while (plVar4 != plVar9);
      for (; plVar6 != plVar3; plVar6 = plVar6 + 1) {
        plVar4 = (long *)*plVar6;
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 00570d1c to 00670d27 has its CatchHandler @ 00570dc4 */
          (**(code **)(*plVar4 + 8))();
        }
                    /* try { // try from 00570d28 to 00670d57 has its CatchHandler @ 00570748 */
        plVar10 = local_60;
      }
    }
    if (plVar10 != (long *)0x0) {
      operator_delete(plVar10);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


