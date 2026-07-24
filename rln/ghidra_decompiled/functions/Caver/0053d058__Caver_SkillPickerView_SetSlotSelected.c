/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053d058
 * Function: Caver::SkillPickerView::SetSlotSelected
 * Signature: undefined __thiscall SetSlotSelected(SkillPickerView * this, int param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::SetSlotSelected(int, bool) */

void __thiscall
Caver::SkillPickerView::SetSlotSelected(SkillPickerView *this,int param_1,bool param_2)

{
  undefined8 *puVar1;
  GUILabel *this_00;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
  MenuItemSlot::SetSelected(*(MenuItemSlot **)(*(long *)(this + 0x128) + uVar4),param_2);
  puVar1 = (undefined8 *)(*(long *)(this + 0x130) + uVar4);
  this_00 = (GUILabel *)*puVar1;
  plVar2 = (long *)puVar1[1];
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  if (this_00 != (GUILabel *)0x0) {
    if (param_2) {
      if (((this_00[0x108] != (GUILabel)0xfa) || (this_00[0x109] != (GUILabel)0xe6)) ||
         ((this_00[0x10a] != (GUILabel)0xa0 || (this_00[0x10b] != (GUILabel)0xff)))) {
        plVar5 = *(long **)(this_00 + 0x118);
        *(undefined4 *)(this_00 + 0x108) = 0xffa0e6fa;
        *(undefined8 *)(this_00 + 0x110) = 0;
        *(undefined8 *)(this_00 + 0x118) = 0;
        if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0))
        {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          lVar3 = plVar5[2];
          plVar5[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        GUILabel::UpdateText(this_00);
      }
    }
    else if ((((this_00[0x108] != (GUILabel)0x7d) || (this_00[0x109] != (GUILabel)0x73)) ||
             (this_00[0x10a] != (GUILabel)0x50)) || (this_00[0x10b] != (GUILabel)0xff)) {
      plVar5 = *(long **)(this_00 + 0x118);
      *(undefined4 *)(this_00 + 0x108) = 0xff50737d;
      *(undefined8 *)(this_00 + 0x110) = 0;
      *(undefined8 *)(this_00 + 0x118) = 0;
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      GUILabel::UpdateText(this_00);
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0053d224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


