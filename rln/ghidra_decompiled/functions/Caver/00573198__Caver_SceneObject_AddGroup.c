/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573198
 * Function: Caver::SceneObject::AddGroup
 * Signature: undefined __thiscall AddGroup(SceneObject * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::AddGroup(Caver::SceneObjectGroup*) */

void __thiscall Caver::SceneObject::AddGroup(SceneObject *this,SceneObjectGroup *param_1)

{
  int iVar1;
  FastVector<Caver::SceneObjectGroup*> *this_00;
  
  this_00 = *(FastVector<Caver::SceneObjectGroup*> **)(this + 0x28);
  if (this_00 == (FastVector<Caver::SceneObjectGroup*> *)0x0) {
    this_00 = operator_new(0x10);
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(FastVector<Caver::SceneObjectGroup*> **)(this + 0x28) = this_00;
  }
  iVar1 = *(int *)this_00;
                    /* try { // try from 005731d0 to 006731f7 has its CatchHandler @ 005737fc */
  if (*(int *)(this_00 + 4) <= iVar1) {
    iVar1 = *(int *)(this_00 + 4) * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
    FastVector<Caver::SceneObjectGroup*>::Resize(this_00,iVar1);
    iVar1 = *(int *)this_00;
  }
  *(SceneObjectGroup **)(*(long *)(this_00 + 8) + (long)iVar1 * 8) = param_1;
  *(int *)this_00 = iVar1 + 1;
  return;
}


