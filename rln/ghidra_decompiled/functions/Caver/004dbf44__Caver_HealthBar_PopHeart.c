/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dbf44
 * Function: Caver::HealthBar::PopHeart
 * Signature: undefined __thiscall PopHeart(HealthBar * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::PopHeart(int) */

void __thiscall Caver::HealthBar::PopHeart(HealthBar *this,int param_1)

{
  long lVar1;
  GUIAnimation *pGVar2;
  Vector2 *extraout_x1;
  Vector2 *extraout_x1_00;
  Vector2 *extraout_x1_01;
  Vector2 *extraout_x1_02;
  Vector2 *extraout_x1_03;
  Vector2 *extraout_x1_04;
  Vector2 *pVVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  GUIAnimation *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pGVar2 = operator_new(0xc0);
  GUIAnimation::GUIAnimation(pGVar2);
  local_58 = pGVar2;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_50,pGVar2);
  boost::detail::sp_enable_shared_from_this(&local_58,pGVar2,pGVar2);
  pGVar2 = local_58;
                    /* catch() { ... } // from try @ 004dbf24 with catch @ 004dbfa8 */
  local_60 = 0x3d4ccccd3d4ccccd;
  GUIPropertyValue::ValueWithVector2((GUIPropertyValue *)&local_60,extraout_x1);
  *(undefined4 *)(pGVar2 + 0x70) = local_80;
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar5 = *(long **)(pGVar2 + 0x80);
  *(undefined8 *)(pGVar2 + 0x78) = uStack_78;
  *(long **)(pGVar2 + 0x80) = local_70;
  pVVar3 = extraout_x1_00;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    pVVar3 = extraout_x1_01;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      pVVar3 = extraout_x1_02;
    }
  }
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) && (lVar4 = local_70[1], local_70[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    pVVar3 = extraout_x1_03;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      pVVar3 = extraout_x1_04;
    }
  }
  pGVar2 = local_58;
  local_60 = NEON_fmov(0x3f800000,4);
  GUIPropertyValue::ValueWithVector2((GUIPropertyValue *)&local_60,pVVar3);
  *(undefined4 *)(pGVar2 + 0x88) = local_80;
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar5 = *(long **)(pGVar2 + 0x98);
  *(undefined8 *)(pGVar2 + 0x90) = uStack_78;
  *(long **)(pGVar2 + 0x98) = local_70;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) && (lVar4 = local_70[1], local_70[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  pGVar2 = local_58;
  local_60 = DAT_00692290;
  local_88 = DAT_00692298;
  GUIAnimationCurve::GUIAnimationCurve
            ((GUIAnimationCurve *)&local_80,(Vector2 *)&local_60,(Vector2 *)&local_88);
  *(undefined8 *)(pGVar2 + 0x3c) = uStack_78;
  *(ulong *)(pGVar2 + 0x34) = CONCAT44(uStack_7c,local_80);
  *(undefined8 *)(pGVar2 + 0x4c) = uStack_68;
  *(long **)(pGVar2 + 0x44) = local_70;
  *(undefined4 *)(local_58 + 0x5c) = 0x3e4ccccd;
  AddAnimationToHeart(this,param_1,(shared_ptr *)&local_58);
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar4 = local_50[2];
    local_50[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


