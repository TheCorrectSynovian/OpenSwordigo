/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043ea24
 * Function: Caver::GameInterfaceBuilder::NormalLabel
 * Signature: undefined __thiscall NormalLabel(GameInterfaceBuilder * this, string * param_1, Color param_2, Color param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::NormalLabel(std::string const&, Caver::Color, Caver::Color) */

void __thiscall
Caver::GameInterfaceBuilder::NormalLabel
          (shared_ptr<Caver::GUILabel> *param_1_00,GameInterfaceBuilder *this,GUILabel *param_1,
          undefined4 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  GUILabel *pGVar4;
  FontLibrary *this_00;
  size_t __n;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_68;
  long *local_60;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pGVar4 = operator_new(0x150);
  GUILabel::GUILabel(pGVar4);
                    /* catch() { ... } // from try @ 0043e740 with catch @ 0043ea74 */
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(param_1_00,pGVar4);
  pGVar4 = *(GUILabel **)param_1_00;
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
  if (local_68 != *(long *)(pGVar4 + 0xf0)) {
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
                    /* catch() { ... } // from try @ 0043e71c with catch @ 0043eaac */
    plVar7 = *(long **)(pGVar4 + 0xf8);
                    /* catch() { ... } // from try @ 0043e6c0 with catch @ 0043eab0 */
    *(long *)(pGVar4 + 0xf0) = local_68;
    *(long **)(pGVar4 + 0xf8) = local_60;
    if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = plVar7[2];
      plVar7[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    GUILabel::UpdateText(pGVar4);
  }
                    /* catch() { ... } // from try @ 0043e694 with catch @ 0043eb0c */
  if ((local_60 != (long *)0x0) && (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar6 = local_60[2];
    local_60[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 0043e670 with catch @ 0043eb44 */
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
                    /* catch() { ... } // from try @ 0043e614 with catch @ 0043eb48 */
  pGVar4 = *(GUILabel **)param_1_00;
  if ((((*param_1 != pGVar4[0x108]) || (param_1[1] != pGVar4[0x109])) ||
      (param_1[2] != pGVar4[0x10a])) || (param_1[3] != pGVar4[0x10b])) {
    plVar7 = *(long **)(pGVar4 + 0x118);
    *(undefined4 *)(pGVar4 + 0x108) = *(undefined4 *)param_1;
    *(undefined8 *)(pGVar4 + 0x110) = 0;
    *(undefined8 *)(pGVar4 + 0x118) = 0;
                    /* catch() { ... } // from try @ 0043e5e0 with catch @ 0043eba4 */
    if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = plVar7[2];
      plVar7[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 0043e5bc with catch @ 0043ebdc */
                    /* catch() { ... } // from try @ 0043e558 with catch @ 0043ebe0 */
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    GUILabel::UpdateText(pGVar4);
    pGVar4 = *(GUILabel **)param_1_00;
  }
  uVar1 = *param_4;
  pGVar4[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar4 + 0x141) = uVar1;
  *(undefined8 *)(pGVar4 + 0x148) = DAT_007e98f0;
  GUILabel::UpdateText(pGVar4);
  pGVar4 = *(GUILabel **)param_1_00;
  __n = *(size_t *)((long)*(void **)this + -0x18);
  if (__n == *(size_t *)((long)*(void **)(pGVar4 + 0x100) + -0x18)) {
    iVar3 = memcmp(*(void **)this,*(void **)(pGVar4 + 0x100),__n);
    if (iVar3 == 0) goto LAB_0043ec54;
  }
                    /* catch() { ... } // from try @ 0043e528 with catch @ 0043ec44 */
  FUN_0066a6a8(pGVar4 + 0x100,this);
  GUILabel::UpdateText(pGVar4);
LAB_0043ec54:
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


