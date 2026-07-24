/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00597e24
 * Function: Caver::GUILabel::UpdateBounds
 * Signature: undefined __thiscall UpdateBounds(GUILabel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::UpdateBounds() */

void __thiscall Caver::GUILabel::UpdateBounds(GUILabel *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  FontText *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
                    /* try { // try from 00597e2c to 00697ea7 has its CatchHandler @ 00597b98 */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  fVar9 = *(float *)(this + 0x84);
  fVar7 = *(float *)(this + 0x88);
  fVar8 = *(float *)(this + 0x8c);
  fVar2 = *(float *)(this + 0x90);
  pFVar6 = *(FontText **)(this + 0x120);
  fVar1 = *(float *)(pFVar6 + 0x48);
  fVar3 = *(float *)(pFVar6 + 0x4c);
  local_68 = fVar9;
  local_64 = fVar7;
  local_60 = fVar8;
  fStack_5c = fVar2;
  FontText::AlignHorizontally(pFVar6,*(undefined4 *)(this + 0x130));
  if (fVar8 < 1.0) {
    fVar8 = 1.0;
    local_60 = 1.0;
  }
  iVar4 = *(int *)(this + 0x130);
  if (iVar4 == 0) {
    fVar9 = *(float *)(*(long *)(this + 0x120) + 0x40);
  }
  else if (iVar4 == 1) {
    fVar9 = *(float *)(*(long *)(this + 0x120) + 0x40) - (fVar8 - fVar1);
  }
  else if (iVar4 == 4) {
                    /* try { // try from 00597ea8 to 00697ebb has its CatchHandler @ 00597f60 */
                    /* try { // try from 00597ebc to 00697f33 has its CatchHandler @ 00597b98 */
    fVar9 = *(float *)(*(long *)(this + 0x120) + 0x40) + (fVar8 - fVar1) * -0.5;
  }
  iVar4 = *(int *)(this + 0x134);
  if (iVar4 == 2) {
    fVar7 = *(float *)(*(long *)(this + 0x120) + 0x44);
  }
  else if (iVar4 == 3) {
                    /* try { // try from 00597f34 to 00697ff7 has its CatchHandler @ 00598004 */
    fVar7 = *(float *)(*(long *)(this + 0x120) + 0x44) - (fVar2 - fVar3);
  }
  else if (iVar4 == 4) {
                    /* catch() { ... } // from try @ 00597cb0 with catch @ 00597f14 */
    fVar7 = *(float *)(*(long *)(this + 0x120) + 0x44) - ((fVar2 - fVar3) * 0.5 + 1.0);
  }
                    /* catch() { ... } // from try @ 00597ea8 with catch @ 00597f60 */
  local_68 = (float)(int)fVar9;
  local_64 = (float)(int)fVar7;
  GUIView::SetBounds((GUIView *)this,(Rectangle *)&local_68);
  if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00597e18 with catch @ 00597f94 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


