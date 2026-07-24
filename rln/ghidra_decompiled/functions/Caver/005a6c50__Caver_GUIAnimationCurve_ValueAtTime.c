/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a6c50
 * Function: Caver::GUIAnimationCurve::ValueAtTime
 * Signature: undefined __thiscall ValueAtTime(GUIAnimationCurve * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimationCurve::ValueAtTime(float) */

void __thiscall Caver::GUIAnimationCurve::ValueAtTime(GUIAnimationCurve *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  int iStack_38;
  float local_34 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 005a6b8c with catch @ 005a6c70 */
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 <= DAT_00683488) {
    param_1 = DAT_00683488;
  }
  if (DAT_00697218 < param_1) {
    param_1 = DAT_00697218;
  }
  uVar2 = BezierSegment::IntersectsWithX((BezierSegment *)this,param_1,&iStack_38,local_34);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    BezierSegment::EvaluatePosition(local_34[0]);
    uVar3 = local_3c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


