/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d1b8
 * Function: Caver::AddCappedRectToSprite
 * Signature: undefined __cdecl AddCappedRectToSprite(Sprite * param_1, intrusive_ptr * param_2, Rectangle * param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AddCappedRectToSprite(Caver::Sprite*, boost::intrusive_ptr<Caver::Texture> const&,
   Caver::Rectangle const&, float) */

void Caver::AddCappedRectToSprite
               (Sprite *param_1,intrusive_ptr *param_2,Rectangle *param_3,float param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0059d1dc to 0069d1e3 has its CatchHandler @ 0059d35c */
  lVar2 = *(long *)param_2;
  local_68 = *(undefined8 *)param_3;
  fVar5 = *(float *)(param_3 + 8);
                    /* try { // try from 0059d1f8 to 0069d20b has its CatchHandler @ 0059d350 */
  local_5c = *(undefined4 *)(param_3 + 0xc);
  fVar7 = fVar5 * param_4;
  fVar3 = *(float *)(lVar2 + 0x54) * 0.5;
  fVar6 = fVar5 * 0.5;
                    /* try { // try from 0059d218 to 0069d223 has its CatchHandler @ 0059d368 */
  local_78 = *(undefined8 *)(lVar2 + 0x5c);
  fVar4 = fVar3 + -1.0;
  fVar5 = (fVar5 - fVar3) + 1.0;
  fVar3 = fVar6;
  if (fVar4 <= fVar6) {
    fVar3 = fVar4;
  }
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar7 <= fVar3) {
    fVar3 = fVar7;
  }
  local_6c = *(undefined4 *)(lVar2 + 0x68);
  local_60 = (fVar3 + (float)local_68) - (float)local_68;
                    /* try { // try from 0059d260 to 0069d287 has its CatchHandler @ 0059d34c */
  local_70 = (local_60 / *(float *)(lVar2 + 0x54)) * *(float *)(lVar2 + 100);
  local_7c = 0xffffffff;
  Sprite::AddRectangle(param_1,(Rectangle *)&local_68,(Rectangle *)&local_78,(Color *)&local_7c);
                    /* try { // try from 0059d288 to 0069d3e7 has its CatchHandler @ 0059d17c */
  fVar3 = (float)local_68 + local_60;
  if (fVar3 < fVar7) {
    local_68 = CONCAT44(local_68._4_4_,fVar3);
    fVar4 = fVar5;
    if (fVar7 <= fVar5) {
      fVar4 = fVar7;
    }
    local_70 = (float)local_78 + local_70;
    local_60 = (fVar4 + *(float *)param_3) - fVar3;
    local_78 = CONCAT44(local_78._4_4_,local_70);
    lVar2 = *(long *)param_2;
    local_70 = ((*(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 100)) -
               *(float *)(lVar2 + 100) *
               ((*(float *)(param_3 + 8) - fVar5) / *(float *)(lVar2 + 0x54))) - local_70;
    local_7c = 0xffffffff;
    Sprite::AddRectangle(param_1,(Rectangle *)&local_68,(Rectangle *)&local_78,(Color *)&local_7c);
    fVar3 = (float)local_68 + local_60;
  }
  if (fVar3 < fVar7) {
    local_68 = CONCAT44(local_68._4_4_,fVar3);
    local_60 = (fVar7 + *(float *)param_3) - fVar3;
    local_78 = CONCAT44(local_78._4_4_,(float)local_78 + local_70);
                    /* catch() { ... } // from try @ 0059d260 with catch @ 0059d34c */
                    /* catch() { ... } // from try @ 0059d1f8 with catch @ 0059d350 */
                    /* catch() { ... } // from try @ 0059d1dc with catch @ 0059d35c */
                    /* catch() { ... } // from try @ 0059d218 with catch @ 0059d368 */
    local_7c = 0xffffffff;
    local_70 = (local_60 / *(float *)(*(long *)param_2 + 0x54)) * *(float *)(*(long *)param_2 + 100)
    ;
    Sprite::AddRectangle(param_1,(Rectangle *)&local_68,(Rectangle *)&local_78,(Color *)&local_7c);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


