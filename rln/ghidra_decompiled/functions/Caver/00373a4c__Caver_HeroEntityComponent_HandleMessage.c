/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00373a4c
 * Function: Caver::HeroEntityComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(HeroEntityComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HeroEntityComponent::HandleMessage(int, void*) */

uint __thiscall
Caver::HeroEntityComponent::HandleMessage(HeroEntityComponent *this,int param_1,void *param_2)

{
  CollisionShapeComponent *pCVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  PortalComponent *this_00;
  long *plVar6;
  HeroEntityComponent *this_01;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  char local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  switch(param_1) {
  case 7:
    uStack_68 = *(undefined8 *)((long)param_2 + 0x18);
    local_70 = *(undefined8 *)((long)param_2 + 0x10);
    uStack_58 = *(undefined8 *)((long)param_2 + 0x28);
    local_60 = *(undefined8 *)((long)param_2 + 0x20);
    local_4c = *(char *)((long)param_2 + 0x34);
    local_50 = *(undefined4 *)((long)param_2 + 0x30);
    lVar7 = *(long *)param_2;
    pCVar1 = *(CollisionShapeComponent **)((long)param_2 + 8);
    if (((local_4c == '\0') && (*(char *)(lVar7 + 0x17c) != '\0')) &&
       (pCVar1[0x17d] != (CollisionShapeComponent)0x0)) {
      HandleDamageCollision
                (this,(CollisionShapeComponent *)(ulong)(uint)param_1,pCVar1,
                 (CollisionInfo *)&local_70);
      cVar2 = *(char *)(lVar7 + 0x17b);
    }
    else {
      cVar2 = *(char *)(lVar7 + 0x17b);
    }
    if (cVar2 != '\0') {
      if (*(int *)(pCVar1 + 0x180) == 5) {
        lVar7 = SceneObject::ComponentWithInterface
                          (*(SceneObject **)(pCVar1 + 0x28),(long)PTR_Interface_007e4ee0);
        if (((lVar7 == 0) || (*(char *)(lVar7 + 0x70) == '\0')) ||
           (DAT_006883d0 <
            (float)*(undefined8 *)(lVar7 + 0xe0) *
            (float)*(undefined8 *)(*(long *)(pCVar1 + 0x28) + 0x68) +
            (float)((ulong)*(undefined8 *)(lVar7 + 0xe0) >> 0x20) *
            (float)((ulong)*(undefined8 *)(*(long *)(pCVar1 + 0x28) + 0x68) >> 0x20))) {
          HandleItemCollection(this,*(SceneObject **)(pCVar1 + 0x28));
        }
      }
      else if (((*(int *)(pCVar1 + 0x180) == 4) &&
               (this_00 = (PortalComponent *)
                          SceneObject::ComponentWithInterface
                                    (*(SceneObject **)(pCVar1 + 0x28),(long)PTR_Interface_007e68e8),
               this_00 != (PortalComponent *)0x0)) && (*(long *)(this + 0x140) == 0)) {
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        *(PortalComponent **)(this + 0x140) = this_00;
        *(int *)(pCVar1 + 8) = *(int *)(pCVar1 + 8) + 1;
        plVar6 = *(long **)(this + 0x148);
        *(CollisionShapeComponent **)(this + 0x148) = pCVar1;
        if ((plVar6 != (long *)0x0) &&
           (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
          (**(code **)(*plVar6 + 8))();
        }
        PortalComponent::Activate(this_00);
      }
    }
    break;
  case 0xd:
    this_01 = (HeroEntityComponent *)
              SceneObject::ComponentWithInterface
                        (*(SceneObject **)((long)param_2 + 8),(long)PTR_Interface_007e4d78);
    if (this_01 != (HeroEntityComponent *)0x0) {
      TargetObject(this_01,(intrusive_ptr *)((long)param_2 + 8),*(int *)((long)param_2 + 0x28));
    }
    break;
  case 0xe:
    HandleDamageImpact(this,param_2);
    break;
  case 0x15:
    if (((((_DAT_00684434 < *(float *)(this + 0x178)) && (*(float *)(this + 0x80) < _DAT_00684434))
         && (0.0 < *(float *)(this + 0x8c))) &&
        ((this[0x90] == (HeroEntityComponent)0x0 && (this[0x91] == (HeroEntityComponent)0x0)))) &&
       ((DAT_00684314 < *(float *)(this + 0x8c) && (*(long *)(this + 0x98) != 0)))) {
      AddSafePosition(this);
    }
  }
  uVar5 = EntityComponent::HandleMessage((EntityComponent *)this,param_1,param_2);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


