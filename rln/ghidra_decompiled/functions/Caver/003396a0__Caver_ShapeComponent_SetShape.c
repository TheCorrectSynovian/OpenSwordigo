/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003396a0
 * Function: Caver::ShapeComponent::SetShape
 * Signature: undefined __thiscall SetShape(ShapeComponent * this, Shape * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::SetShape(Caver::Shape const&) */

void __thiscall Caver::ShapeComponent::SetShape(ShapeComponent *this,Shape *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined4 *)(this + 0x70) = *(undefined4 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x80);
  *(undefined8 *)(this + 0x78) = uVar1;
  *(long *)(this + 0x80) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00339724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


