/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00314c88
 * Function: Caver::BoneControlledCollisionShapeComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BoneControlledCollisionShapeComponent::Update(float) */

void Caver::BoneControlledCollisionShapeComponent::Update(float param_1)

{
  char cVar1;
  long lVar2;
  BoneControlledCollisionShapeComponent *in_x0;
  long lVar3;
  Circle *extraout_x1;
  long *plVar4;
  undefined4 in_register_00005004;
  undefined8 extraout_d0;
  undefined8 uVar5;
  float local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float afStack_c0 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  uVar5 = CONCAT44(in_register_00005004,param_1);
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0x1f0) == 0) {
    lVar3 = BoneForName(in_x0,(string *)(in_x0 + 0x1e8));
    *(long *)(in_x0 + 0x1f0) = lVar3;
    uVar5 = extraout_d0;
    if (lVar3 == 0) goto LAB_00314e54;
  }
  plVar4 = *(long **)(in_x0 + 0x1e0);
  if (plVar4 == (long *)0x0) {
    uVar5 = ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x1d0),(Component *)in_x0);
    plVar4 = *(long **)(in_x0 + 0x1e0);
    lVar3 = plVar4[0x11];
    if (lVar3 != 0) goto LAB_00314cd8;
LAB_00314e38:
    (**(code **)(*plVar4 + 0x40))(uVar5,plVar4);
    cVar1 = *(char *)(plVar4[0x11] + 0x10);
  }
  else {
    lVar3 = plVar4[0x11];
    if (lVar3 == 0) goto LAB_00314e38;
LAB_00314cd8:
    cVar1 = *(char *)(lVar3 + 0x10);
  }
  if (cVar1 != '\0') {
    if (*(long *)(in_x0 + 0x1e0) == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x1d0),(Component *)in_x0);
    }
    ModelComponent::WorldMatrix();
    C_Matrix4Mul(afStack_c0,(float *)(*(long *)(in_x0 + 0x1f0) + 0x5c),(float *)&local_80);
    if (*(char *)(*(long *)(in_x0 + 0x28) + 0x90) != '\0') {
      uStack_138 = _UNK_006837d8;
      local_140 = _DAT_006837d0;
      uStack_128 = _UNK_006837e8;
      uStack_130 = _DAT_006837e0;
      uStack_118 = _UNK_006837f8;
      local_120 = _DAT_006837f0;
      uStack_108 = _UNK_00683808;
      uStack_110 = _DAT_00683800;
      C_Matrix4Mul((float *)&local_140,(float *)&local_80,(float *)&local_100);
      uStack_78 = uStack_f8;
      local_80 = local_100;
      uStack_68 = uStack_e8;
      plStack_70 = local_f0;
      uStack_58 = uStack_d8;
      local_60 = local_e0;
      uStack_48 = uStack_c8;
      uStack_50 = uStack_d0;
    }
    if (*(int *)(in_x0 + 0x70) == 2) {
      local_148 = (*(float **)(in_x0 + 0x78))[2];
      local_170 = **(float **)(in_x0 + 0x78);
      local_168 = 0;
      uStack_164 = 0x3f800000;
      uStack_16c = 0;
      C_Matrix4Vector4Mul((float *)&local_80,&local_170,(float *)&local_100);
      Vector3::Vector3((Vector3 *)&local_160,(Vector4 *)&local_100);
      local_150 = local_160;
      Shape::ShapeWithCircle((Shape *)&local_150,extraout_x1);
      CollisionShapeComponent::SetUpdatedShape((CollisionShapeComponent *)in_x0,(Shape *)&local_100)
      ;
      if ((local_f0 != (long *)0x0) &&
         (lVar3 = local_f0[1], local_f0[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*local_f0 + 0x10))(local_f0);
        lVar3 = local_f0[2];
        local_f0[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*local_f0 + 0x18))(local_f0);
        }
      }
      *(undefined4 *)(in_x0 + 0x1f8) = local_158;
    }
  }
LAB_00314e54:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


