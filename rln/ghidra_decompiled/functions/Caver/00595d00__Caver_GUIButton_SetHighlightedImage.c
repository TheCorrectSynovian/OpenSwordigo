/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00595d00
 * Function: Caver::GUIButton::SetHighlightedImage
 * Signature: undefined __thiscall SetHighlightedImage(GUIButton * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::GUIButton::SetHighlightedImage(GUIButton *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  GUITexturedRect *this_00;
  long *plVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)param_1 == 0) {
    plVar4 = *(long **)(this + 0x150);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00595d78 with catch @ 00595da8
                        */
    *(undefined8 *)(this + 0x150) = 0;
                    /* catch() { ... } // from try @ 00595e5c with catch @ 00595dac */
    if (plVar4 != (long *)0x0) {
      plVar3 = (long *)*plVar4;
                    /* try { // try from 00595dc4 to 00695dcb has its CatchHandler @ 00595e68 */
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      operator_delete(plVar4);
    }
  }
  else {
    this_00 = *(GUITexturedRect **)(this + 0x150);
    if (this_00 == (GUITexturedRect *)0x0) {
      this_00 = operator_new(0x70);
      GUITexturedRect::GUITexturedRect(this_00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00595afc with catch @ 00595d4c
                        */
      plVar4 = *(long **)(this + 0x150);
      *(GUITexturedRect **)(this + 0x150) = this_00;
      if (plVar4 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00595a90 with catch @ 00595d58
                        */
        plVar3 = (long *)*plVar4;
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 00595d78 to 00695d9f has its CatchHandler @ 00595da8 */
          (**(code **)(*plVar3 + 8))();
        }
        operator_delete(plVar4);
        this_00 = *(GUITexturedRect **)(this + 0x150);
      }
    }
    local_50 = 0x3f0000003f000000;
    GUITexturedRect::InitWithTexture(this_00,param_1,(Vector2 *)&local_50);
                    /* try { // try from 00595da0 to 00695dab has its CatchHandler @ 005959d0 */
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00595df8 to 00695e03 has its CatchHandler @ 00595e10 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


