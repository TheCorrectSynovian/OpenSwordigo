/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aa054
 * Function: Caver::GUITextBubble::SetPegTexture
 * Signature: undefined __thiscall SetPegTexture(GUITextBubble * this, intrusive_ptr * param_1, Color * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&, Caver::Color
   const&) */

void __thiscall
Caver::GUITextBubble::SetPegTexture(GUITextBubble *this,intrusive_ptr *param_1,Color *param_2)

{
  long lVar1;
  Sprite *pSVar2;
  long lVar3;
  long *plVar4;
  Sprite *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005a9fd8 with catch @ 005aa078 */
  plVar4 = *(long **)(this + 0x48);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
                    /* try { // try from 005aa09c to 006aa0c3 has its CatchHandler @ 005aa0c8 */
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 005aa0c4 to 006aa147 has its CatchHandler @ 005a9de0 */
                    /* catch() { ... } // from try @ 005aa09c with catch @ 005aa0c8 */
                    /* catch() { ... } // from try @ 005a9f48 with catch @ 005aa0cc */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (*(long *)param_1 != 0) {
    pSVar2 = operator_new(0x58);
    *(undefined8 *)(pSVar2 + 0x20) = 0;
    *(undefined8 *)(pSVar2 + 0x28) = 0;
    *(undefined8 *)(pSVar2 + 0x10) = 0;
    *(undefined8 *)(pSVar2 + 0x18) = 0;
    *(undefined8 *)pSVar2 = 0;
    *(undefined8 *)(pSVar2 + 8) = 0;
    *(undefined4 *)(pSVar2 + 0x30) = 0;
    *(undefined8 *)(pSVar2 + 0x40) = 0;
    *(undefined8 *)(pSVar2 + 0x48) = 0;
    *(undefined8 *)(pSVar2 + 0x38) = 0;
    pSVar2[0x50] = (Sprite)0x0;
    local_58 = pSVar2;
    boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&local_50,pSVar2);
    boost::detail::sp_enable_shared_from_this(&local_58,pSVar2,pSVar2);
    pSVar2 = *(Sprite **)(this + 0x40);
    plVar4 = *(long **)(this + 0x48);
    *(Sprite **)(this + 0x40) = local_58;
    *(long **)(this + 0x48) = local_50;
                    /* catch() { ... } // from try @ 005a9f34 with catch @ 005aa13c */
    local_58 = pSVar2;
    local_50 = plVar4;
                    /* catch() { ... } // from try @ 005aa184 with catch @ 005aa148
                       catch() { ... } // from try @ 005aa230 with catch @ 005aa148
                       catch() { ... } // from try @ 005aa2dc with catch @ 005aa148 */
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 005aa170 to 006aa183 has its CatchHandler @ 005aa3b0 */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
                    /* try { // try from 005aa184 to 006aa21b has its CatchHandler @ 005aa148 */
    Sprite::Init(*(Sprite **)(this + 0x40),param_1,2,4,true);
    local_50 = *(long **)(*(long *)param_1 + 0x54);
    local_58 = (Sprite *)0x0;
    Sprite::AddRectangle
              (*(Sprite **)(this + 0x40),(Rectangle *)&local_58,
               (Rectangle *)(*(long *)param_1 + 0x5c),param_2);
  }
  this[0x20] = (GUITextBubble)0x1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


