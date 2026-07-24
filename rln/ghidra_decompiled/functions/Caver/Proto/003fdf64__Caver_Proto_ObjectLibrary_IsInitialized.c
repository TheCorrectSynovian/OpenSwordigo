/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fdf64
 * Function: Caver::Proto::ObjectLibrary::IsInitialized
 * Signature: undefined __thiscall IsInitialized(ObjectLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::IsInitialized() const */

undefined8 __thiscall Caver::Proto::ObjectLibrary::IsInitialized(ObjectLibrary *this)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x20)) {
    lVar2 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(this + 0x18) + lVar2 * 8) + 0x28))();
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x20));
  }
  return 1;
}


