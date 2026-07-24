/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba78c
 * Function: Caver::OnlineController_Android::~OnlineController_Android
 * Signature: undefined __thiscall ~OnlineController_Android(OnlineController_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController_Android::~OnlineController_Android() */

void __thiscall
Caver::OnlineController_Android::~OnlineController_Android(OnlineController_Android *this)

{
  OnlineController_Android *pOVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  OnlineController_Android *pOVar5;
  
  *(undefined **)this = PTR_vtable_007e79d0 + 0x10;
  pOVar1 = *(OnlineController_Android **)(this + 0x10);
  while (pOVar1 != this + 0x10) {
    uVar3 = *(ulong *)(pOVar1 + 0x20);
    pOVar5 = *(OnlineController_Android **)pOVar1;
    if (uVar3 != 0) {
      if (((uVar3 & 1) == 0) && (*(code **)(uVar3 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(uVar3 & 0xfffffffffffffffe))(pOVar1 + 0x28,pOVar1 + 0x28,2);
      }
      *(undefined8 *)(pOVar1 + 0x20) = 0;
    }
    plVar2 = *(long **)(pOVar1 + 0x18);
    if ((plVar2 != (long *)0x0) && (lVar4 = plVar2[2], plVar2[2] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x18))();
    }
    operator_delete(pOVar1);
    pOVar1 = pOVar5;
  }
  return;
}


