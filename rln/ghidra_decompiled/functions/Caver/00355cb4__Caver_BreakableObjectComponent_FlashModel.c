/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00355cb4
 * Function: Caver::BreakableObjectComponent::FlashModel
 * Signature: undefined __thiscall FlashModel(BreakableObjectComponent * this, Color * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::FlashModel(Caver::Color const&, float) */

void __thiscall
Caver::BreakableObjectComponent::FlashModel
          (BreakableObjectComponent *this,Color *param_1,float param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  puVar3 = PTR_Interface_007e7860;
  plVar2 = *(long **)(*(long *)(this + 0x28) + 200);
  for (plVar1 = *(long **)(*(long *)(this + 0x28) + 0xc0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    uVar4 = (**(code **)(*(long *)*plVar1 + 0xa0))((long *)*plVar1,puVar3);
    if ((uVar4 & 1) != 0) {
      lVar5 = *plVar1;
      *(undefined4 *)(lVar5 + 0x136) = *(undefined4 *)param_1;
      *(undefined1 *)(lVar5 + 0x135) = 1;
    }
  }
  this[0xa8] = (BreakableObjectComponent)0x1;
  *(float *)(this + 0xac) = param_2;
  return;
}


