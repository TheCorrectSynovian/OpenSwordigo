/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054b14c
 * Function: Caver::ModelInstance::Draw
 * Signature: undefined __thiscall Draw(ModelInstance * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelInstance::Draw(Caver::RenderingContext*) */

void __thiscall Caver::ModelInstance::Draw(ModelInstance *this,RenderingContext *param_1)

{
  ModelInstance MVar1;
  long lVar2;
  FloatColor *pFVar3;
  FloatColor *extraout_x1;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (0 < (int)((ulong)(*(long *)(*(long *)this + 0x10) - *(long *)(*(long *)this + 8)) >> 4)) {
    lVar5 = 0;
                    /* try { // try from 0054b194 to 0064b1bb has its CatchHandler @ 0054b830 */
    lVar6 = 0;
    pFVar3 = (FloatColor *)param_1;
    do {
      lVar4 = **(long **)(*(long *)(this + 0x28) + lVar5);
      if (param_1[0x72] == (RenderingContext)0x0) {
        fVar7 = *(float *)(this + 0x30);
                    /* try { // try from 0054b224 to 0064b23f has its CatchHandler @ 0054b830 */
        local_58 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0xb0) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(this + 0x34) >> 0x20) * fVar7,
                            (float)*(undefined8 *)(lVar4 + 0xb0) *
                            (float)*(undefined8 *)(this + 0x34) * fVar7);
        local_50 = (ulong)(uint)(*(float *)(lVar4 + 0xb8) * *(float *)(this + 0x3c) * fVar7);
        Color::FromFloatColor((Color *)&local_58,pFVar3);
                    /* try { // try from 0054b244 to 0064b253 has its CatchHandler @ 0054b828 */
        RenderingContext::SetColor(param_1,(Color *)&local_68);
LAB_0054b250:
        MVar1 = this[0x44];
      }
      else {
        if (*(int *)param_1 != 0) goto LAB_0054b250;
                    /* try { // try from 0054b1c4 to 0064b1cb has its CatchHandler @ 0054b5f8 */
        fVar7 = (float)*(undefined8 *)(lVar4 + 0xb0) * (float)*(undefined8 *)(this + 0x34);
        fVar8 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb0) >> 0x20) *
                (float)((ulong)*(undefined8 *)(this + 0x34) >> 0x20);
        local_58 = CONCAT44(fVar8,fVar7);
                    /* try { // try from 0054b1cc to 0064b1d7 has its CatchHandler @ 0054b5b8 */
        fVar9 = (float)*(undefined8 *)(lVar4 + 0xb8) * (float)*(undefined8 *)(this + 0x3c);
        fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20) *
                 (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20);
        local_50 = CONCAT44(fVar10,fVar9);
        fVar11 = *(float *)(this + 0x30);
        local_68 = CONCAT44(fVar8 * fVar11,fVar7 * fVar11);
        uStack_60 = CONCAT44(fVar10 * fVar11,fVar9 * fVar11);
        glMaterialfv(0x408,0x1602,&local_58);
        glMaterialfv(0x408,0x1600,&local_68);
        MVar1 = this[0x44];
      }
      if (MVar1 != (ModelInstance)0x0) {
                    /* try { // try from 0054b260 to 0064b273 has its CatchHandler @ 0054b690 */
        RenderingContext::BindTexture
                  (param_1,*(Texture **)(**(long **)(*(long *)(this + 0x28) + lVar5) + 0xd8));
      }
                    /* try { // try from 0054b278 to 0064b27f has its CatchHandler @ 0054b7c4 */
      MeshInstance::Draw(*(MeshInstance **)(*(long *)(this + 0x28) + lVar5),param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
                    /* try { // try from 0054b294 to 0064b29f has its CatchHandler @ 0054b828 */
      pFVar3 = extraout_x1;
    } while (lVar6 < (int)((ulong)(*(long *)(*(long *)this + 0x10) - *(long *)(*(long *)this + 8))
                          >> 4));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0054b2b8 to 0064b2bf has its CatchHandler @ 0054b7c4 */
                    /* try { // try from 0054b2c0 to 0064b5a3 has its CatchHandler @ 0054aae4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


