/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052543c
 * Function: Caver::MapView::AnimateLocationMarkerFromNodeToNode
 * Signature: undefined __cdecl AnimateLocationMarkerFromNodeToNode(shared_ptr * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::AnimateLocationMarkerFromNodeToNode(boost::shared_ptr<Caver::MapNode> const&,
   boost::shared_ptr<Caver::MapNode> const&) */

void Caver::MapView::AnimateLocationMarkerFromNodeToNode(shared_ptr *param_1,shared_ptr *param_2)

{
  undefined8 uVar1;
  long lVar2;
  GUIAnimation *this;
  GUIPropertyValue *pGVar3;
  undefined8 *in_x2;
  shared_ptr *in_x8;
  long lVar4;
  long lVar5;
  long lVar6;
  GUIView *this_00;
  long *plVar7;
  undefined4 local_60;
  undefined8 local_58;
  long *local_50;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined8 *)param_2;
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  }
  plVar7 = *(long **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar1;
  *(long *)(param_1 + 0x2c0) = lVar4;
  if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar4 = plVar7[2];
    plVar7[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  uVar1 = *in_x2;
  lVar4 = in_x2[1];
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  }
  plVar7 = *(long **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = uVar1;
  *(long *)(param_1 + 0x2d0) = lVar4;
  if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar4 = plVar7[2];
    plVar7[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  this = operator_new(0xc0);
  GUIAnimation::GUIAnimation(this);
  *(GUIAnimation **)in_x8 = this;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)(in_x8 + 8),this);
  pGVar3 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this();
  lVar4 = *(long *)in_x8;
  pGVar3 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar3,0.0);
  *(undefined4 *)(lVar4 + 0x70) = local_60;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar7 = *(long **)(lVar4 + 0x80);
  *(undefined8 *)(lVar4 + 0x78) = local_58;
  *(long **)(lVar4 + 0x80) = local_50;
  if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar7 + 0x10))(plVar7);
    lVar4 = plVar7[2];
    plVar7[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* catch() { ... } // from try @ 00525600 with catch @ 005255d0 */
      pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
                    /* try { // try from 005255ec to 006255ff has its CatchHandler @ 00525624 */
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
                    /* try { // try from 00525600 to 00625627 has its CatchHandler @ 005255d0 */
    pGVar3 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x10))(local_50);
    lVar4 = local_50[2];
    local_50[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x18))(local_50);
    }
  }
                    /* catch() { ... } // from try @ 005255ec with catch @ 00525624 */
  lVar4 = *(long *)in_x8;
  GUIPropertyValue::ValueWithFloat(pGVar3,1.0);
  *(undefined4 *)(lVar4 + 0x88) = local_60;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar7 = *(long **)(lVar4 + 0x98);
  *(undefined8 *)(lVar4 + 0x90) = local_58;
  *(long **)(lVar4 + 0x98) = local_50;
  if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005256c4 with catch @ 00525670 */
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar4 = plVar7[2];
    plVar7[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
                    /* try { // try from 005256a8 to 006256ab has its CatchHandler @ 005256b8 */
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 005256a8 with catch @ 005256b8 */
                    /* try { // try from 005256bc to 006256c3 has its CatchHandler @ 005256cc */
    (**(code **)(*local_50 + 0x10))(local_50);
                    /* try { // try from 005256c4 to 006256cf has its CatchHandler @ 00525670 */
    lVar4 = local_50[2];
                    /* catch() { ... } // from try @ 005256bc with catch @ 005256cc */
    local_50[2] = lVar4 + -1;
                    /* try { // try from 005256d0 to 00625717 has its CatchHandler @ 005256d0
                       catch() { ... } // from try @ 005256d0 with catch @ 005256d0
                       catch() { ... } // from try @ 00525734 with catch @ 005256d0
                       catch() { ... } // from try @ 00525864 with catch @ 005256d0
                       catch() { ... } // from try @ 00525968 with catch @ 005256d0 */
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  uVar1 = DAT_00684378;
  lVar4 = *(long *)in_x8;
  *(undefined1 *)(lVar4 + 0xb8) = 1;
  *(undefined8 *)(lVar4 + 0x58) = uVar1;
                    /* try { // try from 00525718 to 00625733 has its CatchHandler @ 0052595c */
  if (*(long *)(*(long *)(param_1 + 0x118) + **(long **)(param_1 + 0x2b8) * 0x10) ==
      *(long *)(*(long *)(param_1 + 0x118) + **(long **)(param_1 + 0x2c8) * 0x10)) {
    plVar7 = *(long **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar4 = plVar7[2];
      plVar7[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  else {
    lVar6 = *(long *)(in_x8 + 8);
    if (lVar6 != 0) {
                    /* try { // try from 00525734 to 0062585f has its CatchHandler @ 005256d0 */
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
    }
    plVar7 = *(long **)(param_1 + 0x2e0);
    *(long *)(param_1 + 0x2d8) = lVar4;
    *(long *)(param_1 + 0x2e0) = lVar6;
    if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar4 = plVar7[2];
      plVar7[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  this_00 = *(GUIView **)(param_1 + 0x2a8);
  GUIView::RemoveAllAnimations(this_00);
  GUIView::AddAnimation(this_00,in_x8);
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


