/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a7914
 * Function: Caver::GUIPropertyValue::InterpolatedValue
 * Signature: undefined __thiscall InterpolatedValue(GUIPropertyValue * this, GUIPropertyValue * param_1, GUIPropertyValue * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,
   Caver::GUIPropertyValue const&, float) */

void __thiscall
Caver::GUIPropertyValue::InterpolatedValue
          (GUIPropertyValue *this,GUIPropertyValue *param_1,GUIPropertyValue *param_2,float param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *in_x8;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  long *plStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 005a7954 with catch @ 005a7934
                       catch() { ... } // from try @ 005a79b8 with catch @ 005a7934 */
  *in_x8 = 0;
  *(undefined8 *)(in_x8 + 2) = 0;
  *(undefined8 *)(in_x8 + 4) = 0;
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    fVar4 = 1.0 - param_3;
    uVar5 = **(undefined8 **)(this + 8);
    uVar6 = (*(undefined8 **)(this + 8))[1];
    uVar7 = **(undefined8 **)(param_1 + 8);
    uVar8 = (*(undefined8 **)(param_1 + 8))[1];
    local_60 = CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar4 +
                        (float)((ulong)uVar7 >> 0x20) * param_3,
                        (float)uVar5 * fVar4 + (float)uVar7 * param_3);
    uStack_58 = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar4 +
                         (float)((ulong)uVar8 >> 0x20) * param_3,
                         (float)uVar6 * fVar4 + (float)uVar8 * param_3);
    ValueWithRectangle((GUIPropertyValue *)&local_60,(Rectangle *)param_1);
    *in_x8 = local_50;
    if (plStack_40 != (long *)0x0) {
      lVar3 = plStack_40[1];
      plStack_40[1] = lVar3 + 1;
      *(undefined8 *)(in_x8 + 2) = local_48;
      *(long **)(in_x8 + 4) = plStack_40;
      plStack_40[1] = lVar3;
      if (lVar3 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        lVar3 = plStack_40[2];
        plStack_40[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plStack_40 + 0x18))(plStack_40);
        }
      }
      goto LAB_005a7b38;
    }
  }
  else {
                    /* try { // try from 005a794c to 006a7953 has its CatchHandler @ 005a7984 */
    if (iVar1 == 2) {
                    /* catch() { ... } // from try @ 005a79dc with catch @ 005a7a00 */
      local_60 = CONCAT44((float)((ulong)**(undefined8 **)(this + 8) >> 0x20) * (1.0 - param_3) +
                          (float)((ulong)**(undefined8 **)(param_1 + 8) >> 0x20) * param_3,
                          (float)**(undefined8 **)(this + 8) * (1.0 - param_3) +
                          (float)**(undefined8 **)(param_1 + 8) * param_3);
      ValueWithVector2((GUIPropertyValue *)&local_60,(Vector2 *)param_1);
      *in_x8 = local_50;
      if (plStack_40 != (long *)0x0) {
        lVar3 = plStack_40[1];
        plStack_40[1] = lVar3 + 1;
        *(undefined8 *)(in_x8 + 2) = local_48;
        *(long **)(in_x8 + 4) = plStack_40;
        plStack_40[1] = lVar3;
        if (lVar3 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          lVar3 = plStack_40[2];
          plStack_40[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
            (**(code **)(*plStack_40 + 0x18))(plStack_40);
          }
        }
        goto LAB_005a7b38;
      }
    }
    else {
                    /* try { // try from 005a7954 to 006a798b has its CatchHandler @ 005a7934 */
      if (iVar1 != 1) goto LAB_005a7b38;
                    /* catch() { ... } // from try @ 005a794c with catch @ 005a7984 */
      ValueWithFloat(this,(1.0 - param_3) * **(float **)(this + 8) +
                          **(float **)(param_1 + 8) * param_3);
                    /* try { // try from 005a798c to 006a7993 has its CatchHandler @ 005a79a0 */
      *in_x8 = local_50;
      if (plStack_40 != (long *)0x0) {
                    /* try { // try from 005a799c to 006a799f has its CatchHandler @ 005a79b0 */
        lVar3 = plStack_40[1];
                    /* catch() { ... } // from try @ 005a798c with catch @ 005a79a0 */
        plStack_40[1] = lVar3 + 1;
        *(undefined8 *)(in_x8 + 2) = local_48;
        *(long **)(in_x8 + 4) = plStack_40;
                    /* catch() { ... } // from try @ 005a799c with catch @ 005a79b0 */
                    /* try { // try from 005a79b4 to 006a79b7 has its CatchHandler @ 005a79c0 */
        plStack_40[1] = lVar3;
                    /* try { // try from 005a79b8 to 006a79c3 has its CatchHandler @ 005a7934 */
        if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 005a79b4 with catch @ 005a79c0 */
                    /* catch() { ... } // from try @ 005a79e4 with catch @ 005a79c8 */
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          lVar3 = plStack_40[2];
          plStack_40[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
                    /* try { // try from 005a79dc to 006a79e3 has its CatchHandler @ 005a7a00 */
                    /* try { // try from 005a79e4 to 006a7a13 has its CatchHandler @ 005a79c8 */
            (**(code **)(*plStack_40 + 0x18))(plStack_40);
          }
        }
        goto LAB_005a7b38;
      }
    }
  }
  *(undefined8 *)(in_x8 + 2) = local_48;
  *(undefined8 *)(in_x8 + 4) = 0;
LAB_005a7b38:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


