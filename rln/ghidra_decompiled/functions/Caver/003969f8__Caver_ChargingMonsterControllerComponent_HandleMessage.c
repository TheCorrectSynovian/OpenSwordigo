/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003969f8
 * Function: Caver::ChargingMonsterControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(ChargingMonsterControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ChargingMonsterControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::ChargingMonsterControllerComponent::HandleMessage
          (ChargingMonsterControllerComponent *this,int param_1,void *param_2)

{
  float fVar1;
  EntityComponent *this_00;
  int iVar2;
  long lVar3;
  float fVar4;
  
  switch(param_1) {
  case 6:
  case 0xc:
    if (this[0x130] == (ChargingMonsterControllerComponent)0x0) {
      return 0;
    }
    *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = 0;
    break;
  default:
    goto switchD_00396a24_caseD_7;
  case 10:
    if (this[0x130] == (ChargingMonsterControllerComponent)0x0) {
      return 0;
    }
    break;
  case 0x15:
    fVar4 = *(float *)((long)param_2 + 0x2c);
    if ((fVar4 <= DAT_00684430) && (DAT_00687f44 < fVar4)) {
      fVar1 = *(float *)((long)param_2 + 0x28);
      if (this[0x131] == (ChargingMonsterControllerComponent)0x0) {
LAB_00396ae8:
        iVar2 = -1;
        if (0.0 <= fVar1) {
          iVar2 = 1;
        }
        if (*(int *)(this + 0x148) != iVar2) {
          this_00 = *(EntityComponent **)(this + 0x80);
          *(int *)(this + 0x148) = iVar2;
          if (this_00 == (EntityComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            this_00 = *(EntityComponent **)(this + 0x80);
          }
          EntityComponent::SetFacingDirection(this_00,iVar2);
          *(undefined4 *)(this + 0x14c) = 0;
        }
      }
      else {
        if ((*(float *)(this + 0x138) <= 0.5) || (*(float *)(this + 0x150) <= 3.0)) {
          if (this[0x130] != (ChargingMonsterControllerComponent)0x0) {
            *(undefined2 *)(*(long *)(this + 0x118) + 0x2c) = 0x101;
            *(undefined2 *)(this + 0x130) = 0;
            *(undefined4 *)(this + 0x134) = 0;
          }
          goto LAB_00396ae8;
        }
        lVar3 = *(long *)(this + 0x28);
        fVar4 = fVar4 * _DAT_00684940;
        *(float *)(lVar3 + 0x68) = fVar1 * _DAT_00684940;
        *(float *)(lVar3 + 0x6c) = fVar4;
      }
      *(undefined4 *)(this + 0x150) = 0;
    }
    lVar3 = *(long *)(this + 0x80);
    if (lVar3 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar3 = *(long *)(this + 0x80);
    }
    if ((((*(float *)(lVar3 + 0x80) < _DAT_00684434) && (0.0 < *(float *)(lVar3 + 0x8c))) &&
        (*(char *)(lVar3 + 0x90) == '\0')) &&
       (this[0x154] == (ChargingMonsterControllerComponent)0x0)) {
      MonsterControllerComponent::UpdateRoamBounds((MonsterControllerComponent *)this);
    }
    goto switchD_00396a24_caseD_7;
  }
  *(undefined2 *)(*(long *)(this + 0x118) + 0x2c) = 0x101;
  *(undefined2 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
switchD_00396a24_caseD_7:
  return 0;
}


