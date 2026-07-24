/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004db7d0
 * Function: Caver::HealthBar::AddAnimationToHeart
 * Signature: undefined __thiscall AddAnimationToHeart(HealthBar * this, int param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::AddAnimationToHeart(int, boost::shared_ptr<Caver::GUIAnimation> const&) */

void __thiscall
Caver::HealthBar::AddAnimationToHeart(HealthBar *this,int param_1,shared_ptr *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar11 = (ulong)param_1;
  lVar8 = *(long *)(this + 0x198);
  uVar9 = lVar8 - *(long *)(this + 400) >> 4;
  if (uVar9 <= uVar11) {
    uVar1 = uVar11 + 1;
    local_78 = 0;
    local_70 = (long *)0x0;
    if (uVar1 < uVar9 || uVar1 - uVar9 == 0) {
      if (uVar1 < uVar9) {
        lVar3 = *(long *)(this + 400) + uVar1 * 0x10;
        for (lVar2 = lVar3; lVar2 != lVar8; lVar2 = lVar2 + 0x10) {
          plVar10 = *(long **)(lVar2 + 8);
          if ((plVar10 != (long *)0x0) &&
             (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            lVar7 = plVar10[2];
            plVar10[2] = lVar7 + -1;
            if (lVar7 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
          }
        }
        *(long *)(this + 0x198) = lVar3;
      }
    }
    else {
      std::
      vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>
      ::_M_fill_insert((vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>
                        *)(this + 400),lVar8,uVar1 - uVar9,&local_78);
    }
    plVar10 = local_70;
    if ((local_70 != (long *)0x0) &&
       (lVar8 = local_70[1], local_70[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  uVar5 = *(undefined8 *)param_2;
  lVar8 = *(long *)(param_2 + 8);
  puVar4 = (undefined8 *)(*(long *)(this + 400) + uVar11 * 0x10);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
  }
  plVar10 = (long *)puVar4[1];
  *puVar4 = uVar5;
  puVar4[1] = lVar8;
  if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar8 = plVar10[2];
    plVar10[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


