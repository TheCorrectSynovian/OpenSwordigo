/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a735c
 * Function: Caver::GUIEffect::Draw
 * Signature: undefined __thiscall Draw(GUIEffect * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffect::Draw(Caver::RenderingContext*) */

void __thiscall Caver::GUIEffect::Draw(GUIEffect *this,RenderingContext *param_1)

{
  Color *pCVar1;
  long lVar2;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x38) != 0) {
    RenderingContext::SetBlendingEnabled(param_1,true);
    RenderingContext::SetDefaultBlendFunc(param_1);
    if (*(int *)(this + 0x38) == 2) {
      if (DAT_00683944 <= *(float *)(this + 0x4c)) {
        RenderingContext::UseProgram(param_1,0);
        pCVar1 = (Color *)(this + 0x48);
        RenderingContext::SetColor(param_1,pCVar1);
        local_58 = *(undefined4 *)(this + 0x50);
        fStack_44 = *(float *)(this + 0x54);
        local_50 = *(undefined4 *)(this + 0x58);
        local_54 = (*(float *)(this + 0x5c) + fStack_44) - *(float *)(this + 0x4c) * 30.0;
        local_4c = (*(float *)(this + 0x5c) + fStack_44) - local_54;
        local_3c = (*(float *)(this + 0x4c) * 30.0 + fStack_44) - fStack_44;
        local_48 = local_58;
        local_40 = local_50;
        RenderingContext::FillRect(param_1,(Rectangle *)&local_48,pCVar1,0.0);
                    /* catch() { ... } // from try @ 005a73d8 with catch @ 005a74c4 */
        RenderingContext::FillRect(param_1,(Rectangle *)&local_58,pCVar1,0.0);
      }
    }
    else {
                    /* try { // try from 005a73b0 to 006a73c3 has its CatchHandler @ 005a7594 */
                    /* try { // try from 005a73c4 to 006a73d3 has its CatchHandler @ 005a7528 */
      if ((*(int *)(this + 0x38) == 1) && (DAT_00683944 <= *(float *)(this + 0x4c))) {
        RenderingContext::UseProgram(param_1,2);
                    /* try { // try from 005a73d8 to 006a73e7 has its CatchHandler @ 005a74c4 */
                    /* try { // try from 005a73e8 to 006a7597 has its CatchHandler @ 005a7308 */
        RenderingContext::SetVertexAttribPointer
                  (param_1,0x8074,3,0x1406,0x10,*(undefined8 *)(this + 0x68));
        RenderingContext::SetVertexAttribPointer
                  (param_1,0x8076,4,0x1401,0x10,*(long *)(this + 0x68) + 0xc);
        RenderingContext::DrawArrays(param_1,4,0,*(int *)(this + 0x60));
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


