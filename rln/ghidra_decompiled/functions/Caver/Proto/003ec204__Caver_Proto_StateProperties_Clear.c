/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec204
 * Function: Caver::Proto::StateProperties::Clear
 * Signature: undefined __thiscall Clear(StateProperties * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::Clear() */

void __thiscall Caver::Proto::StateProperties::Clear(StateProperties *this)

{
  long *plVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x10) + lVar2 * 8);
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


