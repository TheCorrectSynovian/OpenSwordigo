/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e1704
 * Function: Caver::OverlayMenuButton::FadeOutAnimationFinished
 * Signature: undefined __cdecl FadeOutAnimationFinished(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayMenuButton::FadeOutAnimationFinished(void*, Caver::GUIEvent*) */

void Caver::OverlayMenuButton::FadeOutAnimationFinished(void *param_1,GUIEvent *param_2)

{
  long lVar1;
  long *plVar2;
  GUIAnimation *pGVar3;
  GUIPropertyValue *pGVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  void *local_78;
  GUIAnimation *local_70;
  long *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)((long)param_1 + 0x1f8) != '\0') {
    pGVar3 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar3);
    local_70 = pGVar3;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_68,pGVar3)
    ;
    pGVar4 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_70,pGVar3,pGVar3);
    pGVar3 = local_70;
    *(undefined4 *)(local_70 + 0x30) = 1;
    pGVar4 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar4,DAT_006882c0);
    *(undefined4 *)(pGVar3 + 0x70) = (undefined4)local_a0;
    if (local_90 != (long *)0x0) {
      local_90[1] = local_90[1] + 1;
    }
    plVar9 = *(long **)(pGVar3 + 0x80);
    *(long **)(pGVar3 + 0x78) = local_98;
    *(long **)(pGVar3 + 0x80) = local_90;
    if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    plVar9 = local_90;
    if ((local_90 != (long *)0x0) &&
       (lVar7 = local_90[1], local_90[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      pGVar4 = (GUIPropertyValue *)(**(code **)(*local_90 + 0x10))(local_90);
                    /* catch() { ... } // from try @ 004e1844 with catch @ 004e1814 */
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* try { // try from 004e1830 to 005e1843 has its CatchHandler @ 004e1868 */
        pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    pGVar3 = local_70;
    GUIPropertyValue::ValueWithFloat(pGVar4,1.0);
                    /* try { // try from 004e1844 to 005e186b has its CatchHandler @ 004e1814 */
    *(undefined4 *)(pGVar3 + 0x88) = (undefined4)local_a0;
    if (local_90 != (long *)0x0) {
      local_90[1] = local_90[1] + 1;
    }
    plVar9 = *(long **)(pGVar3 + 0x98);
    *(long **)(pGVar3 + 0x90) = local_98;
    *(long **)(pGVar3 + 0x98) = local_90;
                    /* catch() { ... } // from try @ 004e1830 with catch @ 004e1868 */
    if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    plVar9 = local_90;
    if ((local_90 != (long *)0x0) &&
       (lVar7 = local_90[1], local_90[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_90 + 0x10))(local_90);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    pGVar3 = local_70;
                    /* catch() { ... } // from try @ 004e1974 with catch @ 004e18fc */
    *(undefined4 *)(local_70 + 0x5c) = 0x3e99999a;
    local_70[0xb8] = (GUIAnimation)0x1;
    local_60 = PTR_FadeInAnimationFinished_007e7100;
    plVar9 = *(long **)((long)param_1 + 0x10);
    if ((plVar9 == (long *)0x0) || (plVar9[1] == 0)) {
                    /* try { // try from 004e1ba4 to 005e1bb7 has its CatchHandler @ 004e1b80 */
      local_60 = PTR_vtable_007e6120 + 0x10;
                    /* catch() { ... } // from try @ 004e1ba0 with catch @ 004e1bb4 */
                    /* try { // try from 004e1bb8 to 005e1bbf has its CatchHandler @ 004e1bc8 */
      boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
      goto LAB_004e1bbc;
    }
    uVar10 = *(undefined8 *)((long)param_1 + 8);
    plVar9[1] = plVar9[1] + 2;
    uStack_58 = 0;
    local_50 = param_1;
    uVar5 = boost::detail::function::has_empty_target(&local_60);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 004e1958 to 005e195b has its CatchHandler @ 004e1968 */
      local_a8 = local_50;
      uStack_b0 = uStack_58;
      local_b8 = local_60;
                    /* catch() { ... } // from try @ 004e1958 with catch @ 004e1968 */
                    /* try { // try from 004e196c to 005e1973 has its CatchHandler @ 004e197c */
      plVar8 = (long *)PTR_stored_vtable_007e6358;
    }
    else {
      plVar8 = (long *)0x0;
    }
                    /* try { // try from 004e1974 to 005e197f has its CatchHandler @ 004e18fc */
                    /* catch() { ... } // from try @ 004e196c with catch @ 004e197c */
                    /* try { // try from 004e1980 to 005e19c7 has its CatchHandler @ 004e1980
                       catch(type#1 @ 00000000) { ... } // from try @ 004e1980 with catch @ 004e1980
                       catch(type#1 @ 00000000) { ... } // from try @ 004e19e4 with catch @ 004e1980
                       catch(type#1 @ 00000000) { ... } // from try @ 004e1b74 with catch @ 004e1980
                        */
    plVar9[2] = plVar9[2] + 1;
    local_90 = (long *)0x0;
    local_a0 = uVar10;
    local_98 = plVar9;
    if (plVar8 != (long *)0x0) {
      local_90 = plVar8;
      if (((ulong)plVar8 & 1) == 0) {
        (**(code **)((ulong)plVar8 & 0xfffffffffffffffe))(&local_b8,&local_88,0);
      }
      else {
        local_78 = local_a8;
                    /* try { // try from 004e19c8 to 005e19e3 has its CatchHandler @ 004e1b68 */
        uStack_80 = uStack_b0;
        local_88 = local_b8;
      }
    }
    plVar2 = local_98;
    plVar6 = *(long **)(pGVar3 + 8);
    *(undefined8 *)pGVar3 = local_a0;
    if (local_98 != plVar6) {
      if (local_98 != (long *)0x0) {
                    /* try { // try from 004e19e4 to 005e1b6b has its CatchHandler @ 004e1980 */
        local_98[2] = local_98[2] + 1;
      }
      if ((plVar6 != (long *)0x0) && (lVar7 = plVar6[2], plVar6[2] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *(long **)(pGVar3 + 8) = plVar2;
    }
    boost::function<void(void*,Caver::GUIEvent*)>::operator=
              ((function<void(void*,Caver::GUIEvent*)> *)(pGVar3 + 0x10),(function *)&local_90);
    if (local_90 != (long *)0x0) {
      if ((((ulong)local_90 & 1) == 0) &&
         (*(code **)((ulong)local_90 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_90 & 0xfffffffffffffffe))(&local_88,&local_88,2);
      }
      local_90 = (long *)0x0;
    }
    if ((local_98 != (long *)0x0) &&
       (lVar7 = local_98[2], local_98[2] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_98 + 0x18))();
    }
    if (((plVar8 != (long *)0x0) && (((ulong)plVar8 & 1) == 0)) &&
       (*(code **)((ulong)plVar8 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)plVar8 & 0xfffffffffffffffe))(&local_b8,&local_b8,2);
    }
    lVar7 = plVar9[1];
    plVar9[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    lVar7 = plVar9[1];
    plVar9[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    GUIView::AddAnimation(param_1,(shared_ptr *)&local_70);
    if ((local_68 != (long *)0x0) &&
       (lVar7 = local_68[1], local_68[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar7 = local_68[2];
      local_68[2] = lVar7 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e19c8 with catch @ 004e1b68
                        */
      if (lVar7 + -1 == 0) {
                    /* try { // try from 004e1b6c to 005e1b73 has its CatchHandler @ 004e1b7c */
                    /* try { // try from 004e1b74 to 005e1b7f has its CatchHandler @ 004e1980 */
        (**(code **)(*local_68 + 0x18))(local_68);
      }
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e1b6c with catch @ 004e1b7c
                        */
                    /* catch() { ... } // from try @ 004e1ba4 with catch @ 004e1b80
                       catch() { ... } // from try @ 004e1bc0 with catch @ 004e1b80 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 004e1ba0 to 005e1ba3 has its CatchHandler @ 004e1bb4 */
    return;
  }
LAB_004e1bbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


