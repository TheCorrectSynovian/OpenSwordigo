/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aa868
 * Function: Caver::GUITextBubble::Draw
 * Signature: undefined __thiscall Draw(GUITextBubble * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::Draw(Caver::RenderingContext*) */

void __thiscall Caver::GUITextBubble::Draw(GUITextBubble *this,RenderingContext *param_1)

{
  long lVar1;
  long lVar2;
  Color local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005aa884 to 006aa897 has its CatchHandler @ 005aa3b4 */
                    /* catch() { ... } // from try @ 005aa7b4 with catch @ 005aa888 */
                    /* catch() { ... } // from try @ 005aa3dc with catch @ 005aa88c */
  if (this[0x20] != (GUITextBubble)0x0) {
                    /* catch() { ... } // from try @ 005aa8f0 with catch @ 005aa898
                       catch() { ... } // from try @ 005aaa04 with catch @ 005aa898
                       catch() { ... } // from try @ 005aab04 with catch @ 005aa898
                       catch() { ... } // from try @ 005aabf0 with catch @ 005aa898
                       catch() { ... } // from try @ 005aad80 with catch @ 005aa898 */
    UpdateLayout(this);
    this[0x20] = (GUITextBubble)0x0;
  }
  if (*(GUIRoundedRect **)(this + 0x30) != (GUIRoundedRect *)0x0) {
    GUIRoundedRect::Draw(*(GUIRoundedRect **)(this + 0x30),param_1);
  }
  if (*(long *)(this + 0x40) != 0) {
    RenderingContext::SetBlendingEnabled(param_1,true);
                    /* try { // try from 005aa8cc to 006aa8df has its CatchHandler @ 005aae70 */
    RenderingContext::SetDefaultBlendFunc(param_1);
    RenderingContext::UseProgram(param_1,3);
                    /* try { // try from 005aa8e0 to 006aa8ef has its CatchHandler @ 005aae00 */
    Sprite::Draw(*(Sprite **)(this + 0x40),param_1);
  }
  if (*(FontText **)(this + 0x60) != (FontText *)0x0) {
                    /* try { // try from 005aa8f0 to 006aa9df has its CatchHandler @ 005aa898 */
    FontText::DrawSubstring(*(FontText **)(this + 0x60),param_1,0,*(ulong *)(this + 0x80));
  }
  if (this[0x91] != (GUITextBubble)0x0) {
    RenderingContext::UseProgram(param_1,1);
    lVar2 = *(long *)(this + 0x60);
    local_40 = *(Color *)(lVar2 + 0x10);
    local_3f = *(undefined1 *)(lVar2 + 0x11);
    local_3e = *(undefined1 *)(lVar2 + 0x12);
    local_3d = *(undefined1 *)(lVar2 + 0x13);
    RenderingContext::SetColor(param_1,&local_40);
    Sprite::Draw(*(Sprite **)(this + 0x50),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


