/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005765dc
 * Function: Caver::SceneObjectGroup::RemoveObject
 * Signature: undefined __thiscall RemoveObject(SceneObjectGroup * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject*) */

void __thiscall Caver::SceneObjectGroup::RemoveObject(SceneObjectGroup *this,SceneObject *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  SceneObject *pSVar5;
  FastVector<Caver::SceneObject*> *this_00;
  SceneObject *pSVar6;
  
                    /* try { // try from 005765dc to 006765ef has its CatchHandler @ 0057c464 */
                    /* try { // try from 005765f0 to 00676603 has its CatchHandler @ 0057c45c */
  SceneObject::RemoveGroup(param_1,this);
                    /* try { // try from 00576604 to 00676623 has its CatchHandler @ 0057c454 */
  this_00 = (FastVector<Caver::SceneObject*> *)(this + 0x38);
  iVar1 = *(int *)this_00;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      pSVar6 = (SceneObject *)0x0;
    }
    else {
      lVar4 = (long)iVar1 * 8;
      lVar3 = (long)iVar1 + 1;
      pSVar5 = (SceneObject *)0x0;
      do {
        lVar4 = lVar4 + -8;
        pSVar6 = *(SceneObject **)(*(long *)(this + 0x40) + lVar4);
                    /* try { // try from 0057662c to 0067663f has its CatchHandler @ 0057c44c */
        *(SceneObject **)(*(long *)(this + 0x40) + lVar4) = pSVar5;
        if (pSVar6 == param_1) {
          iVar2 = iVar1 + -1;
          goto LAB_00576698;
        }
        lVar3 = lVar3 + -1;
                    /* try { // try from 00576640 to 00676653 has its CatchHandler @ 0057c444 */
        pSVar5 = pSVar6;
      } while (1 < lVar3);
    }
                    /* try { // try from 00576654 to 00676667 has its CatchHandler @ 0057c43c */
    iVar2 = iVar1 + -1;
    *(int *)(this + 0x38) = iVar2;
    if (*(int *)(this + 0x3c) < iVar1) {
                    /* try { // try from 00576668 to 0067667b has its CatchHandler @ 0057c434 */
      iVar1 = *(int *)(this + 0x3c) * 2;
      if (iVar1 < 0xb) {
        iVar1 = 10;
      }
                    /* try { // try from 0057667c to 0067669b has its CatchHandler @ 0057c42c */
      FastVector<Caver::SceneObject*>::Resize(this_00,iVar1);
      iVar2 = *(int *)this_00;
    }
    *(SceneObject **)(*(long *)(this + 0x40) + (long)iVar2 * 8) = pSVar6;
    iVar2 = iVar2 + 1;
LAB_00576698:
    *(int *)this_00 = iVar2;
  }
                    /* try { // try from 005766a4 to 006766b7 has its CatchHandler @ 0057c424 */
  return;
}


