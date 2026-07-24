/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056cb40
 * Function: Caver::SceneGrid::AddObject
 * Signature: undefined __thiscall AddObject(SceneGrid * this, SceneGridEntry * param_1, Rectangle * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::AddObject(Caver::SceneGridEntry*, Caver::Rectangle const&, float) */

void __thiscall
Caver::SceneGrid::AddObject
          (SceneGrid *this,SceneGridEntry *param_1,Rectangle *param_2,float param_3)

{
  int iVar1;
  SceneGridLayer *this_00;
  long lVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)this;
  if (0 < iVar1) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(this + 8);
    do {
      this_00 = (SceneGridLayer *)*puVar3;
      if (*(float *)this_00 < param_3) goto LAB_0056cb80;
                    /* catch() { ... } // from try @ 0056cad4 with catch @ 0056cb68 */
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (lVar2 < iVar1);
  }
  this_00 = (SceneGridLayer *)(*(undefined8 **)(this + 8))[(long)iVar1 * 2 + -2];
LAB_0056cb80:
  SceneGridLayer::AddObject(this_00,param_1,param_2);
  return;
}


