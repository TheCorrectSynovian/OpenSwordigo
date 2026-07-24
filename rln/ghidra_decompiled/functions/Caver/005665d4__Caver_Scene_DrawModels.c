/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005665d4
 * Function: Caver::Scene::DrawModels
 * Signature: undefined __thiscall DrawModels(Scene * this, RenderingContext * param_1, Matrix4 * param_2, bool param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::DrawModels(Caver::RenderingContext*, Caver::Matrix4 const&, bool, bool) */

void __thiscall
Caver::Scene::DrawModels
          (Scene *this,RenderingContext *param_1,Matrix4 *param_2,bool param_3,bool param_4)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  Scene *pSVar8;
  ModelComponent *this_00;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  
                    /* try { // try from 005665e4 to 006665f7 has its CatchHandler @ 00566738 */
                    /* try { // try from 005665f8 to 00666603 has its CatchHandler @ 005666c8 */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00566604 to 0066673b has its CatchHandler @ 00566570 */
  plVar5 = (long *)ComponentManager::ComponentCollectionForInterface
                             ((ComponentManager *)(this + 0x1e0),(long)PTR_Interface_007e7860);
  fVar3 = DAT_00683944;
  plVar1 = (long *)plVar5[1];
  for (plVar9 = (long *)*plVar5; (plVar1 != plVar9 && (*(long *)(*plVar9 + 0x28) == 0));
      plVar9 = plVar9 + 1) {
  }
  if (plVar1 != plVar9) {
    auVar11 = NEON_fmov(0x3f800000,4);
    plVar6 = plVar1;
    do {
      this_00 = (ModelComponent *)*plVar9;
      if (((this_00[0x9c] != (ModelComponent)0x0) == param_4) &&
         (((!param_3 || (fVar3 <= *(float *)(this_00 + 0x98))) ||
          (this_00[0x135] != (ModelComponent)0x0)))) {
        lVar7 = *(long *)(*(long *)(this_00 + 0x28) + 0xf8);
        if (lVar7 == 0) {
          local_88 = *(undefined8 *)(this + 0x32c);
          local_80 = *(undefined4 *)(this + 0x334);
          pSVar8 = this + 0x338;
        }
        else {
          local_88 = *(undefined8 *)(lVar7 + 0x38);
                    /* catch() { ... } // from try @ 005665f8 with catch @ 005666c8 */
          local_80 = *(undefined4 *)(lVar7 + 0x40);
          pSVar8 = (Scene *)(lVar7 + 0x44);
        }
        local_7c = *(undefined4 *)pSVar8;
        bVar4 = Rectangle::IntersectsWithRect
                          ((Rectangle *)(*(long *)(this_00 + 0x28) + 0xa4),(Rectangle *)&local_88);
        this_00[0x13e] = (ModelComponent)(bVar4 & 1);
        if ((bVar4 & 1) != 0) {
          uVar10 = auVar11._0_8_;
          uVar12 = auVar11._8_8_;
          if (this[0x3f0] != (Scene)0x0) {
            uVar10 = *(undefined8 *)(this + 0x3f4);
            uVar12 = *(undefined8 *)(this + 0x3fc);
          }
                    /* catch() { ... } // from try @ 005665e4 with catch @ 00566738 */
          *(undefined8 *)(this_00 + 0xb8) = uVar12;
          *(undefined8 *)(this_00 + 0xb0) = uVar10;
                    /* try { // try from 0056673c to 006667c3 has its CatchHandler @ 0056673c
                       catch() { ... } // from try @ 0056673c with catch @ 0056673c
                       catch() { ... } // from try @ 005667e4 with catch @ 0056673c
                       catch() { ... } // from try @ 005669b4 with catch @ 0056673c
                       catch() { ... } // from try @ 00566a7c with catch @ 0056673c
                       catch() { ... } // from try @ 00566c54 with catch @ 0056673c */
          ModelComponent::Draw(this_00,param_1,param_2,param_3);
        }
        plVar6 = (long *)plVar5[1];
      }
      do {
        plVar9 = plVar9 + 1;
        if (plVar9 == plVar6) break;
      } while (*(long *)(*plVar9 + 0x28) == 0);
    } while (plVar1 != plVar9);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


