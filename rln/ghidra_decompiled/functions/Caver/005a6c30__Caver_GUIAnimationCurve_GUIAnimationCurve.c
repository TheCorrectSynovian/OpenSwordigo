/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a6c30
 * Function: Caver::GUIAnimationCurve::GUIAnimationCurve
 * Signature: undefined __thiscall GUIAnimationCurve(GUIAnimationCurve * this, Vector2 * param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&, Caver::Vector2 const&) */

void __thiscall
Caver::GUIAnimationCurve::GUIAnimationCurve
          (GUIAnimationCurve *this,Vector2 *param_1,Vector2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = 0;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


