/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059dc98
 * Function: Caver::GUISwitch::SetOffFrameTexture
 * Signature: undefined __thiscall SetOffFrameTexture(GUISwitch * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::SetOffFrameTexture(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::GUISwitch::SetOffFrameTexture(GUISwitch *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  GUISwitch *pGVar3;
  long lVar4;
  
  lVar4 = *(long *)param_1;
  pGVar3 = this + 0x130;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar2 = *(long **)pGVar3;
  *(long *)pGVar3 = lVar4;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  if (this[0x148] != (GUISwitch)0x0) {
    pGVar3 = this + 0x128;
  }
  GUIFrameView::SetFrameTexture(*(GUIFrameView **)(this + 0x138),(intrusive_ptr *)pGVar3,true);
  return;
}


