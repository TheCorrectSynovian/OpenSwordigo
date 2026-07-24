/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035f940
 * Function: Caver::CharControllerComponent::PickupWithoutAnimation
 * Signature: undefined __thiscall PickupWithoutAnimation(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::PickupWithoutAnimation() */

void __thiscall
Caver::CharControllerComponent::PickupWithoutAnimation(CharControllerComponent *this)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  SceneObject *this_00;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  Component *pCVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a0 [16];
  float local_90 [2];
  float local_88;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x2c0) == 0) {
    pCVar11 = *(Component **)(this + 400);
    if (pCVar11 == (Component *)0x0) {
      pCVar11 = *(Component **)(this + 0x98);
      if (pCVar11 == (Component *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        pCVar11 = *(Component **)(this + 0x98);
        if (pCVar11 != (Component *)0x0) goto LAB_0035f99c;
      }
      else {
LAB_0035f99c:
        *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
      }
      plVar7 = *(long **)(this + 400);
      *(Component **)(this + 400) = pCVar11;
      if ((plVar7 != (long *)0x0) &&
         (iVar6 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar6, iVar6 == 0)) {
        (**(code **)(*plVar7 + 8))();
        pCVar11 = *(Component **)(this + 400);
      }
      if (pCVar11 != (Component *)0x0) goto LAB_0035f9d8;
LAB_0035fc08:
      lVar9 = *(long *)(this + 0x2c0);
    }
    else {
LAB_0035f9d8:
      if (*(long *)(pCVar11 + 0x80) == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar11 + 0x70),pCVar11);
        if (*(long *)(pCVar11 + 0x80) != 0) {
          pCVar11 = *(Component **)(this + 400);
          if (pCVar11 == (Component *)0x0) goto LAB_0035f9e4;
          goto LAB_0035fa60;
        }
        goto LAB_0035fc08;
      }
      if (pCVar11 == (Component *)0x0) {
LAB_0035f9e4:
        pCVar11 = *(Component **)(this + 0x98);
        if (pCVar11 == (Component *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          pCVar11 = *(Component **)(this + 0x98);
          if (pCVar11 != (Component *)0x0) goto LAB_0035fa00;
        }
        else {
LAB_0035fa00:
          *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
        }
        plVar7 = *(long **)(this + 400);
        *(Component **)(this + 400) = pCVar11;
        if ((plVar7 == (long *)0x0) ||
           (iVar6 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar6, iVar6 != 0))
        goto LAB_0035fa60;
        (**(code **)(*plVar7 + 8))();
        pCVar11 = *(Component **)(this + 400);
        plVar7 = *(long **)(pCVar11 + 0x80);
        if (plVar7 != (long *)0x0) goto LAB_0035fa68;
LAB_0035fa74:
        ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar11 + 0x70),pCVar11);
        plVar7 = *(long **)(pCVar11 + 0x80);
        lVar9 = plVar7[0x11];
      }
      else {
LAB_0035fa60:
        plVar7 = *(long **)(pCVar11 + 0x80);
        if (plVar7 == (long *)0x0) goto LAB_0035fa74;
LAB_0035fa68:
        lVar9 = plVar7[0x11];
      }
      if ((lVar9 == 0) && ((**(code **)(*plVar7 + 0x40))(plVar7), plVar7[0x11] == 0))
      goto LAB_0035fc08;
      pCVar11 = *(Component **)(this + 400);
      if (pCVar11 == (Component *)0x0) {
        pCVar11 = *(Component **)(this + 0x98);
        if (pCVar11 == (Component *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          pCVar11 = *(Component **)(this + 0x98);
          if (pCVar11 != (Component *)0x0) goto LAB_0035fb10;
        }
        else {
LAB_0035fb10:
          *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
        }
        plVar7 = *(long **)(this + 400);
        *(Component **)(this + 400) = pCVar11;
        if ((plVar7 == (long *)0x0) ||
           (iVar6 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar6, iVar6 != 0))
        goto LAB_0035faac;
        (**(code **)(*plVar7 + 8))();
        pCVar11 = *(Component **)(this + 400);
        plVar7 = *(long **)(pCVar11 + 0x80);
        if (plVar7 != (long *)0x0) goto LAB_0035fab4;
LAB_0035fb50:
        ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar11 + 0x70),pCVar11);
        plVar7 = *(long **)(pCVar11 + 0x80);
        lVar9 = plVar7[0x11];
      }
      else {
LAB_0035faac:
        plVar7 = *(long **)(pCVar11 + 0x80);
        if (plVar7 == (long *)0x0) goto LAB_0035fb50;
LAB_0035fab4:
        lVar9 = plVar7[0x11];
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar7 + 0x40))(plVar7);
        lVar9 = plVar7[0x11];
      }
      puVar12 = *(undefined8 **)(lVar9 + 0x18);
      FUN_00666bb8(local_78,"BoneRightHand2",auStack_80);
      iVar6 = Skeleton::BoneIndexForName((Skeleton *)*puVar12,(string *)local_78);
      if (iVar6 < 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = puVar12[2] + (long)iVar6 * 0xdc;
      }
      *(long *)(this + 0x2c0) = lVar9;
      puVar5 = PTR_DAT_007e5de8;
      if ((undefined *)(local_78[0] + -0x18) == PTR_DAT_007e5de8) {
LAB_0035fba0:
        pCVar11 = *(Component **)(this + 400);
        if (pCVar11 != (Component *)0x0) goto LAB_0035fba8;
LAB_0035fd88:
        pCVar11 = *(Component **)(this + 0x98);
        if (pCVar11 == (Component *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          pCVar11 = *(Component **)(this + 0x98);
          if (pCVar11 != (Component *)0x0) goto LAB_0035fda4;
        }
        else {
LAB_0035fda4:
          *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
        }
        plVar7 = *(long **)(this + 400);
        *(Component **)(this + 400) = pCVar11;
        if ((plVar7 == (long *)0x0) ||
           (iVar6 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar6, iVar6 != 0))
        goto LAB_0035fba8;
        (**(code **)(*plVar7 + 8))();
        pCVar11 = *(Component **)(this + 400);
        plVar7 = *(long **)(pCVar11 + 0x80);
        if (plVar7 == (long *)0x0) goto LAB_0035fde4;
LAB_0035fbb0:
        lVar9 = plVar7[0x11];
      }
      else {
        piVar10 = (int *)(local_78[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar10;
          *piVar10 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (0 < iVar6) goto LAB_0035fba0;
        operator_delete((undefined *)(local_78[0] + -0x18));
        pCVar11 = *(Component **)(this + 400);
        if (pCVar11 == (Component *)0x0) goto LAB_0035fd88;
LAB_0035fba8:
        plVar7 = *(long **)(pCVar11 + 0x80);
        if (plVar7 != (long *)0x0) goto LAB_0035fbb0;
LAB_0035fde4:
        ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar11 + 0x70),pCVar11);
        plVar7 = *(long **)(pCVar11 + 0x80);
        lVar9 = plVar7[0x11];
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar7 + 0x40))(plVar7);
        lVar9 = plVar7[0x11];
      }
      puVar12 = *(undefined8 **)(lVar9 + 0x18);
      FUN_00666bb8(local_78,"BoneLeftHand2",auStack_80);
      iVar6 = Skeleton::BoneIndexForName((Skeleton *)*puVar12,(string *)local_78);
      if (iVar6 < 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = puVar12[2] + (long)iVar6 * 0xdc;
      }
      *(long *)(this + 0x2c8) = lVar9;
      if ((undefined *)(local_78[0] + -0x18) == puVar5) goto LAB_0035fc08;
      piVar10 = (int *)(local_78[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar10;
        *piVar10 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (0 < iVar6) goto LAB_0035fc08;
      operator_delete((undefined *)(local_78[0] + -0x18));
      lVar9 = *(long *)(this + 0x2c0);
    }
    if (lVar9 == 0) goto LAB_0035fcec;
  }
  this[0x2bd] = (CharControllerComponent)0x1;
  SceneObject::AddChildObject(*(SceneObject **)(this + 0x28),(intrusive_ptr *)(this + 0x298));
  this_00 = *(SceneObject **)(this + 0x298);
  *(undefined8 *)(this_00 + 0x68) = 0;
  SceneObject::HandleMessage(this_00,0x10,(void *)0x0);
  puVar5 = PTR_Interface_007e5b08;
  puVar12 = *(undefined8 **)(*(long *)(this + 0x298) + 0xc0);
  puVar1 = *(undefined8 **)(*(long *)(this + 0x298) + 200);
  if (puVar12 != puVar1) {
    do {
      uVar8 = (**(code **)(*(long *)*puVar12 + 0xa0))((long *)*puVar12,puVar5);
      if (((uVar8 & 1) != 0) && (plVar7 = (long *)*puVar12, *(char *)((long)plVar7 + 0x17b) != '\0')
         ) {
        (**(code **)(*plVar7 + 0xe0))(local_90,plVar7);
        fVar13 = local_90[0] + local_88 * 0.5;
        (**(code **)(*plVar7 + 0xe0))(auStack_a0,plVar7);
        fVar14 = *(float *)(*(long *)(this + 0x298) + 0x8c);
        *(ulong *)(this + 0x2dc) =
             CONCAT44(-(*(float *)((ulong)auStack_a0 | 4) * fVar14),-(fVar13 * fVar14));
      }
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar12);
  }
LAB_0035fcec:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


