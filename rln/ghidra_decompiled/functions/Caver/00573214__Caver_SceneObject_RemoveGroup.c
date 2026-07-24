/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573214
 * Function: Caver::SceneObject::RemoveGroup
 * Signature: undefined __thiscall RemoveGroup(SceneObject * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup*) */

void __thiscall Caver::SceneObject::RemoveGroup(SceneObject *this,SceneObjectGroup *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  SceneObjectGroup *pSVar5;
  FastVector<Caver::SceneObjectGroup*> *this_00;
  SceneObjectGroup *pSVar6;
  
                    /* try { // try from 00573218 to 0067323f has its CatchHandler @ 00573b60 */
  this_00 = *(FastVector<Caver::SceneObjectGroup*> **)(this + 0x28);
  if (this_00 != (FastVector<Caver::SceneObjectGroup*> *)0x0) {
    iVar1 = *(int *)this_00;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        pSVar6 = (SceneObjectGroup *)0x0;
      }
      else {
        lVar4 = (long)iVar1 * 8;
        lVar3 = (long)iVar1 + 1;
        pSVar5 = (SceneObjectGroup *)0x0;
        do {
          lVar4 = lVar4 + -8;
          pSVar6 = *(SceneObjectGroup **)(*(long *)(this_00 + 8) + lVar4);
          *(SceneObjectGroup **)(*(long *)(this_00 + 8) + lVar4) = pSVar5;
                    /* try { // try from 00573254 to 0067325f has its CatchHandler @ 00573c00 */
          if (pSVar6 == param_1) {
            iVar2 = iVar1 + -1;
            goto LAB_005732bc;
          }
          lVar3 = lVar3 + -1;
          pSVar5 = pSVar6;
        } while (1 < lVar3);
      }
      iVar2 = iVar1 + -1;
      *(int *)this_00 = iVar2;
      if (*(int *)(this_00 + 4) < iVar1) {
        iVar1 = *(int *)(this_00 + 4) * 2;
        if (iVar1 < 0xb) {
          iVar1 = 10;
        }
        FastVector<Caver::SceneObjectGroup*>::Resize(this_00,iVar1);
        iVar2 = *(int *)this_00;
      }
                    /* try { // try from 005732a8 to 006732d7 has its CatchHandler @ 005738a4 */
      *(SceneObjectGroup **)(*(long *)(this_00 + 8) + (long)iVar2 * 8) = pSVar6;
      iVar2 = iVar2 + 1;
LAB_005732bc:
      *(int *)this_00 = iVar2;
    }
  }
  return;
}


