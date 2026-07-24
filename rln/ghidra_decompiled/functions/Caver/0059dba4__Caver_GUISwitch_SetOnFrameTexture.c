/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059dba4
 * Function: Caver::GUISwitch::SetOnFrameTexture
 * Signature: undefined __thiscall SetOnFrameTexture(GUISwitch * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::SetOnFrameTexture(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::GUISwitch::SetOnFrameTexture(GUISwitch *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  GUISwitch *pGVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 0059dba4 to 0069dbb7 has its CatchHandler @ 0059dc24 */
                    /* try { // try from 0059dbb8 to 0069dc47 has its CatchHandler @ 0059db60 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = *(undefined8 *)(this + 0x74);
  uStack_40 = *(undefined8 *)(*(long *)param_1 + 0x54);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_48);
  lVar5 = *(long *)param_1;
  pGVar4 = this + 0x128;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  }
  plVar3 = *(long **)pGVar4;
  *(long *)pGVar4 = lVar5;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0059dba4 with catch @ 0059dc24
                        */
  if (this[0x148] == (GUISwitch)0x0) {
    pGVar4 = this + 0x130;
  }
  GUIFrameView::SetFrameTexture(*(GUIFrameView **)(this + 0x138),(intrusive_ptr *)pGVar4,true);
                    /* try { // try from 0059dc48 to 0069dc6f has its CatchHandler @ 0059dc78 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


