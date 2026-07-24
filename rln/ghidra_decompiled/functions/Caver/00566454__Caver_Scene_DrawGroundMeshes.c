/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00566454
 * Function: Caver::Scene::DrawGroundMeshes
 * Signature: undefined __thiscall DrawGroundMeshes(Scene * this, RenderingContext * param_1, Matrix4 * param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::DrawGroundMeshes(Caver::RenderingContext*, Caver::Matrix4 const&, bool) */

void __thiscall
Caver::Scene::DrawGroundMeshes(Scene *this,RenderingContext *param_1,Matrix4 *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  GroundMeshComponent *this_00;
  long lVar4;
  Scene *pSVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00566370 with catch @ 005664a0 */
  plVar3 = (long *)ComponentManager::ComponentCollectionForInterface
                             ((ComponentManager *)(this + 0x1e0),(long)PTR_Interface_007e7528);
  plVar1 = (long *)plVar3[1];
  for (plVar7 = (long *)*plVar3; (plVar1 != plVar7 && (*(long *)(*plVar7 + 0x28) == 0));
      plVar7 = plVar7 + 1) {
  }
  if (plVar1 != plVar7) {
    auVar9 = NEON_fmov(0x3f800000,4);
    plVar6 = plVar1;
    do {
      this_00 = (GroundMeshComponent *)*plVar7;
                    /* catch() { ... } // from try @ 0056635c with catch @ 00566504 */
      if ((this_00[0xc0] != (GroundMeshComponent)0x0) == param_3) {
        lVar4 = *(long *)(*(long *)(this_00 + 0x28) + 0xf8);
        if (lVar4 == 0) {
          local_78 = *(undefined8 *)(this + 0x32c);
          local_70 = *(undefined4 *)(this + 0x334);
          pSVar5 = this + 0x338;
        }
        else {
          local_78 = *(undefined8 *)(lVar4 + 0x38);
          local_70 = *(undefined4 *)(lVar4 + 0x40);
          pSVar5 = (Scene *)(lVar4 + 0x44);
        }
        local_6c = *(undefined4 *)pSVar5;
        uVar8 = auVar9._0_8_;
        uVar10 = auVar9._8_8_;
        if (this[0x3f0] != (Scene)0x0) {
          uVar8 = *(undefined8 *)(this + 0x3f4);
          uVar10 = *(undefined8 *)(this + 0x3fc);
        }
        *(undefined8 *)(this_00 + 0xcc) = uVar10;
        *(undefined8 *)(this_00 + 0xc4) = uVar8;
        GroundMeshComponent::Draw(this_00,param_1,(Rectangle *)&local_78,param_2);
        plVar6 = (long *)plVar3[1];
      }
      do {
                    /* try { // try from 00566570 to 006665e3 has its CatchHandler @ 00566570
                       catch() { ... } // from try @ 00566570 with catch @ 00566570
                       catch() { ... } // from try @ 00566604 with catch @ 00566570 */
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar6) break;
      } while (*(long *)(*plVar7 + 0x28) == 0);
    } while (plVar1 != plVar7);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


