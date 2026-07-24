/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043ee2c
 * Function: Caver::GameInterfaceBuilder::SmallLabel
 * Signature: undefined __thiscall SmallLabel(GameInterfaceBuilder * this, string * param_1, Color param_2, Color param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::SmallLabel(std::string const&, Caver::Color, Caver::Color) */

void __thiscall
Caver::GameInterfaceBuilder::SmallLabel
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
                    /* try { // try from 0043ee4c to 0053ee53 has its CatchHandler @ 0043ef68 */
  lVar5 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0043ee54 to 0053effb has its CatchHandler @ 0043ed5c */
  pGVar4 = operator_new(0x150);
  GUILabel::GUILabel(pGVar4);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(param_1_00,pGVar4);
  pGVar4 = *(GUILabel **)param_1_00;
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(this_00);
  if (local_68 != *(long *)(pGVar4 + 0xf0)) {
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar7 = *(long **)(pGVar4 + 0xf8);
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
  if ((local_60 != (long *)0x0) && (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar6 = local_60[2];
    local_60[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  pGVar4 = *(GUILabel **)param_1_00;
                    /* catch() { ... } // from try @ 0043ee4c with catch @ 0043ef68 */
                    /* catch() { ... } // from try @ 0043edfc with catch @ 0043ef6c */
  if ((((*param_1 != pGVar4[0x108]) || (param_1[1] != pGVar4[0x109])) ||
      (param_1[2] != pGVar4[0x10a])) || (param_1[3] != pGVar4[0x10b])) {
    plVar7 = *(long **)(pGVar4 + 0x118);
    *(undefined4 *)(pGVar4 + 0x108) = *(undefined4 *)param_1;
    *(undefined8 *)(pGVar4 + 0x110) = 0;
    *(undefined8 *)(pGVar4 + 0x118) = 0;
    if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = plVar7[2];
                    /* catch() { ... } // from try @ 0043edf0 with catch @ 0043efd8 */
      plVar7[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    GUILabel::UpdateText(pGVar4);
    pGVar4 = *(GUILabel **)param_1_00;
  }
                    /* try { // try from 0043effc to 0053efff has its CatchHandler @ 0043f004 */
  uVar1 = *param_4;
                    /* try { // try from 0043f000 to 0053f07b has its CatchHandler @ 0043ed5c */
                    /* catch() { ... } // from try @ 0043effc with catch @ 0043f004 */
                    /* catch() { ... } // from try @ 0043edb8 with catch @ 0043f008 */
  pGVar4[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar4 + 0x141) = uVar1;
  *(undefined8 *)(pGVar4 + 0x148) = DAT_007e98f0;
  GUILabel::UpdateText(pGVar4);
  pGVar4 = *(GUILabel **)param_1_00;
  __n = *(size_t *)((long)*(void **)this + -0x18);
  if (__n == *(size_t *)((long)*(void **)(pGVar4 + 0x100) + -0x18)) {
    iVar3 = memcmp(*(void **)this,*(void **)(pGVar4 + 0x100),__n);
    if (iVar3 == 0) goto LAB_0043f05c;
  }
  FUN_0066a6a8(pGVar4 + 0x100,this);
  GUILabel::UpdateText(pGVar4);
LAB_0043f05c:
  if (*(long *)(lVar2 + 0x28) == lVar5) {
                    /* catch() { ... } // from try @ 0043f0ec with catch @ 0043f084
                       catch() { ... } // from try @ 0043f1cc with catch @ 0043f084 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


