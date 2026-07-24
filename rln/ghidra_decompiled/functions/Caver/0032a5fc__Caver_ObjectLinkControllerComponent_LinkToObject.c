/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032a5fc
 * Function: Caver::ObjectLinkControllerComponent::LinkToObject
 * Signature: undefined __thiscall LinkToObject(ObjectLinkControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::LinkToObject(boost::intrusive_ptr<Caver::SceneObject>
   const&) */

void __thiscall
Caver::ObjectLinkControllerComponent::LinkToObject
          (ObjectLinkControllerComponent *this,intrusive_ptr *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  TransformComponent *this_00;
  SceneObject *pSVar5;
  long lVar6;
  undefined8 *puVar7;
  ObjectLinkControllerComponent OVar8;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar9;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pSVar5 = *(SceneObject **)param_1;
  if (pSVar5 != (SceneObject *)0x0) {
    *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x78);
  *(SceneObject **)(this + 0x78) = pSVar5;
  if ((plVar3 != (long *)0x0) &&
     (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar3 + 8))();
    pSVar5 = *(SceneObject **)(this + 0x78);
  }
  local_50 = *(long **)(this + 0x28);
  if (local_50 != (long *)0x0) {
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
  }
  SceneObject::AddChildObject(pSVar5,(intrusive_ptr *)&local_50);
  if ((local_50 != (long *)0x0) &&
     (iVar2 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  plVar3 = (long *)SceneObject::ComponentWithInterface
                             (*(SceneObject **)(this + 0x78),(long)PTR_Interface_007e7860);
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  plVar4 = *(long **)(this + 0x88);
  *(long **)(this + 0x88) = plVar3;
  if ((plVar4 == (long *)0x0) ||
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 != 0)) {
    OVar8 = this[0xe8];
    fVar9 = extraout_s0;
    if (plVar3 != (long *)0x0) goto LAB_0032a6f4;
LAB_0032a770:
    lVar6 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x78),(long)PTR_Interface_007e6220);
    if (lVar6 != 0) {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0xa0);
    *(long *)(this + 0xa0) = lVar6;
    fVar9 = extraout_s0_01;
    if ((plVar3 != (long *)0x0) &&
       (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
      fVar9 = (float)(**(code **)(*plVar3 + 8))(plVar3);
      lVar6 = *(long *)(this + 0xa0);
    }
    if (OVar8 == (ObjectLinkControllerComponent)0x0) {
joined_r0x0032a7b0:
      if (lVar6 == 0) goto LAB_0032a884;
    }
  }
  else {
    fVar9 = (float)(**(code **)(*plVar4 + 8))();
    plVar3 = *(long **)(this + 0x88);
    OVar8 = this[0xe8];
    if (plVar3 == (long *)0x0) goto LAB_0032a770;
LAB_0032a6f4:
    if (*(long *)(*(long *)(this + 0x90) + -0x18) == 0) goto LAB_0032a770;
    if (plVar3 != (long *)0x0) {
      lVar6 = plVar3[0x11];
      if (lVar6 == 0) {
        fVar9 = (float)(**(code **)(*plVar3 + 0x40))(plVar3);
        if (plVar3[0x11] == 0) goto LAB_0032a814;
        plVar3 = *(long **)(this + 0x88);
        lVar6 = plVar3[0x11];
        if (lVar6 != 0) goto LAB_0032a710;
        fVar9 = (float)(**(code **)(*plVar3 + 0x40))(plVar3);
        lVar6 = *(long *)(plVar3[0x11] + 0x18);
      }
      else {
LAB_0032a710:
        lVar6 = *(long *)(lVar6 + 0x18);
      }
      if (lVar6 == 0) goto LAB_0032a814;
      plVar3 = *(long **)(this + 0x88);
      puVar7 = (undefined8 *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar6 = plVar3[0x11];
        if (lVar6 == 0) {
          (**(code **)(*plVar3 + 0x40))(plVar3);
          if (plVar3[0x11] == 0) {
            puVar7 = (undefined8 *)0x0;
            goto LAB_0032a72c;
          }
          plVar3 = *(long **)(this + 0x88);
          lVar6 = plVar3[0x11];
          if (lVar6 == 0) {
            (**(code **)(*plVar3 + 0x40))(plVar3);
            lVar6 = plVar3[0x11];
          }
        }
        puVar7 = *(undefined8 **)(lVar6 + 0x18);
      }
LAB_0032a72c:
      iVar2 = Skeleton::BoneIndexForName((Skeleton *)*puVar7,(string *)(this + 0x90));
      if (iVar2 < 0) {
        lVar6 = 0;
        *(undefined8 *)(this + 0x98) = 0;
      }
      else {
        lVar6 = puVar7[2] + (long)iVar2 * 0xdc;
        *(long *)(this + 0x98) = lVar6;
      }
      fVar9 = extraout_s0_00;
      if (OVar8 != (ObjectLinkControllerComponent)0x0) goto LAB_0032a818;
      goto joined_r0x0032a7b0;
    }
LAB_0032a814:
    if (OVar8 == (ObjectLinkControllerComponent)0x0) goto LAB_0032a884;
  }
LAB_0032a818:
  pSVar5 = *(SceneObject **)(this + 0x28);
  this_00 = (TransformComponent *)
            SceneObject::ComponentWithInterface(pSVar5,(long)PTR_Interface_007e6220);
  fVar9 = extraout_s0_02;
  if (this_00 == (TransformComponent *)0x0) {
    this_00 = operator_new(0xb0);
    TransformComponent::TransformComponent(this_00);
    fVar9 = (float)SceneObject::AddComponent(pSVar5,(Component *)this_00);
  }
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar3 = *(long **)(this + 0x120);
  *(TransformComponent **)(this + 0x120) = this_00;
  if ((plVar3 != (long *)0x0) &&
     (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
    fVar9 = (float)(**(code **)(*plVar3 + 8))();
  }
LAB_0032a884:
  UpdateLink(fVar9);
  this[0x80] = (ObjectLinkControllerComponent)0x1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


