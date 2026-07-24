/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ac34
 * Function: Caver::ManaComponent::Update
 * Signature: undefined __thiscall Update(ManaComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaComponent::Update(float) */

void __thiscall Caver::ManaComponent::Update(ManaComponent *this,float param_1)

{
  uint uVar1;
  GameEvent *pGVar2;
  GameEvent *pGVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  fVar6 = *(float *)(this + 0x7c) + param_1;
  *(float *)(this + 0x7c) = fVar6;
  if (1.5 <= fVar6) {
    uVar4 = *(uint *)(this + 0x74);
    do {
      fVar6 = fVar6 + -1.5;
      uVar1 = *(uint *)(this + 0x70);
      if ((int)(uVar4 + 1) < (int)*(uint *)(this + 0x70)) {
        uVar1 = uVar4 + 1;
      }
      uVar4 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    } while (1.5 <= fVar6);
    *(float *)(this + 0x7c) = fVar6;
    *(uint *)(this + 0x74) = uVar4;
  }
  if (0 < *(int *)(this + 0x78)) {
    uVar4 = *(uint *)(this + 0x70);
    iVar5 = *(int *)(this + 0x74);
    if (iVar5 < (int)uVar4) {
      fVar6 = *(float *)(this + 0x80);
      *(float *)(this + 0x80) = fVar6 + param_1;
      if (fVar6 + param_1 < 4.0) {
        return;
      }
      while( true ) {
        uVar1 = iVar5 + 4U;
        if ((int)uVar4 <= (int)(iVar5 + 4U)) {
          uVar1 = uVar4;
        }
        *(undefined4 *)(this + 0x80) = 0;
        *(uint *)(this + 0x74) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        pGVar2 = operator_new(0x68);
        *(undefined4 *)pGVar2 = 6;
        pGVar3 = pGVar2 + 0x10;
        *(undefined8 *)pGVar3 = 0;
        *(undefined8 *)(pGVar2 + 0x18) = 0;
        *(GameEvent **)(pGVar2 + 0x20) = pGVar3;
        *(GameEvent **)(pGVar2 + 0x28) = pGVar3;
        *(undefined8 *)(pGVar2 + 0x30) = 0;
        pGVar3 = pGVar2 + 0x40;
        *(undefined8 *)pGVar3 = 0;
        *(undefined8 *)(pGVar2 + 0x48) = 0;
        *(GameEvent **)(pGVar2 + 0x50) = pGVar3;
        *(GameEvent **)(pGVar2 + 0x58) = pGVar3;
        *(undefined8 *)(pGVar2 + 0x60) = 0;
        GameEvent::SendEvent(pGVar2);
        if (*(float *)(this + 0x80) < 4.0) break;
        uVar4 = *(uint *)(this + 0x70);
        iVar5 = *(int *)(this + 0x74);
      }
      return;
    }
  }
  *(undefined4 *)(this + 0x80) = 0;
  return;
}


