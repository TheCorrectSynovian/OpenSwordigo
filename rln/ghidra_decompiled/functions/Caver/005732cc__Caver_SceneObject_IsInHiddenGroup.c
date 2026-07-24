/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005732cc
 * Function: Caver::SceneObject::IsInHiddenGroup
 * Signature: undefined __thiscall IsInHiddenGroup(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::IsInHiddenGroup() const */

undefined8 __thiscall Caver::SceneObject::IsInHiddenGroup(SceneObject *this)

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
      if (*(char *)(*(long *)(*(long *)(piVar1 + 2) + lVar2 * 8) + 0x48) != '\0') {
        return 1;
      }
      lVar2 = lVar2 + 1;
                    /* try { // try from 005732f8 to 0067331f has its CatchHandler @ 00573c00 */
    } while (lVar2 < *piVar1);
    return 0;
  }
  return 0;
}


