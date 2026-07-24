/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba220
 * Function: Caver::GUITextFieldImpl::UpdateText
 * Signature: undefined __thiscall UpdateText(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::UpdateText() */

void __thiscall Caver::GUITextFieldImpl::UpdateText(GUITextFieldImpl *this)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  GUILabel *this_00;
  long *plVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = *(GUILabel **)(this + 0x148);
  sVar3 = *(size_t *)((long)*(void **)(this + 0x188) + -0x18);
  if (sVar3 == 0) {
    sVar3 = *(size_t *)((long)*(void **)(this + 400) + -0x18);
    if ((sVar3 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar2 = memcmp(*(void **)(this + 400),*(void **)(this_00 + 0x100),sVar3), iVar2 != 0)) {
      FUN_0066a6a8(this_00 + 0x100,this + 400);
      GUILabel::UpdateText(this_00);
      this_00 = *(GUILabel **)(this + 0x148);
    }
    if ((((this_00[0x108] == (GUILabel)0x80) && (this_00[0x109] == (GUILabel)0x80)) &&
        (this_00[0x10a] == (GUILabel)0x80)) && (this_00[0x10b] == (GUILabel)0xff))
    goto LAB_005ba3c0;
    plVar5 = *(long **)(this_00 + 0x118);
    *(undefined4 *)(this_00 + 0x108) = 0xff808080;
    *(undefined8 *)(this_00 + 0x110) = 0;
    *(undefined8 *)(this_00 + 0x118) = 0;
  }
  else {
    if ((sVar3 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar2 = memcmp(*(void **)(this + 0x188),*(void **)(this_00 + 0x100),sVar3), iVar2 != 0)) {
      FUN_0066a6a8(this_00 + 0x100,this + 0x188);
      GUILabel::UpdateText(this_00);
      this_00 = *(GUILabel **)(this + 0x148);
    }
    (**(code **)(*(long *)this + 0x148))(&local_3c,this);
    if ((((local_3c & 0xff) == (uint)(byte)this_00[0x108]) && (local_3c._1_1_ == this_00[0x109])) &&
       ((local_3c._2_1_ == this_00[0x10a] && (local_3c._3_1_ == this_00[0x10b]))))
    goto LAB_005ba3c0;
    plVar5 = *(long **)(this_00 + 0x118);
    *(undefined8 *)(this_00 + 0x110) = 0;
    *(uint *)(this_00 + 0x108) = local_3c;
    *(undefined8 *)(this_00 + 0x118) = 0;
  }
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  GUILabel::UpdateText(this_00);
LAB_005ba3c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


