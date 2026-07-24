/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00575108
 * Function: Caver::SceneObjectGroup::RemoveAllObjects
 * Signature: undefined __thiscall RemoveAllObjects(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::RemoveAllObjects() */

void __thiscall Caver::SceneObjectGroup::RemoveAllObjects(SceneObjectGroup *this)

{
  long lVar1;
  
  if (0 < *(int *)(this + 0x38)) {
                    /* try { // try from 00575124 to 0067512b has its CatchHandler @ 00575130 */
    lVar1 = 0;
    do {
                    /* catch() { ... } // from try @ 00575124 with catch @ 00575130 */
                    /* catch() { ... } // from try @ 00574f74 with catch @ 00575134 */
      SceneObject::RemoveGroup(*(SceneObject **)(*(long *)(this + 0x40) + lVar1 * 8),this);
                    /* catch() { ... } // from try @ 00574f34 with catch @ 00575138 */
      lVar1 = lVar1 + 1;
                    /* catch() { ... } // from try @ 00574e80 with catch @ 00575140 */
    } while (lVar1 < *(int *)(this + 0x38));
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


