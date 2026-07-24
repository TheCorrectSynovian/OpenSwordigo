/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056cb84
 * Function: Caver::SceneGrid::MoveObject
 * Signature: undefined __thiscall MoveObject(SceneGrid * this, SceneGridEntry * param_1, Rectangle * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::MoveObject(Caver::SceneGridEntry*, Caver::Rectangle const&, float) */

void __thiscall
Caver::SceneGrid::MoveObject
          (SceneGrid *this,SceneGridEntry *param_1,Rectangle *param_2,float param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  SceneGridLayer *this_00;
  
  iVar1 = *(int *)this;
  if (0 < iVar1) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(this + 8);
    do {
      this_00 = (SceneGridLayer *)*puVar3;
      if (*(float *)this_00 < param_3) goto LAB_0056cbdc;
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (lVar2 < iVar1);
  }
                    /* catch() { ... } // from try @ 0056cac0 with catch @ 0056cbd8 */
  this_00 = (SceneGridLayer *)(*(undefined8 **)(this + 8))[(long)iVar1 * 2 + -2];
LAB_0056cbdc:
                    /* catch() { ... } // from try @ 0056d058 with catch @ 0056cbdc
                       catch() { ... } // from try @ 0056d3ac with catch @ 0056cbdc
                       catch() { ... } // from try @ 0056d5f4 with catch @ 0056cbdc */
  if (this_00 != *(SceneGridLayer **)param_1) {
    SceneGridLayer::RemoveObject(*(SceneGridLayer **)param_1,param_1);
                    /* try { // try from 0056cc04 to 0066cc17 has its CatchHandler @ 0056d484 */
    SceneGridLayer::AddObject(this_00,param_1,param_2);
    return;
  }
                    /* try { // try from 0056cc18 to 0066cc2b has its CatchHandler @ 0056d47c */
  SceneGridLayer::MoveObject(this_00,param_1,param_2);
  return;
}


