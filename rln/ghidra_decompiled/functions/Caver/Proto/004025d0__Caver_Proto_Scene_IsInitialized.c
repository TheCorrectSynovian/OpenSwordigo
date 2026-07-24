/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004025d0
 * Function: Caver::Proto::Scene::IsInitialized
 * Signature: undefined __thiscall IsInitialized(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::IsInitialized() const */

undefined8 __thiscall Caver::Proto::Scene::IsInitialized(Scene *this)

{
  Scene *pSVar1;
  ulong uVar2;
  long lVar3;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar3 = 0;
    do {
      uVar2 = (**(code **)(**(long **)(*(long *)(this + 0x10) + lVar3 * 8) + 0x28))();
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x18));
  }
  if (((byte)this[0x98] >> 2 & 1) != 0) {
    pSVar1 = *(Scene **)PTR_default_instance__007e7a20;
    if (*(long *)(this + 0x80) != 0) {
      pSVar1 = this;
    }
    uVar2 = (**(code **)(**(long **)(pSVar1 + 0x80) + 0x28))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


