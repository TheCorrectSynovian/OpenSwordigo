/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044f044
 * Function: Caver::GameSceneView::HideCinematicSkipButton
 * Signature: undefined __thiscall HideCinematicSkipButton(GameSceneView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::HideCinematicSkipButton(bool) */

void __thiscall Caver::GameSceneView::HideCinematicSkipButton(GameSceneView *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  GUIAnimation *pGVar3;
  GUIPropertyValue *pGVar4;
  long lVar5;
  code *pcVar6;
  GUIView *this_00;
  undefined4 local_60;
  undefined8 local_58;
  long *local_50;
  GUIAnimation *local_48;
  long *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00448344 with catch @ 0044f058 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 004482f8 with catch @ 0044f05c */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x148);
  if (plVar2 == (long *)0x0) goto LAB_0044f2c0;
  if (param_1) {
                    /* try { // try from 0044f078 to 0054f087 has its CatchHandler @ 0044f4b4 */
    if (this[0x158] == (GameSceneView)0x0) goto LAB_0044f2c0;
    pGVar3 = operator_new(0xc0);
                    /* try { // try from 0044f088 to 0054f0df has its CatchHandler @ 00447cc4 */
    GUIAnimation::GUIAnimation(pGVar3);
    local_48 = pGVar3;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_40,pGVar3)
    ;
    pGVar4 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_48,pGVar3,pGVar3);
    pGVar3 = local_48;
    *(undefined4 *)(local_48 + 0x30) = 2;
                    /* catch() { ... } // from try @ 004482a4 with catch @ 0044f0c0 */
                    /* catch() { ... } // from try @ 00448258 with catch @ 0044f0c4 */
    pGVar4 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar4,1.0);
    *(undefined4 *)(pGVar3 + 0x70) = local_60;
    if (local_50 != (long *)0x0) {
                    /* try { // try from 0044f0e0 to 0054f0ef has its CatchHandler @ 0044f4b4 */
      local_50[1] = local_50[1] + 1;
    }
    plVar2 = *(long **)(pGVar3 + 0x80);
    *(undefined8 *)(pGVar3 + 0x78) = local_58;
    *(long **)(pGVar3 + 0x80) = local_50;
                    /* try { // try from 0044f0f0 to 0054f147 has its CatchHandler @ 00447cc4 */
    if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar2 + 0x10))(plVar2);
      lVar5 = plVar2[2];
      plVar2[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00448204 with catch @ 0044f128 */
                    /* catch() { ... } // from try @ 004481b8 with catch @ 0044f12c */
        pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if ((local_50 != (long *)0x0) &&
       (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0044f148 to 0054f157 has its CatchHandler @ 0044f4b4 */
      pGVar4 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x10))(local_50);
                    /* try { // try from 0044f158 to 0054f1af has its CatchHandler @ 00447cc4 */
      lVar5 = local_50[2];
      local_50[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        pGVar4 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x18))(local_50);
      }
    }
    pGVar3 = local_48;
    GUIPropertyValue::ValueWithFloat(pGVar4,0.0);
    *(undefined4 *)(pGVar3 + 0x88) = local_60;
                    /* catch() { ... } // from try @ 00448164 with catch @ 0044f190 */
                    /* catch() { ... } // from try @ 00448118 with catch @ 0044f194 */
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    plVar2 = *(long **)(pGVar3 + 0x98);
    *(undefined8 *)(pGVar3 + 0x90) = local_58;
    *(long **)(pGVar3 + 0x98) = local_50;
                    /* try { // try from 0044f1b0 to 0054f1bf has its CatchHandler @ 0044f4b4 */
    if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0044f1c0 to 0054f217 has its CatchHandler @ 00447cc4 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar5 = plVar2[2];
      plVar2[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
                    /* catch() { ... } // from try @ 004480c4 with catch @ 0044f1f8 */
                    /* catch() { ... } // from try @ 00448078 with catch @ 0044f1fc */
    if ((local_50 != (long *)0x0) &&
       (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
                    /* try { // try from 0044f218 to 0054f227 has its CatchHandler @ 0044f4b4 */
      lVar5 = local_50[2];
      local_50[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 0044f228 to 0054f27f has its CatchHandler @ 00447cc4 */
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
    *(undefined4 *)(local_48 + 0x5c) = 0x3e800000;
    local_48[0xb9] = (GUIAnimation)0x1;
    this_00 = *(GUIView **)(this + 0x148);
    GUIView::RemoveAllAnimations(this_00);
                    /* catch() { ... } // from try @ 00448024 with catch @ 0044f260 */
    GUIView::AddAnimation(this_00,(shared_ptr *)&local_48);
                    /* catch() { ... } // from try @ 00447fd8 with catch @ 0044f264 */
    if ((local_40 == (long *)0x0) ||
       (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_0044f2c0;
                    /* try { // try from 0044f280 to 0054f28f has its CatchHandler @ 0044f4b4 */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = local_40[2];
                    /* try { // try from 0044f290 to 0054f2e7 has its CatchHandler @ 00447cc4 */
    local_40[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_0044f2c0;
    pcVar6 = *(code **)(*local_40 + 0x18);
    plVar2 = local_40;
  }
  else {
    *(undefined1 *)((long)plVar2 + 0xe4) = 1;
    pcVar6 = *(code **)(*plVar2 + 0x78);
  }
  (*pcVar6)(plVar2);
LAB_0044f2c0:
  this[0x158] = (GameSceneView)0x0;
                    /* catch() { ... } // from try @ 00447f84 with catch @ 0044f2c8 */
                    /* catch() { ... } // from try @ 00447f38 with catch @ 0044f2cc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0044f2e8 to 0054f2f7 has its CatchHandler @ 0044f4b4 */
  __stack_chk_fail();
}


