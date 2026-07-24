/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aa9a8
 * Function: Caver::GUITextBubble::UpdateLayout
 * Signature: undefined __thiscall UpdateLayout(GUITextBubble * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::UpdateLayout() */

void __thiscall Caver::GUITextBubble::UpdateLayout(GUITextBubble *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong local_60;
  ulong local_50;
  ulong local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x60);
                    /* try { // try from 005aa9e0 to 006aa9f3 has its CatchHandler @ 005aadfc */
  fVar9 = *(float *)(lVar2 + 0x40) - *(float *)(this + 0x70);
                    /* try { // try from 005aa9f4 to 006aaa03 has its CatchHandler @ 005aadc4 */
  fVar8 = *(float *)(lVar2 + 0x44) - *(float *)(this + 0x74);
                    /* try { // try from 005aaa04 to 006aaadf has its CatchHandler @ 005aa898 */
  fVar7 = (*(float *)(this + 0x78) +
          fVar9 + ((*(float *)(lVar2 + 0x40) + *(float *)(lVar2 + 0x48)) - fVar9)) - fVar9;
  if (DAT_00683944 < DAT_00688634 - fVar7) {
    fVar5 = (DAT_00688634 - fVar7) * 0.5;
    fVar7 = fVar9 + fVar7;
    fVar9 = (float)(int)(fVar9 - fVar5);
    fVar7 = (float)(int)(fVar5 + fVar9 + (fVar7 - fVar9)) - fVar9;
  }
  fVar5 = (*(float *)(this + 0x7c) +
          fVar8 + ((*(float *)(lVar2 + 0x44) + *(float *)(lVar2 + 0x4c)) - fVar8)) - fVar8;
  if (*(long *)(this + 0x30) == 0) {
    *(float *)(this + 0x10) = fVar9;
    *(float *)(this + 0x14) = fVar8;
    *(float *)(this + 0x18) = fVar7;
    *(float *)(this + 0x1c) = fVar5;
    lVar2 = *(long *)(this + 0x50);
    goto joined_r0x005aaa8c;
  }
  Vector2::Rounded();
  local_48 = local_50;
  fVar6 = *(float *)this;
  fVar3 = (float)local_50;
  local_40 = fVar7;
  fStack_3c = fVar5;
  if (fVar6 <= fVar3) {
    fVar6 = fVar6 + *(float *)(this + 8);
                    /* try { // try from 005aaaf4 to 006aab03 has its CatchHandler @ 005aad88 */
    if (fVar6 < fVar7 + fVar3) {
                    /* try { // try from 005aab04 to 006aabeb has its CatchHandler @ 005aa898 */
      if (fVar6 <= DAT_00684320) {
        fVar6 = DAT_00684320;
      }
      fVar7 = fVar6 - (fVar7 + fVar3);
      if (0.0 < fVar7) {
        fVar7 = 0.0;
      }
      goto LAB_005aab14;
    }
  }
  else {
    if (DAT_00689378 < fVar6) {
      fVar6 = DAT_00689378;
    }
                    /* try { // try from 005aaae0 to 006aaaf3 has its CatchHandler @ 005aadc0 */
    fVar7 = fVar6 - fVar3;
    if (fVar6 - fVar3 <= 0.0) {
      fVar7 = 0.0;
    }
LAB_005aab14:
    local_50 = (ulong)(uint)fVar7;
    Rectangle::Translate((Rectangle *)&local_48,(Vector2 *)&local_50);
  }
  GUIRoundedRect::CreateWithOuterBounds(*(GUIRoundedRect **)(this + 0x30),(Rectangle *)&local_48);
  local_50 = CONCAT44(((float)((ulong)*(undefined8 *)(*(long *)(this + 0x30) + 0xc) >> 0x20) - fVar8
                      ) + (float)((ulong)DAT_006840e0 >> 0x20),
                      ((float)*(undefined8 *)(*(long *)(this + 0x30) + 0xc) - fVar9) +
                      (float)DAT_006840e0);
  Vector2::Rounded();
  local_50 = local_60;
  FontText::Translate(*(FontText **)(this + 0x60),(Vector2 *)&local_50);
  uVar4 = *(undefined8 *)(*(long *)(this + 0x30) + 0xc);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(*(long *)(this + 0x30) + 0x14);
  *(undefined8 *)(this + 0x10) = uVar4;
  lVar2 = *(long *)(this + 0x50);
joined_r0x005aaa8c:
  if (lVar2 != 0) {
    Vector2::Rounded();
    uVar4 = *(undefined8 *)(*(Sprite **)(this + 0x50) + 8);
    local_50 = CONCAT44((float)(local_48 >> 0x20) - (float)((ulong)uVar4 >> 0x20),
                        (float)local_48 - (float)uVar4);
    Sprite::Translate(*(Sprite **)(this + 0x50),(Vector2 *)&local_50);
  }
                    /* try { // try from 005aabec to 006aabef has its CatchHandler @ 005aad34 */
                    /* try { // try from 005aabf0 to 006aad57 has its CatchHandler @ 005aa898 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


