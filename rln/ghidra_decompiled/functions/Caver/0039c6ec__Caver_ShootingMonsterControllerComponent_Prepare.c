/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c6ec
 * Function: Caver::ShootingMonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(ShootingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShootingMonsterControllerComponent::Prepare() */

void __thiscall
Caver::ShootingMonsterControllerComponent::Prepare(ShootingMonsterControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  AnimBlendNode *this_00;
  int iVar4;
  string *psVar5;
  long *plVar6;
  undefined1 auStack_58 [8];
  long *local_50;
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  MonsterControllerComponent::Prepare((MonsterControllerComponent *)this);
  plVar6 = *(long **)(this + 0xe0);
  if (plVar6 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar6 = *(long **)(this + 0xe0);
    if (plVar6 == (long *)0x0) goto LAB_0039c878;
  }
  if (*(long *)(this + 0xf8) == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    if (*(long *)(this + 0xf8) == 0) goto LAB_0039c878;
    plVar6 = *(long **)(this + 0xe0);
  }
  this_00 = operator_new(0x30);
  if (plVar6 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar6 = *(long **)(this + 0xe0);
  }
  local_48[0] = (long *)(**(code **)(*plVar6 + 0x108))(plVar6);
  if (local_48[0] != (long *)0x0) {
    *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
  }
  plVar6 = *(long **)(this + 0xf8);
  if (plVar6 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar6 = *(long **)(this + 0xf8);
  }
  local_50 = (long *)(**(code **)(*plVar6 + 0x108))();
  if (local_50 != (long *)0x0) {
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
  }
  AnimBlendNode::AnimBlendNode
            (this_00,(intrusive_ptr *)local_48,(intrusive_ptr *)&local_50,_DAT_00684434,
             _DAT_00684434);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar6 = *(long **)(this + 0x100);
  *(AnimBlendNode **)(this + 0x100) = this_00;
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  if ((local_50 != (long *)0x0) &&
     (iVar4 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  if ((local_48[0] != (long *)0x0) &&
     (iVar4 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*local_48[0] + 8))();
  }
LAB_0039c878:
  psVar5 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
  FUN_00666bb8(&local_50,"snart_projectile",auStack_58);
  ObjectLibrary::TemplateForName(psVar5,SUB81(&local_50,0));
  if (local_48[0] != (long *)0x0) {
    *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
  }
  plVar6 = *(long **)(this + 0x110);
  *(long **)(this + 0x110) = local_48[0];
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  if ((local_48[0] != (long *)0x0) &&
     (iVar4 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*local_48[0] + 8))();
  }
  if (local_50 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar6 = local_50 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = (int)*plVar6;
      *(int *)plVar6 = iVar4 + -1;
    }
    else {
      do {
        iVar4 = (int)*plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar4 < 1) {
      operator_delete(local_50 + -3);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


