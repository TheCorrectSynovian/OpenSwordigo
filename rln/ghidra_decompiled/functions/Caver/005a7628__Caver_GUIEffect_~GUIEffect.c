/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a7628
 * Function: Caver::GUIEffect::~GUIEffect
 * Signature: undefined __thiscall ~GUIEffect(GUIEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffect::~GUIEffect() */

void __thiscall Caver::GUIEffect::~GUIEffect(GUIEffect *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 != 0) {
    if (((uVar2 & 1) == 0) && (*(code **)(uVar2 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(this + 0x20,this + 0x20,2);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  plVar1 = *(long **)(this + 0x10);
  if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[2], plVar1[2] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x005a76a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  }
  return;
}


