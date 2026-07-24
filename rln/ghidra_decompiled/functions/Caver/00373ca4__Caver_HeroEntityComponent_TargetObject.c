/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00373ca4
 * Function: Caver::HeroEntityComponent::TargetObject
 * Signature: undefined __thiscall TargetObject(HeroEntityComponent * this, intrusive_ptr * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&, int) */

void __thiscall
Caver::HeroEntityComponent::TargetObject
          (HeroEntityComponent *this,intrusive_ptr *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  GameEvent *pGVar5;
  int *piVar6;
  GameEvent *pGVar7;
  int iVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = SceneObject::ComponentWithInterface(*(SceneObject **)param_1,(long)PTR_Interface_007e7450)
  ;
  if (lVar4 != 0) {
    pGVar5 = operator_new(0x70);
    *(undefined4 *)pGVar5 = 10;
    pGVar7 = pGVar5 + 0x10;
    *(undefined8 *)pGVar7 = 0;
    *(undefined8 *)(pGVar5 + 0x18) = 0;
    *(GameEvent **)(pGVar5 + 0x20) = pGVar7;
    *(GameEvent **)(pGVar5 + 0x28) = pGVar7;
    *(undefined8 *)(pGVar5 + 0x30) = 0;
    pGVar7 = pGVar5 + 0x40;
    *(undefined8 *)pGVar7 = 0;
    *(undefined8 *)(pGVar5 + 0x48) = 0;
    *(GameEvent **)(pGVar5 + 0x50) = pGVar7;
    *(GameEvent **)(pGVar5 + 0x58) = pGVar7;
    *(undefined8 *)(pGVar5 + 0x60) = 0;
    lVar4 = *(long *)param_1;
    *(long *)(pGVar5 + 0x68) = lVar4;
    if (lVar4 != 0) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    FUN_00666bb8(local_48,"health",auStack_50);
    piVar6 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                  *)(pGVar5 + 0x38),(string *)local_48);
    *piVar6 = param_2;
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar6;
        *piVar6 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    GameEvent::SendEvent(pGVar5);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


