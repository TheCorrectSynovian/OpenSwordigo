/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00450ec4
 * Function: Caver::GUIAnimation::~GUIAnimation
 * Signature: undefined __thiscall ~GUIAnimation(GUIAnimation * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimation::~GUIAnimation() */

void __thiscall Caver::GUIAnimation::~GUIAnimation(GUIAnimation *this)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xb0);
  if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar1 = plVar3[2];
    plVar3[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x98);
  if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar1 = plVar3[2];
    plVar3[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x80);
  if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar1 = plVar3[2];
    plVar3[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  uVar2 = *(ulong *)(this + 0x10);
  if (uVar2 != 0) {
    if (((uVar2 & 1) == 0) && (*(code **)(uVar2 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(this + 0x18,this + 0x18,2);
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  plVar3 = *(long **)(this + 8);
  if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[2], plVar3[2] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00451018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))();
    return;
  }
  return;
}


