/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032f3c8
 * Function: Caver::FontText::~FontText
 * Signature: undefined __thiscall ~FontText(FontText * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::~FontText() */

void __thiscall Caver::FontText::~FontText(FontText *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete(*(void **)(this + 200));
  }
  if (*(void **)(this + 0xb0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb0));
  }
  if (*(void **)(this + 0x90) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x90));
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  plVar2 = *(long **)(this + 0x58);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 8);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0032f4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


