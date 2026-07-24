/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059cc78
 * Function: Caver::GUISlider::SetPegTexture
 * Signature: undefined __thiscall SetPegTexture(GUISlider * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::GUISlider::SetPegTexture(GUISlider *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x150);
  *(long *)(this + 0x150) = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  this[0x160] = (GUISlider)0x1;
  return;
}


