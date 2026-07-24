/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036be0c
 * Function: Caver::EntityControllerComponent::RoamUpdate
 * Signature: undefined __cdecl RoamUpdate(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::RoamUpdate(float) */

float Caver::EntityControllerComponent::RoamUpdate(float param_1)

{
  int iVar1;
  Component *in_x0;
  EntityComponent *this;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  
  if (*(int *)(in_x0 + 0x108) != 0) goto LAB_0036be94;
  lVar2 = *(long *)(in_x0 + 0x80);
  if (lVar2 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x70),in_x0);
    lVar2 = *(long *)(in_x0 + 0x80);
    if (lVar2 != 0) goto LAB_0036be48;
    *(undefined4 *)(in_x0 + 0x134) = 0;
    *(undefined4 *)(in_x0 + 300) = 0;
    *(undefined4 *)(in_x0 + 0x108) = 0;
    ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x70),in_x0);
    lVar2 = *(long *)(in_x0 + 0x80);
    iVar3 = *(int *)(in_x0 + 0x108);
  }
  else {
LAB_0036be48:
    iVar3 = *(int *)(lVar2 + 0x70);
    *(undefined4 *)(in_x0 + 0x134) = 0;
    *(int *)(in_x0 + 300) = iVar3;
    *(int *)(in_x0 + 0x108) = iVar3;
  }
  param_1 = *(float *)(in_x0 + 0x10c) * (float)iVar3;
  *(float *)(lVar2 + 0xb0) = param_1;
  lVar4 = *(long *)(in_x0 + 0x100);
  if (lVar4 != 0) {
    if (lVar2 == 0) {
      param_1 = (float)ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x70),in_x0);
      lVar2 = *(long *)(in_x0 + 0x80);
    }
    *(bool *)(lVar4 + 0x39) = iVar3 != *(int *)(lVar2 + 0x70);
  }
LAB_0036be94:
  if (*(int *)(in_x0 + 0xc0) != 0) {
    param_1 = *(float *)(in_x0 + 0xd4) + DAT_00688018;
    if (param_1 < *(float *)(*(long *)(in_x0 + 0x28) + 0x74)) {
      fVar5 = *(float *)(*(long *)(in_x0 + 0x28) + 0x70);
      if (*(float *)(in_x0 + 0xd0) <= fVar5) {
        if (fVar5 <= *(float *)(in_x0 + 0xd0) + *(float *)(in_x0 + 0xd8)) {
          return fVar5;
        }
        iVar3 = -1;
      }
      else {
        iVar3 = 1;
      }
      this = *(EntityComponent **)(in_x0 + 0x80);
      *(undefined4 *)(in_x0 + 0x130) = 0;
      *(int *)(in_x0 + 0x128) = iVar3;
      if (this == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x70),in_x0);
        this = *(EntityComponent **)(in_x0 + 0x80);
      }
      EntityComponent::SetFacingDirection(this,iVar3);
      lVar2 = *(long *)(in_x0 + 0x100);
      if (lVar2 == 0) {
        lVar4 = *(long *)(in_x0 + 0x80);
      }
      else {
        lVar4 = *(long *)(in_x0 + 0x80);
        iVar1 = *(int *)(in_x0 + 0x108);
        if (lVar4 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x70),in_x0);
          lVar4 = *(long *)(in_x0 + 0x80);
        }
        *(bool *)(lVar2 + 0x39) = iVar1 != *(int *)(lVar4 + 0x70);
      }
      *(undefined4 *)(in_x0 + 0x134) = 0;
      *(int *)(in_x0 + 300) = iVar3;
      *(int *)(in_x0 + 0x108) = iVar3;
      if (lVar4 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x70),in_x0);
        lVar4 = *(long *)(in_x0 + 0x80);
        iVar3 = *(int *)(in_x0 + 0x108);
      }
      param_1 = *(float *)(in_x0 + 0x10c) * (float)iVar3;
      *(float *)(lVar4 + 0xb0) = param_1;
      lVar2 = *(long *)(in_x0 + 0x100);
      if (lVar2 != 0) {
        if (lVar4 == 0) {
          param_1 = (float)ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x70),in_x0)
          ;
          lVar4 = *(long *)(in_x0 + 0x80);
        }
        *(bool *)(lVar2 + 0x39) = iVar3 != *(int *)(lVar4 + 0x70);
      }
    }
  }
  return param_1;
}


