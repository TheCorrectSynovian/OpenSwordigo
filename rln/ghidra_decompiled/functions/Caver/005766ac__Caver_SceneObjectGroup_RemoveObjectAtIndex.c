/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005766ac
 * Function: Caver::SceneObjectGroup::RemoveObjectAtIndex
 * Signature: undefined __thiscall RemoveObjectAtIndex(SceneObjectGroup * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::RemoveObjectAtIndex(int) */

void __thiscall Caver::SceneObjectGroup::RemoveObjectAtIndex(SceneObjectGroup *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
                    /* try { // try from 005766b8 to 006766cb has its CatchHandler @ 0057c41c */
                    /* try { // try from 005766cc to 006766df has its CatchHandler @ 0057c414 */
  SceneObject::RemoveGroup(*(SceneObject **)(*(long *)(this + 0x40) + (long)param_1 * 8),this);
  iVar2 = *(int *)(this + 0x38);
  iVar3 = (int)((long)iVar2 + -1);
  if (param_1 < iVar3) {
                    /* try { // try from 005766e0 to 006766f3 has its CatchHandler @ 0057c40c */
    lVar4 = (long)param_1;
    do {
      puVar1 = (undefined8 *)(*(long *)(this + 0x40) + lVar4 * 8);
      lVar4 = lVar4 + 1;
                    /* try { // try from 005766f4 to 00676713 has its CatchHandler @ 0057c404 */
      *puVar1 = puVar1[1];
    } while ((long)iVar2 + -1 != lVar4);
  }
  *(int *)(this + 0x38) = iVar3;
  return;
}


