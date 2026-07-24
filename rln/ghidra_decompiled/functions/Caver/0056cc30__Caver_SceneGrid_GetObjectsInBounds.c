/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056cc30
 * Function: Caver::SceneGrid::GetObjectsInBounds
 * Signature: undefined __thiscall GetObjectsInBounds(SceneGrid * this, Rectangle * param_1, void * * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&, void***) */

int __thiscall
Caver::SceneGrid::GetObjectsInBounds(SceneGrid *this,Rectangle *param_1,void ***param_2)

{
  SceneGridLayer *this_00;
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  FastVector *pFVar5;
  FastVector<void*> *this_01;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
                    /* try { // try from 0056cc40 to 0066cc5b has its CatchHandler @ 0056d3b8 */
  pFVar5 = (FastVector *)(this + 0x20);
  *(undefined4 *)pFVar5 = 0;
  this_01 = (FastVector<void*> *)(this + 0x30);
  *(undefined4 *)this_01 = 0;
  if (0 < *(int *)this) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      this_00 = *(SceneGridLayer **)(*(long *)(this + 8) + lVar6);
      plVar1 = (long *)((undefined8 *)(*(long *)(this + 8) + lVar6))[1];
      if (plVar1 != (long *)0x0) {
                    /* try { // try from 0056cc90 to 0066cc97 has its CatchHandler @ 0056d3b4 */
        plVar1[1] = plVar1[1] + 1;
      }
                    /* try { // try from 0056cc98 to 0066ccab has its CatchHandler @ 0056d3b0 */
      SceneGridLayer::GetEntriesInBounds(this_00,param_1,pFVar5);
                    /* try { // try from 0056ccac to 0066ccbf has its CatchHandler @ 0056d548 */
      if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[1], plVar1[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 0056ccc0 to 0066cccf has its CatchHandler @ 0056d380 */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar3 = plVar1[2];
        plVar1[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
                    /* try { // try from 0056ccf0 to 0066ccf3 has its CatchHandler @ 0056d548 */
    } while (lVar7 < *(int *)this);
    iVar4 = *(int *)pFVar5;
    if (0 < iVar4) {
      iVar2 = *(int *)(this + 0x30);
      lVar7 = 0;
                    /* try { // try from 0056cd10 to 0066cd17 has its CatchHandler @ 0056d37c */
      do {
                    /* try { // try from 0056cd18 to 0066cd2b has its CatchHandler @ 0056d378 */
        lVar6 = *(long *)(*(long *)(this + 0x28) + lVar7 * 8);
        *(undefined1 *)(lVar6 + 0x10) = 0;
        uVar8 = *(undefined8 *)(lVar6 + 8);
                    /* try { // try from 0056cd2c to 0066cd3f has its CatchHandler @ 0056d510 */
        if (*(int *)(this + 0x34) <= iVar2) {
          iVar4 = *(int *)(this + 0x34) * 2;
          if (iVar4 < 0xb) {
            iVar4 = 10;
          }
                    /* try { // try from 0056cd40 to 0066cd4f has its CatchHandler @ 0056d348 */
          FastVector<void*>::Resize(this_01,iVar4);
          iVar2 = *(int *)this_01;
          iVar4 = *(int *)pFVar5;
        }
        lVar7 = lVar7 + 1;
        *(undefined8 *)(*(long *)(this + 0x38) + (long)iVar2 * 8) = uVar8;
        iVar2 = iVar2 + 1;
        *(int *)this_01 = iVar2;
      } while (lVar7 < iVar4);
      goto LAB_0056cd74;
    }
  }
  iVar2 = *(int *)(this + 0x30);
                    /* try { // try from 0056cd70 to 0066cd73 has its CatchHandler @ 0056d510 */
LAB_0056cd74:
  *param_2 = *(void ***)(this + 0x38);
                    /* try { // try from 0056cd90 to 0066cd97 has its CatchHandler @ 0056d344 */
  return iVar2;
}


