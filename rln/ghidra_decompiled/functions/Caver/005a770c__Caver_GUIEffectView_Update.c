/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a770c
 * Function: Caver::GUIEffectView::Update
 * Signature: undefined __thiscall Update(GUIEffectView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffectView::Update(float) */

void __thiscall Caver::GUIEffectView::Update(GUIEffectView *this,float param_1)

{
  GUIEffect::Update((GUIEffect *)(this + 0xf0),param_1);
  if ((this[0x160] != (GUIEffectView)0x0) && (*(GUIEffect *)(this + 0xf0) != (GUIEffect)0x0)) {
    (**(code **)(*(long *)this + 0x78))(this);
  }
  GUIView::Update((GUIView *)this,param_1);
  return;
}


