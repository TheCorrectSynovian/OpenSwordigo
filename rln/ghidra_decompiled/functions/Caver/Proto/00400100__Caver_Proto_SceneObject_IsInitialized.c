/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00400100
 * Function: Caver::Proto::SceneObject::IsInitialized
 * Signature: undefined __thiscall IsInitialized(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::IsInitialized() const */

undefined8 __thiscall Caver::Proto::SceneObject::IsInitialized(SceneObject *this)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x28)) {
    lVar2 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(this + 0x20) + lVar2 * 8) + 0x28))();
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x28));
  }
  return 1;
}


