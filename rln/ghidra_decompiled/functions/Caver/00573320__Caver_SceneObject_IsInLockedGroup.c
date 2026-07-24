/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573320
 * Function: Caver::SceneObject::IsInLockedGroup
 * Signature: undefined __thiscall IsInLockedGroup(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::IsInLockedGroup() const */

undefined8 __thiscall Caver::SceneObject::IsInLockedGroup(SceneObject *this)

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
      if (*(char *)(*(long *)(*(long *)(piVar1 + 2) + lVar2 * 8) + 0x49) != '\0') {
        return 1;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar1);
    return 0;
  }
  return 0;
}


