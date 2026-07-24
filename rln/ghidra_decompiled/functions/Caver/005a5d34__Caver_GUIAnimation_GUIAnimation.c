/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a5d34
 * Function: Caver::GUIAnimation::GUIAnimation
 * Signature: undefined __thiscall GUIAnimation(GUIAnimation * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimation::GUIAnimation() */

void __thiscall Caver::GUIAnimation::GUIAnimation(GUIAnimation *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = DAT_00697208;
  uStack_30 = DAT_00697200;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  GUIAnimationCurve::GUIAnimationCurve
            ((GUIAnimationCurve *)(this + 0x34),(Vector2 *)&uStack_30,(Vector2 *)&local_38);
  *(undefined8 *)(this + 0x68) = 0x3f0000003f000000;
  uVar2 = DAT_00697210;
  this[0x54] = (GUIAnimation)0x0;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (GUIAnimation)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xba] = (GUIAnimation)0x0;
  *(undefined2 *)(this + 0xb8) = 1;
  *(undefined8 *)(this + 0x58) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


