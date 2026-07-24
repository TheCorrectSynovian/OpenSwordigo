/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044fe90
 * Function: Caver::GameSceneView::TouchBegan
 * Signature: undefined __thiscall TouchBegan(GameSceneView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::GameSceneView::TouchBegan(GameSceneView *this,FWTouch *param_1)

{
  long lVar1;
  ulong uVar2;
  GUIAnimation *pGVar3;
  GUIPropertyValue *pGVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  GUIView *this_00;
  long local_60;
  long *local_58;
  long *local_50;
  GUIAnimation *local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 0044fe90 to 0054fe93 has its CatchHandler @ 0044fea4 */
                    /* try { // try from 0044fe94 to 0054feb7 has its CatchHandler @ 0044fe78 */
                    /* catch() { ... } // from try @ 0044fe90 with catch @ 0044fea4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0044feb8 to 0054fecf has its CatchHandler @ 0044feb8
                       catch() { ... } // from try @ 0044feb8 with catch @ 0044feb8
                       catch() { ... } // from try @ 0044fed4 with catch @ 0044feb8 */
  uVar2 = Scene::TouchBegan(*(Scene **)(*(long *)(this + 0xf0) + 0x20),param_1);
                    /* try { // try from 0044fed0 to 0054fed3 has its CatchHandler @ 0044fee4 */
                    /* try { // try from 0044fed4 to 0054fef7 has its CatchHandler @ 0044feb8 */
  if (((((uVar2 & 1) == 0) && (this[0x180] != (GameSceneView)0x0)) &&
      (lVar5 = *(long *)(this + 0x148), lVar5 != 0)) && (this[0x140] != (GameSceneView)0x0)) {
    if (this[0x158] == (GameSceneView)0x0) {
                    /* try { // try from 0044ff14 to 0054ff37 has its CatchHandler @ 0044fef8 */
      this[0x158] = (GameSceneView)0x1;
                    /* catch() { ... } // from try @ 0044ff10 with catch @ 0044ff24 */
      if (*(long *)(lVar5 + 0x58) == 0) {
        pcVar6 = *(code **)(*(long *)this + 0x60);
        local_58 = *(long **)(this + 0x150);
                    /* try { // try from 0044ff38 to 0054ff4f has its CatchHandler @ 0044ff38
                       catch() { ... } // from try @ 0044ff38 with catch @ 0044ff38
                       catch() { ... } // from try @ 0044ff54 with catch @ 0044ff38 */
        if (local_58 != (long *)0x0) {
          local_58[1] = local_58[1] + 1;
        }
        local_60 = lVar5;
                    /* try { // try from 0044ff50 to 0054ff53 has its CatchHandler @ 0044ff64 */
                    /* try { // try from 0044ff54 to 0054ff77 has its CatchHandler @ 0044ff38 */
        (*pcVar6)(this,&local_60);
        plVar7 = local_58;
                    /* catch() { ... } // from try @ 0044ff50 with catch @ 0044ff64 */
        if ((local_58 != (long *)0x0) &&
           (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0044ff78 to 0054ff8f has its CatchHandler @ 0044ff78
                       catch() { ... } // from try @ 0044ff78 with catch @ 0044ff78
                       catch() { ... } // from try @ 0044ff94 with catch @ 0044ff78 */
          (**(code **)(*local_58 + 0x10))(local_58);
          lVar5 = plVar7[2];
          plVar7[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
                    /* try { // try from 0044ff90 to 0054ff93 has its CatchHandler @ 0044ffa4 */
                    /* try { // try from 0044ff94 to 0054ffb7 has its CatchHandler @ 0044ff78 */
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
        lVar5 = *(long *)(this + 0x148);
      }
                    /* catch() { ... } // from try @ 0044ff90 with catch @ 0044ffa4 */
      *(undefined1 *)(lVar5 + 0xe4) = 0;
      *(undefined4 *)(this + 0x15c) = 0x40400000;
      pGVar3 = operator_new(0xc0);
                    /* try { // try from 0044ffb8 to 0054ffcf has its CatchHandler @ 0044ffb8
                       catch() { ... } // from try @ 0044ffb8 with catch @ 0044ffb8
                       catch() { ... } // from try @ 0044ffd4 with catch @ 0044ffb8 */
      GUIAnimation::GUIAnimation(pGVar3);
      local_48 = pGVar3;
                    /* try { // try from 0044ffd0 to 0054ffd3 has its CatchHandler @ 0044ffe4 */
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>
                ((shared_count *)&local_40,pGVar3);
                    /* try { // try from 0044ffd4 to 0054fff7 has its CatchHandler @ 0044ffb8 */
      pGVar4 = (GUIPropertyValue *)
               boost::detail::sp_enable_shared_from_this(&local_48,pGVar3,pGVar3);
      pGVar3 = local_48;
                    /* catch() { ... } // from try @ 0044ffd0 with catch @ 0044ffe4 */
      *(undefined4 *)(local_48 + 0x30) = 2;
                    /* try { // try from 0044fff8 to 0055000f has its CatchHandler @ 0044fff8
                       catch() { ... } // from try @ 0044fff8 with catch @ 0044fff8
                       catch() { ... } // from try @ 00450014 with catch @ 0044fff8 */
      pGVar4 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar4,0.0);
      *(undefined4 *)(pGVar3 + 0x70) = (undefined4)local_60;
      if (local_50 != (long *)0x0) {
                    /* try { // try from 00450010 to 00550013 has its CatchHandler @ 00450024 */
                    /* try { // try from 00450014 to 00550037 has its CatchHandler @ 0044fff8 */
        local_50[1] = local_50[1] + 1;
      }
      plVar7 = *(long **)(pGVar3 + 0x80);
      *(long **)(pGVar3 + 0x78) = local_58;
      *(long **)(pGVar3 + 0x80) = local_50;
                    /* catch() { ... } // from try @ 00450010 with catch @ 00450024 */
      if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00450038 to 0055004f has its CatchHandler @ 00450038
                       catch() { ... } // from try @ 00450038 with catch @ 00450038
                       catch() { ... } // from try @ 00450054 with catch @ 00450038 */
        pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar7 + 0x10))(plVar7);
        lVar5 = plVar7[2];
        plVar7[2] = lVar5 + -1;
                    /* try { // try from 00450050 to 00550053 has its CatchHandler @ 00450064 */
        if (lVar5 + -1 == 0) {
                    /* try { // try from 00450054 to 00550077 has its CatchHandler @ 00450038 */
          pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
                    /* catch() { ... } // from try @ 00450050 with catch @ 00450064 */
      plVar7 = local_50;
                    /* try { // try from 00450078 to 0055008f has its CatchHandler @ 00450078
                       catch() { ... } // from try @ 00450078 with catch @ 00450078
                       catch() { ... } // from try @ 00450094 with catch @ 00450078 */
      if ((local_50 != (long *)0x0) &&
         (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        pGVar4 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x10))(local_50);
        lVar5 = plVar7[2];
                    /* try { // try from 00450090 to 00550093 has its CatchHandler @ 004500a4 */
                    /* try { // try from 00450094 to 005500b7 has its CatchHandler @ 00450078 */
        plVar7[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00450090 with catch @ 004500a4 */
          pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      pGVar3 = local_48;
                    /* try { // try from 004500b8 to 005500cf has its CatchHandler @ 004500b8
                       catch() { ... } // from try @ 004500b8 with catch @ 004500b8
                       catch() { ... } // from try @ 004500d4 with catch @ 004500b8 */
      GUIPropertyValue::ValueWithFloat(pGVar4,1.0);
      *(undefined4 *)(pGVar3 + 0x88) = (undefined4)local_60;
      if (local_50 != (long *)0x0) {
                    /* try { // try from 004500d0 to 005500d3 has its CatchHandler @ 004500e4 */
                    /* try { // try from 004500d4 to 005500f7 has its CatchHandler @ 004500b8 */
        local_50[1] = local_50[1] + 1;
      }
      plVar7 = *(long **)(pGVar3 + 0x98);
      *(long **)(pGVar3 + 0x90) = local_58;
      *(long **)(pGVar3 + 0x98) = local_50;
                    /* catch() { ... } // from try @ 004500d0 with catch @ 004500e4 */
      if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 004500f8 to 0055010f has its CatchHandler @ 004500f8
                       catch() { ... } // from try @ 004500f8 with catch @ 004500f8
                       catch() { ... } // from try @ 00450114 with catch @ 004500f8 */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar5 = plVar7[2];
        plVar7[2] = lVar5 + -1;
                    /* try { // try from 00450110 to 00550113 has its CatchHandler @ 00450124 */
        if (lVar5 + -1 == 0) {
                    /* try { // try from 00450114 to 00550137 has its CatchHandler @ 004500f8 */
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
                    /* catch() { ... } // from try @ 00450110 with catch @ 00450124 */
                    /* try { // try from 00450138 to 0055014f has its CatchHandler @ 00450138
                       catch() { ... } // from try @ 00450138 with catch @ 00450138
                       catch() { ... } // from try @ 00450154 with catch @ 00450138 */
      if ((local_50 != (long *)0x0) &&
         (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_50 + 0x10))(local_50);
        lVar5 = local_50[2];
                    /* try { // try from 00450150 to 00550153 has its CatchHandler @ 00450164 */
                    /* try { // try from 00450154 to 00550177 has its CatchHandler @ 00450138 */
        local_50[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00450150 with catch @ 00450164 */
          (**(code **)(*local_50 + 0x18))(local_50);
        }
      }
                    /* try { // try from 00450178 to 0055018f has its CatchHandler @ 00450178
                       catch() { ... } // from try @ 00450178 with catch @ 00450178
                       catch() { ... } // from try @ 00450194 with catch @ 00450178 */
      *(undefined4 *)(local_48 + 0x5c) = 0x3e800000;
      local_48[0xb8] = (GUIAnimation)0x1;
      this_00 = *(GUIView **)(this + 0x148);
      GUIView::RemoveAllAnimations(this_00);
                    /* try { // try from 00450190 to 00550193 has its CatchHandler @ 004501a4 */
                    /* try { // try from 00450194 to 005501b7 has its CatchHandler @ 00450178 */
      GUIView::AddAnimation(this_00,(shared_ptr *)&local_48);
                    /* catch() { ... } // from try @ 00450190 with catch @ 004501a4 */
      if ((local_40 != (long *)0x0) &&
         (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 004501b8 to 005501cf has its CatchHandler @ 004501b8
                       catch() { ... } // from try @ 004501b8 with catch @ 004501b8
                       catch() { ... } // from try @ 004501d4 with catch @ 004501b8 */
        (**(code **)(*local_40 + 0x10))(local_40);
        lVar5 = local_40[2];
        local_40[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
                    /* try { // try from 004501d0 to 005501d3 has its CatchHandler @ 004501e4 */
                    /* try { // try from 004501d4 to 005501f7 has its CatchHandler @ 004501b8 */
          (**(code **)(*local_40 + 0x18))(local_40);
        }
      }
    }
    else {
                    /* catch() { ... } // from try @ 0044fed0 with catch @ 0044fee4 */
      HideCinematicSkipButton(this,true);
    }
  }
                    /* try { // try from 0044fef8 to 0054ff0f has its CatchHandler @ 0044fef8
                       catch() { ... } // from try @ 0044fef8 with catch @ 0044fef8
                       catch() { ... } // from try @ 0044ff14 with catch @ 0044fef8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0044ff10 to 0054ff13 has its CatchHandler @ 0044ff24 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 004501d0 with catch @ 004501e4 */
  __stack_chk_fail();
}


