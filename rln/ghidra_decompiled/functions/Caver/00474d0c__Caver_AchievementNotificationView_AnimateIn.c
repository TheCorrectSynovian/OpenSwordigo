/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00474d0c
 * Function: Caver::AchievementNotificationView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementNotificationView::AnimateIn() */

void Caver::AchievementNotificationView::AnimateIn(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  GUIView *in_x0;
  ulong uVar4;
  long *plVar5;
  Rectangle *in_x2;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *local_b8;
  undefined8 uStack_b0;
  GUIView *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  GUIView *local_78;
  undefined8 *local_70;
  long *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  GUIView *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (undefined *)
             ((ulong)(uint)((*(float *)(*(long *)(in_x0 + 0x58) + 0x88) +
                            *(float *)(*(long *)(in_x0 + 0x58) + 0x90)) - *(float *)(in_x0 + 0x78))
             << 0x20);
  Rectangle::TranslatedRectangle((Vector2 *)(in_x0 + 0x74));
  GUIAnimation::FrameAnimation((GUIAnimation *)&local_a0,(Rectangle *)(in_x0 + 0x74),in_x2,0.5);
  puVar3 = local_70;
  local_60 = PTR_AnimationDidFinish_007e6990;
  plVar8 = *(long **)(in_x0 + 0x10);
  if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
    local_60 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
  }
  else {
    uVar9 = *(undefined8 *)(in_x0 + 8);
    plVar8[1] = plVar8[1] + 2;
    uStack_58 = 0;
    local_50 = in_x0;
    uVar4 = boost::detail::function::has_empty_target(&local_60);
    if ((uVar4 & 1) == 0) {
      local_a8 = local_50;
      uStack_b0 = uStack_58;
      local_b8 = local_60;
      puVar6 = PTR_stored_vtable_007e5b48;
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    plVar8[2] = plVar8[2] + 1;
    local_90 = (undefined *)0x0;
    local_a0 = uVar9;
    local_98 = plVar8;
    if (puVar6 != (undefined *)0x0) {
      local_90 = puVar6;
      if (((ulong)puVar6 & 1) == 0) {
                    /* try { // try from 00474e18 to 00574e87 has its CatchHandler @ 00474e18
                       catch() { ... } // from try @ 00474e18 with catch @ 00474e18
                       catch() { ... } // from try @ 00474e98 with catch @ 00474e18
                       catch() { ... } // from try @ 00474f08 with catch @ 00474e18 */
        (**(code **)((ulong)puVar6 & 0xfffffffffffffffe))(&local_b8,&local_88,0);
      }
      else {
        local_78 = local_a8;
        uStack_80 = uStack_b0;
        local_88 = local_b8;
      }
    }
    plVar2 = local_98;
    plVar5 = (long *)puVar3[1];
    *puVar3 = local_a0;
    if (local_98 != plVar5) {
      if (local_98 != (long *)0x0) {
        local_98[2] = local_98[2] + 1;
      }
      if ((plVar5 != (long *)0x0) && (lVar7 = plVar5[2], plVar5[2] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x18))();
      }
      puVar3[1] = plVar2;
    }
                    /* try { // try from 00474e88 to 00574e97 has its CatchHandler @ 00474eec */
    boost::function<void(void*,Caver::GUIEvent*)>::operator=
              ((function<void(void*,Caver::GUIEvent*)> *)(puVar3 + 2),(function *)&local_90);
                    /* try { // try from 00474e98 to 00574efb has its CatchHandler @ 00474e18 */
    if (local_90 != (undefined *)0x0) {
      if ((((ulong)local_90 & 1) == 0) &&
         (*(code **)((ulong)local_90 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_90 & 0xfffffffffffffffe))(&local_88,&local_88,2);
      }
      local_90 = (undefined *)0x0;
    }
    if ((local_98 != (long *)0x0) &&
       (lVar7 = local_98[2], local_98[2] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_98 + 0x18))();
    }
                    /* catch() { ... } // from try @ 00474e88 with catch @ 00474eec */
                    /* try { // try from 00474efc to 00574eff has its CatchHandler @ 00474f00 */
                    /* catch() { ... } // from try @ 00474efc with catch @ 00474f00 */
    if (((puVar6 != (undefined *)0x0) && (((ulong)puVar6 & 1) == 0)) &&
       (*(code **)((ulong)puVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* try { // try from 00474f04 to 00574f07 has its CatchHandler @ 00474f10 */
                    /* try { // try from 00474f08 to 00574f13 has its CatchHandler @ 00474e18 */
                    /* catch() { ... } // from try @ 00474f04 with catch @ 00474f10 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00474f40 with catch @ 00474f14
                       catch(type#1 @ 00000000) { ... } // from try @ 00474f84 with catch @ 00474f14
                        */
      (**(code **)((ulong)puVar6 & 0xfffffffffffffffe))(&local_b8,&local_b8,2);
    }
    lVar7 = plVar8[1];
    plVar8[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* try { // try from 00474f38 to 00574f3f has its CatchHandler @ 00474f5c */
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar7 = plVar8[2];
                    /* try { // try from 00474f40 to 00574f77 has its CatchHandler @ 00474f14 */
      plVar8[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00474f38 with catch @ 00474f5c
                        */
    lVar7 = plVar8[1];
    plVar8[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* try { // try from 00474f78 to 00574f7b has its CatchHandler @ 00474f7c */
      (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00474f78 with catch @ 00474f7c
                        */
      lVar7 = plVar8[2];
                    /* try { // try from 00474f80 to 00574f83 has its CatchHandler @ 00474f8c */
                    /* try { // try from 00474f84 to 00574f8f has its CatchHandler @ 00474f14 */
      plVar8[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00474f80 with catch @ 00474f8c
                        */
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    if (local_68 != (long *)0x0) {
      local_68[1] = local_68[1] + 1;
    }
    plVar8 = *(long **)(in_x0 + 0x128);
    *(undefined8 **)(in_x0 + 0x120) = local_70;
    *(long **)(in_x0 + 0x128) = local_68;
    if ((plVar8 != (long *)0x0) && (lVar7 = plVar8[1], plVar8[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar7 = plVar8[2];
      plVar8[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    GUIView::RemoveAllAnimations(in_x0);
    GUIView::AddAnimation(in_x0,(shared_ptr *)&local_70);
    if ((local_68 != (long *)0x0) &&
       (lVar7 = local_68[1], local_68[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar7 = local_68[2];
      local_68[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


