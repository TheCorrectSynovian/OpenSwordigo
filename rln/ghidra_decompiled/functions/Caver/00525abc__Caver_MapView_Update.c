/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00525abc
 * Function: Caver::MapView::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::Update(float) */

void Caver::MapView::Update(float param_1)

{
  float *pfVar1;
  long lVar2;
  MapView *in_x0;
  Rectangle *in_x1;
  Rectangle *extraout_x1;
  GUIPropertyValue *in_x2;
  long lVar3;
  long *plVar4;
  float fVar5;
  undefined8 uVar6;
  GUIPropertyValue aGStack_c8 [16];
  long *local_b8;
  GUIPropertyValue aGStack_b0 [16];
  long *local_a0;
  undefined8 *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  float local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  float local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0x2d8) != 0) {
    local_60 = *(float *)(*(long *)(in_x0 + 0x2a8) + 0x7c);
    uStack_5c = *(undefined4 *)(*(long *)(in_x0 + 0x2a8) + 0x80);
    fVar5 = local_60 * -0.5 + -3.0;
    uVar6 = *(undefined8 *)
             (**(long **)(*(long *)(in_x0 + 0x118) + **(long **)(in_x0 + 0x2b8) * 0x10) + 8);
    local_58 = CONCAT44((float)((ulong)uVar6 >> 0x20) + 7.0,(float)uVar6 + fVar5);
                    /* try { // try from 00525b44 to 00626023 has its CatchHandler @ 00525b44
                       catch() { ... } // from try @ 00525b44 with catch @ 00525b44
                       catch() { ... } // from try @ 00526028 with catch @ 00525b44 */
    uVar6 = *(undefined8 *)
             (**(long **)(*(long *)(in_x0 + 0x118) + **(long **)(in_x0 + 0x2c8) * 0x10) + 8);
    local_68 = CONCAT44((float)((ulong)uVar6 >> 0x20) + 7.0,(float)uVar6 + fVar5);
    local_50 = local_60;
    uStack_4c = uStack_5c;
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)&local_58,in_x1);
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)&local_68,extraout_x1);
    lVar3 = *(long *)(in_x0 + 0x2d8);
    if (*(int *)(lVar3 + 0xa0) == 0) {
      if (*(char *)(lVar3 + 100) == '\0') {
        pfVar1 = *(float **)(lVar3 + 0x78);
        plVar4 = *(long **)(lVar3 + 0x80);
      }
      else {
        pfVar1 = *(float **)(lVar3 + 0x90);
        plVar4 = *(long **)(lVar3 + 0x98);
      }
    }
    else {
      pfVar1 = *(float **)(lVar3 + 0xa8);
      plVar4 = *(long **)(lVar3 + 0xb0);
    }
    if (plVar4 != (long *)0x0) {
      plVar4[1] = plVar4[1] + 1;
    }
    GUIPropertyValue::InterpolatedValue(aGStack_b0,aGStack_c8,in_x2,*pfVar1);
    uStack_78 = local_90[1];
    local_80 = *local_90;
    if ((plStack_88 != (long *)0x0) &&
       (lVar3 = plStack_88[1], plStack_88[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      lVar3 = plStack_88[2];
      plStack_88[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plStack_88 + 0x18))(plStack_88);
      }
    }
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if ((local_b8 != (long *)0x0) &&
       (lVar3 = local_b8[1], local_b8[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      lVar3 = local_b8[2];
      local_b8[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_b8 + 0x18))(local_b8);
      }
    }
    if ((local_a0 != (long *)0x0) &&
       (lVar3 = local_a0[1], local_a0[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar3 = local_a0[2];
      local_a0[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_a0 + 0x18))(local_a0);
      }
    }
    GUIView::SetFrame(*(GUIView **)(in_x0 + 0x2a8),(Rectangle *)&local_80);
    UpdateTargetPath(in_x0);
    if (*(char *)(*(long *)(in_x0 + 0x2d8) + 0x54) != '\0') {
      plVar4 = *(long **)(in_x0 + 0x2e0);
      *(undefined8 *)(in_x0 + 0x2d8) = 0;
      *(undefined8 *)(in_x0 + 0x2e0) = 0;
      if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar3 = plVar4[2];
        plVar4[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
    }
  }
  GUIView::Update((GUIView *)in_x0,param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


