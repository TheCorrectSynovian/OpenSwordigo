/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056ce8c
 * Function: Caver::SceneGrid::GetObjectsNearCamera
 * Signature: undefined __thiscall GetObjectsNearCamera(SceneGrid * this, float param_1, void * * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::GetObjectsNearCamera(float, void***) */

void __thiscall
Caver::SceneGrid::GetObjectsNearCamera(SceneGrid *this,float param_1,void ***param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  FastVector *pFVar4;
  FastVector<void*> *this_00;
  SceneGridLayer *this_01;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  Rectangle aRStack_78 [16];
  long local_68;
  
                    /* try { // try from 0056ce98 to 0066ce9f has its CatchHandler @ 0056d298 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0056cec0 to 0066cee7 has its CatchHandler @ 0056d234 */
  pFVar4 = (FastVector *)(this + 0x20);
  *(undefined4 *)pFVar4 = 0;
  this_00 = (FastVector<void*> *)(this + 0x30);
  *(undefined4 *)this_00 = 0;
  if (0 < *(int *)this) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      this_01 = *(SceneGridLayer **)(*(long *)(this + 8) + lVar5);
      uStack_88 = *(undefined8 *)(this_01 + 0x40);
      local_90 = *(undefined8 *)(this_01 + 0x38);
      Rectangle::RectangleByOutsetting((Rectangle *)&local_90,param_1);
      SceneGridLayer::GetEntriesInBounds(this_01,aRStack_78,pFVar4);
                    /* try { // try from 0056cf20 to 0066cf63 has its CatchHandler @ 0056d488 */
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < *(int *)this);
    iVar3 = *(int *)pFVar4;
    if (0 < iVar3) {
      iVar2 = *(int *)(this + 0x30);
      lVar6 = 0;
      do {
        lVar5 = *(long *)(*(long *)(this + 0x28) + lVar6 * 8);
        *(undefined1 *)(lVar5 + 0x10) = 0;
        uVar7 = *(undefined8 *)(lVar5 + 8);
        if (*(int *)(this + 0x34) <= iVar2) {
          iVar3 = *(int *)(this + 0x34) * 2;
          if (iVar3 < 0xb) {
            iVar3 = 10;
          }
          FastVector<void*>::Resize(this_00,iVar3);
                    /* try { // try from 0056cf7c to 0066cf83 has its CatchHandler @ 0056d23c */
          iVar2 = *(int *)this_00;
          iVar3 = *(int *)pFVar4;
        }
        lVar6 = lVar6 + 1;
        *(undefined8 *)(*(long *)(this + 0x38) + (long)iVar2 * 8) = uVar7;
        iVar2 = iVar2 + 1;
        *(int *)this_00 = iVar2;
      } while (lVar6 < iVar3);
      goto LAB_0056cfac;
    }
  }
  iVar2 = *(int *)(this + 0x30);
LAB_0056cfac:
  *param_2 = *(void ***)(this + 0x38);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0056cfe8 to 0066d00f has its CatchHandler @ 0056d5a8 */
    __stack_chk_fail(iVar2);
  }
  return;
}


