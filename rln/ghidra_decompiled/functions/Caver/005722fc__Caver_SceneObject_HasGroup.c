/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005722fc
 * Function: Caver::SceneObject::HasGroup
 * Signature: undefined __thiscall HasGroup(SceneObject * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::HasGroup(Caver::SceneObjectGroup*) const */

undefined8 __thiscall Caver::SceneObject::HasGroup(SceneObject *this,SceneObjectGroup *param_1)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (0 < *piVar1) {
    lVar2 = 0;
    do {
      if (*(SceneObjectGroup **)(*(long *)(piVar1 + 2) + lVar2 * 8) == param_1) {
        return 1;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar1);
    return 0;
  }
  return 0;
}


