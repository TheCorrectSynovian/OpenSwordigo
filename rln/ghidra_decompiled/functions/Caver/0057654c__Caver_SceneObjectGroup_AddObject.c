/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057654c
 * Function: Caver::SceneObjectGroup::AddObject
 * Signature: undefined __thiscall AddObject(SceneObjectGroup * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::AddObject(Caver::SceneObject*) */

void __thiscall Caver::SceneObjectGroup::AddObject(SceneObjectGroup *this,SceneObject *param_1)

{
  ulong uVar1;
  int iVar2;
  FastVector<Caver::SceneObject*> *this_00;
  
                    /* try { // try from 00576550 to 00676563 has its CatchHandler @ 0057c494 */
                    /* try { // try from 00576564 to 00676577 has its CatchHandler @ 0057c48c */
  uVar1 = SceneObject::HasGroup(param_1,this);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 00576578 to 0067658b has its CatchHandler @ 0057c484 */
    return;
  }
  this_00 = (FastVector<Caver::SceneObject*> *)(this + 0x38);
  iVar2 = *(int *)this_00;
                    /* try { // try from 0057658c to 006765ab has its CatchHandler @ 0057c47c */
  if (*(int *)(this + 0x3c) <= iVar2) {
    iVar2 = *(int *)(this + 0x3c) * 2;
    if (iVar2 < 0xb) {
      iVar2 = 10;
    }
    FastVector<Caver::SceneObject*>::Resize(this_00,iVar2);
    iVar2 = *(int *)this_00;
  }
                    /* try { // try from 005765b4 to 006765c7 has its CatchHandler @ 0057c474 */
  *(SceneObject **)(*(long *)(this + 0x40) + (long)iVar2 * 8) = param_1;
                    /* try { // try from 005765c8 to 006765db has its CatchHandler @ 0057c46c */
  *(int *)(this + 0x38) = iVar2 + 1;
  SceneObject::AddGroup(param_1,this);
  return;
}


