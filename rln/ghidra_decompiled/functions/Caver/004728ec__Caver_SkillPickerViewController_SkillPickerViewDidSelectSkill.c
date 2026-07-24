/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004728ec
 * Function: Caver::SkillPickerViewController::SkillPickerViewDidSelectSkill
 * Signature: undefined __thiscall SkillPickerViewDidSelectSkill(SkillPickerViewController * this, SkillPickerView * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerViewController::SkillPickerViewDidSelectSkill(Caver::SkillPickerView*,
   boost::shared_ptr<Caver::Skill> const&) */

void __thiscall
Caver::SkillPickerViewController::SkillPickerViewDidSelectSkill
          (SkillPickerViewController *this,SkillPickerView *param_1,shared_ptr *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  bool bVar4;
  GameEvent *pGVar5;
  SkillPickerView *extraout_x1;
  SkillPickerView *extraout_x1_00;
  long lVar6;
  GameEvent *pGVar7;
  long *plVar8;
  
  lVar6 = *(long *)(*(long *)(this + 0x50) + 0x80);
  plVar3 = *(long **)(*(long *)(this + 0x50) + 0x88);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = plVar3[1] + 1;
  }
  lVar1 = *(long *)(lVar6 + 0x68);
  plVar8 = *(long **)(lVar6 + 0x70);
  if (plVar8 == (long *)0x0) {
    bVar4 = *(long *)param_2 != lVar1;
  }
  else {
    bVar4 = *(long *)param_2 != lVar1;
    if (plVar8[1] == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar6 = plVar8[2];
      plVar8[2] = lVar6 + -1;
      param_1 = extraout_x1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        param_1 = extraout_x1_00;
      }
    }
  }
  if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    lVar6 = plVar3[2];
    plVar3[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (!bVar4) {
    return;
  }
  lVar6 = *(long *)(*(long *)(this + 0x50) + 0x80);
  plVar3 = *(long **)(*(long *)(this + 0x50) + 0x88);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = plVar3[1] + 1;
  }
  uVar2 = *(undefined8 *)param_2;
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  plVar8 = *(long **)(lVar6 + 0x70);
  *(undefined8 *)(lVar6 + 0x68) = uVar2;
  *(long *)(lVar6 + 0x70) = lVar1;
  if ((plVar8 != (long *)0x0) && (lVar6 = plVar8[1], plVar8[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar6 = plVar8[2];
    plVar8[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar6 = plVar3[2];
    plVar3[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pGVar5 = operator_new(0x68);
  *(undefined4 *)pGVar5 = 0xf;
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
  GameEvent::SendEvent(pGVar5);
  return;
}


