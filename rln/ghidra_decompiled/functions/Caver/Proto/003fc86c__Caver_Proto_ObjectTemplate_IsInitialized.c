/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc86c
 * Function: Caver::Proto::ObjectTemplate::IsInitialized
 * Signature: undefined __thiscall IsInitialized(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::IsInitialized() const */

undefined8 __thiscall Caver::Proto::ObjectTemplate::IsInitialized(ObjectTemplate *this)

{
  ObjectTemplate *pOVar1;
  ulong uVar2;
  
  if (((byte)this[0x1c] & 1) != 0) {
    pOVar1 = *(ObjectTemplate **)PTR_default_instance__007e4a98;
    if (*(long *)(this + 0x10) != 0) {
      pOVar1 = this;
    }
    uVar2 = (**(code **)(**(long **)(pOVar1 + 0x10) + 0x28))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


