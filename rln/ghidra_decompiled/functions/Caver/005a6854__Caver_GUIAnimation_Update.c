/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a6854
 * Function: Caver::GUIAnimation::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimation::Update(float) */

void Caver::GUIAnimation::Update(float param_1)

{
  long lVar1;
  GUITargetAction *in_x0;
  GUIPropertyValue *in_x2;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (in_x0[0x54] == (GUITargetAction)0x0) {
                    /* try { // try from 005a6888 to 006a68af has its CatchHandler @ 005a69ac */
    fVar4 = *(float *)(in_x0 + 0x60) + param_1;
    fVar5 = *(float *)(in_x0 + 0x58) + *(float *)(in_x0 + 0x5c);
    *(float *)(in_x0 + 0x60) = fVar4;
    if (fVar5 < fVar4) {
      *(float *)(in_x0 + 0x60) = fVar5;
      in_x0[0x54] = (GUITargetAction)0x1;
      fVar4 = fVar5;
    }
                    /* try { // try from 005a68b0 to 006a69cf has its CatchHandler @ 005a60d0 */
    fVar4 = (fVar4 - *(float *)(in_x0 + 0x58)) / *(float *)(in_x0 + 0x5c);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar4 = (float)GUIAnimationCurve::ValueAtTime((GUIAnimationCurve *)(in_x0 + 0x34),fVar4);
    if (in_x0[100] == (GUITargetAction)0x0) {
      GUIPropertyValue::InterpolatedValue
                ((GUIPropertyValue *)(in_x0 + 0x70),(GUIPropertyValue *)(in_x0 + 0x88),in_x2,fVar4);
      *(undefined4 *)(in_x0 + 0xa0) = (undefined4)local_50;
      if (local_40 != (long *)0x0) {
        local_40[1] = local_40[1] + 1;
      }
      plVar3 = *(long **)(in_x0 + 0xb0);
      *(ulong *)(in_x0 + 0xa8) = CONCAT44(uStack_44,local_48);
      *(long **)(in_x0 + 0xb0) = local_40;
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* catch() { ... } // from try @ 005a6824 with catch @ 005a69a0 */
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
                    /* catch() { ... } // from try @ 005a6888 with catch @ 005a69ac */
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
    }
    else {
      GUIPropertyValue::InterpolatedValue
                ((GUIPropertyValue *)(in_x0 + 0x88),(GUIPropertyValue *)(in_x0 + 0x70),in_x2,fVar4);
      *(undefined4 *)(in_x0 + 0xa0) = (undefined4)local_50;
      if (local_40 != (long *)0x0) {
        local_40[1] = local_40[1] + 1;
      }
      plVar3 = *(long **)(in_x0 + 0xb0);
      *(ulong *)(in_x0 + 0xa8) = CONCAT44(uStack_44,local_48);
      *(long **)(in_x0 + 0xb0) = local_40;
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
    }
                    /* catch() { ... } // from try @ 005a6bb4 with catch @ 005a69d0
                       catch() { ... } // from try @ 005a6d38 with catch @ 005a69d0 */
    if ((local_40 != (long *)0x0) &&
       (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar2 = local_40[2];
      local_40[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
    if (in_x0[0x54] != (GUITargetAction)0x0) {
      local_50 = 0;
      local_48 = 0;
      GUITargetAction::Send(in_x0,in_x0,(GUIEvent *)&local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


