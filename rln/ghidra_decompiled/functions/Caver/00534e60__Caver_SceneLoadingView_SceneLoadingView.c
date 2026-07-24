/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00534e60
 * Function: Caver::SceneLoadingView::SceneLoadingView
 * Signature: undefined __thiscall SceneLoadingView(SceneLoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneLoadingView::SceneLoadingView() */

void __thiscall Caver::SceneLoadingView::SceneLoadingView(SceneLoadingView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  StripeView *pSVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  GUILabel *pGVar11;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  long local_68;
  GUILabel *local_60;
  long *local_58;
  long local_48;
  
                    /* catch() { ... } // from try @ 00534e54 with catch @ 00534e64 */
                    /* try { // try from 00534e68 to 00634ec7 has its CatchHandler @ 00534e68
                       catch() { ... } // from try @ 00534e68 with catch @ 00534e68
                       catch() { ... } // from try @ 00534ee4 with catch @ 00534e68
                       catch() { ... } // from try @ 00534f54 with catch @ 00534e68
                       catch() { ... } // from try @ 00534fc4 with catch @ 00534e68 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  LoadingView::LoadingView((LoadingView *)this);
  *(undefined **)this = PTR_vtable_007e7c40 + 0x10;
  memset(this + 0x120,0,0x86);
  *(undefined8 *)(this + 0x1a8) = 0x3dcccccd;
  this[0x1b0] = (SceneLoadingView)0x0;
  pSVar5 = operator_new(0x138);
                    /* try { // try from 00534ec8 to 00634ee3 has its CatchHandler @ 00534fb8 */
  StripeView::StripeView(pSVar5);
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>
            ((shared_ptr<Caver::StripeView> *)&local_60,pSVar5);
  pGVar11 = *(GUILabel **)(this + 0x160);
  plVar10 = *(long **)(this + 0x168);
                    /* try { // try from 00534ee4 to 00634f4f has its CatchHandler @ 00534e68 */
  *(GUILabel **)(this + 0x160) = local_60;
  *(long **)(this + 0x168) = local_58;
  local_60 = pGVar11;
  local_58 = plVar10;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  pSVar5 = operator_new(0x138);
  StripeView::StripeView(pSVar5);
                    /* try { // try from 00534f50 to 00634f53 has its CatchHandler @ 00534fa4 */
                    /* try { // try from 00534f54 to 00634fbb has its CatchHandler @ 00534e68 */
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>
            ((shared_ptr<Caver::StripeView> *)&local_60,pSVar5);
  pGVar11 = *(GUILabel **)(this + 0x170);
  plVar10 = *(long **)(this + 0x178);
  *(GUILabel **)(this + 0x170) = local_60;
  *(long **)(this + 0x178) = local_58;
  local_60 = pGVar11;
  local_58 = plVar10;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 00534f50 with catch @ 00534fa4 */
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
                    /* catch() { ... } // from try @ 00534ec8 with catch @ 00534fb8 */
                    /* try { // try from 00534fbc to 00634fc3 has its CatchHandler @ 00534fcc */
                    /* try { // try from 00534fc4 to 00634fcf has its CatchHandler @ 00534e68 */
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
                    /* catch() { ... } // from try @ 00534fbc with catch @ 00534fcc */
                    /* catch() { ... } // from try @ 00535018 with catch @ 00534fd0
                       catch() { ... } // from try @ 00535034 with catch @ 00534fd0 */
  local_78 = 0xff000000;
  uStack_74 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_74,&local_78);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar10 = *(long **)(this + 0x188);
  *(GUILabel **)(this + 0x180) = local_60;
  *(long **)(this + 0x188) = local_58;
                    /* try { // try from 00535014 to 00635017 has its CatchHandler @ 00535028 */
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 00535018 to 0063502b has its CatchHandler @ 00534fd0 */
    (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* catch() { ... } // from try @ 00535014 with catch @ 00535028 */
    lVar6 = plVar10[2];
                    /* try { // try from 0053502c to 00635033 has its CatchHandler @ 0053503c */
    plVar10[2] = lVar6 + -1;
                    /* try { // try from 00535034 to 0063503f has its CatchHandler @ 00534fd0 */
    if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 0053502c with catch @ 0053503c */
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 005350d8 with catch @ 0053506c */
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 00535330 with catch @ 00535424 */
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  pGVar11 = *(GUILabel **)(this + 0x180);
                    /* try { // try from 005350b0 to 006350b3 has its CatchHandler @ 005350cc */
                    /* try { // try from 005350b4 to 006350bb has its CatchHandler @ 005350e0 */
                    /* catch() { ... } // from try @ 005350b0 with catch @ 005350cc */
                    /* try { // try from 005350d0 to 006350d7 has its CatchHandler @ 005350dc */
                    /* try { // try from 005350d8 to 006350f3 has its CatchHandler @ 0053506c */
                    /* catch() { ... } // from try @ 005350d0 with catch @ 005350dc */
                    /* catch() { ... } // from try @ 005350b4 with catch @ 005350e0 */
  if ((((pGVar11[0x108] != (GUILabel)0xff) || (pGVar11[0x109] != (GUILabel)0xe6)) ||
      (pGVar11[0x10a] != (GUILabel)0xa0)) || (pGVar11[0x10b] != (GUILabel)0xff)) {
    plVar10 = *(long **)(pGVar11 + 0x118);
    *(undefined4 *)(pGVar11 + 0x108) = 0xffa0e6ff;
    *(undefined8 *)(pGVar11 + 0x110) = 0;
    *(undefined8 *)(pGVar11 + 0x118) = 0;
    if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar6 = plVar10[2];
      plVar10[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    GUILabel::UpdateText(pGVar11);
    pGVar11 = *(GUILabel **)(this + 0x180);
  }
  local_58 = *(long **)(this + 0x188);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  local_60 = pGVar11;
  (*pcVar7)(this,&local_60);
  plVar10 = local_58;
                    /* try { // try from 0053516c to 0063532f has its CatchHandler @ 0053516c
                       catch() { ... } // from try @ 0053516c with catch @ 0053516c
                       catch() { ... } // from try @ 00535334 with catch @ 0053516c */
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_80 = 0xff000000;
  uStack_7c = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_7c,&local_80);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar10 = *(long **)(this + 0x198);
  *(GUILabel **)(this + 400) = local_60;
  *(long **)(this + 0x198) = local_58;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar4) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  pGVar11 = *(GUILabel **)(this + 400);
  if ((((pGVar11[0x108] != (GUILabel)0xff) || (pGVar11[0x109] != (GUILabel)0xe6)) ||
      (pGVar11[0x10a] != (GUILabel)0xa0)) || (pGVar11[0x10b] != (GUILabel)0xff)) {
    plVar10 = *(long **)(pGVar11 + 0x118);
    *(undefined4 *)(pGVar11 + 0x108) = 0xffa0e6ff;
    *(undefined8 *)(pGVar11 + 0x110) = 0;
    *(undefined8 *)(pGVar11 + 0x118) = 0;
    if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar6 = plVar10[2];
      plVar10[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    GUILabel::UpdateText(pGVar11);
    pGVar11 = *(GUILabel **)(this + 400);
  }
                    /* try { // try from 00535330 to 00635333 has its CatchHandler @ 00535424 */
                    /* try { // try from 00535334 to 00635437 has its CatchHandler @ 0053516c */
  local_58 = *(long **)(this + 0x198);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  local_60 = pGVar11;
  (*pcVar7)(this,&local_60);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  *(undefined1 *)(*(long *)(this + 400) + 0xe4) = 1;
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


