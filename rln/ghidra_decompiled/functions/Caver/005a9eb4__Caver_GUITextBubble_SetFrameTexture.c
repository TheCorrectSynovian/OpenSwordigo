/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9eb4
 * Function: Caver::GUITextBubble::SetFrameTexture
 * Signature: undefined __thiscall SetFrameTexture(GUITextBubble * this, intrusive_ptr * param_1, Color * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&, Caver::Color
   const&) */

void __thiscall
Caver::GUITextBubble::SetFrameTexture(GUITextBubble *this,intrusive_ptr *param_1,Color *param_2)

{
  long lVar1;
  GUIRoundedRect *pGVar2;
  long lVar3;
  long *plVar4;
  Color local_60;
  Color local_5f;
  Color local_5e;
  Color local_5d;
  GUIRoundedRect *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(this + 0x38);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = *(long *)param_1;
      goto joined_r0x005a9f24;
    }
  }
  lVar3 = *(long *)param_1;
joined_r0x005a9f24:
  if (lVar3 != 0) {
    pGVar2 = operator_new(0xa8);
                    /* try { // try from 005a9f34 to 006a9f47 has its CatchHandler @ 005aa13c */
    GUIRoundedRect::GUIRoundedRect(pGVar2);
    local_58 = pGVar2;
                    /* try { // try from 005a9f48 to 006a9f57 has its CatchHandler @ 005aa0cc */
    boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>
              ((shared_count *)&local_50,pGVar2);
                    /* try { // try from 005a9f58 to 006a9fd7 has its CatchHandler @ 005a9de0 */
    boost::detail::sp_enable_shared_from_this(&local_58,pGVar2,pGVar2);
    pGVar2 = *(GUIRoundedRect **)(this + 0x30);
    plVar4 = *(long **)(this + 0x38);
    *(GUIRoundedRect **)(this + 0x30) = local_58;
    *(long **)(this + 0x38) = local_50;
    local_58 = pGVar2;
    local_50 = plVar4;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    GUIRoundedRect::InitWithTexture(*(GUIRoundedRect **)(this + 0x30),param_1);
    local_60 = *param_2;
    local_5f = param_2[1];
                    /* try { // try from 005a9fd8 to 006a9fdb has its CatchHandler @ 005aa078 */
                    /* try { // try from 005a9fdc to 006aa09b has its CatchHandler @ 005a9de0 */
    local_5e = param_2[2];
    local_5d = param_2[3];
    GUIRoundedRect::SetColor(*(GUIRoundedRect **)(this + 0x30),&local_60);
  }
  this[0x20] = (GUITextBubble)0x1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


