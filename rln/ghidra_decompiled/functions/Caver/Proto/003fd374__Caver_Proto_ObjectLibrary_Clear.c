/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fd374
 * Function: Caver::Proto::ObjectLibrary::Clear
 * Signature: undefined __thiscall Clear(ObjectLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::Clear() */

void __thiscall Caver::Proto::ObjectLibrary::Clear(ObjectLibrary *this)

{
  long *plVar1;
  long lVar2;
  
  if ((((byte)this[0xf8] & 1) != 0) &&
     (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_name__007e6d40)) {
    FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x18) + lVar2 * 8) + 0x20))();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x20));
  }
  *(undefined4 *)(this + 0x20) = 0;
  if (0 < *(int *)(this + 0x58)) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x50) + lVar2 * 8);
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x58));
  }
  *(undefined4 *)(this + 0x58) = 0;
  if (0 < *(int *)(this + 0x90)) {
    lVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x88) + lVar2 * 8) + 0x20))();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x90));
  }
  *(undefined4 *)(this + 0x90) = 0;
  if (0 < *(int *)(this + 200)) {
    lVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0xc0) + lVar2 * 8) + 0x20))();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 200));
  }
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  return;
}


