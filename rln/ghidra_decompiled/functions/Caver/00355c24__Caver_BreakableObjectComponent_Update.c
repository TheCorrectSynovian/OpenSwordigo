/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00355c24
 * Function: Caver::BreakableObjectComponent::Update
 * Signature: undefined __thiscall Update(BreakableObjectComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::BreakableObjectComponent::Update(float) */

void __thiscall
Caver::BreakableObjectComponent::Update(BreakableObjectComponent *this,float param_1)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  undefined *puVar4;
  ulong uVar5;
  float fVar6;
  
  fVar3 = DAT_00683734;
  if ((this[0x90] != (BreakableObjectComponent)0x0) &&
     (fVar6 = *(float *)(this + 0x94), *(float *)(this + 0x94) = fVar6 - param_1,
     puVar4 = PTR_Interface_007e7860, fVar6 - param_1 < fVar3)) {
    plVar2 = *(long **)(*(long *)(this + 0x10) + 200);
    for (plVar1 = *(long **)(*(long *)(this + 0x10) + 0xc0); plVar1 != plVar2; plVar1 = plVar1 + 1)
    {
      uVar5 = (**(code **)(*(long *)*plVar1 + 0xa0))((long *)*plVar1,puVar4);
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(*plVar1 + 0x135) = 0;
      }
    }
    this[0x90] = (BreakableObjectComponent)0x0;
  }
  return;
}


