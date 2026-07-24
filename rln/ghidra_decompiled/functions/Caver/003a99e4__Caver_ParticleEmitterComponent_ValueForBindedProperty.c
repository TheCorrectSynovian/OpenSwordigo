/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a99e4
 * Function: Caver::ParticleEmitterComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::ValueForBindedProperty(int) */

void Caver::ParticleEmitterComponent::ValueForBindedProperty(int param_1)

{
  FloatColor FVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  FloatColor *this;
  BindingValue *pBVar7;
  int iVar8;
  FloatColor *in_x1;
  FloatColor *extraout_x1;
  string *in_x2;
  long lVar9;
  int *piVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  float extraout_s0;
  long local_50;
  float local_48;
  long local_38;
  
  pBVar7 = (BindingValue *)(ulong)(uint)param_1;
  this = (FloatColor *)&local_50;
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  iVar8 = (int)in_x1;
  switch(iVar8) {
  case 1:
    FVar1 = *(FloatColor *)(pBVar7 + 0x140);
    goto LAB_003a9a9c;
  default:
    uVar4 = iVar8 - 0x12;
    if ((0x14 < uVar4) || (plVar12 = *(long **)(pBVar7 + 0x158), plVar12 == (long *)0x0)) {
      Component::ValueForBindedProperty(param_1);
      break;
    }
    if (plVar12[0x19] == 0) {
      pBVar7 = (BindingValue *)(**(code **)(*plVar12 + 0x20))(plVar12,uVar4);
      fVar13 = extraout_s0;
    }
    else {
      fVar13 = *(float *)(plVar12[0x19] + (ulong)uVar4 * 4);
    }
    goto LAB_003a9b24;
  case 3:
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(pBVar7 + 0x144),iVar8);
    break;
  case 4:
    FVar1 = *(FloatColor *)(pBVar7 + 0x169);
LAB_003a9a9c:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)FVar1,SUB81(in_x1,0));
    break;
  case 5:
    this = (FloatColor *)(pBVar7 + 0x16c);
    goto LAB_003a9be0;
  case 6:
    local_50 = CONCAT44((float)((ulong)*(undefined8 *)(pBVar7 + 0x188) >> 0x20) * 57.295776,
                        (float)*(undefined8 *)(pBVar7 + 0x188) * 57.295776);
    local_48 = *(float *)(pBVar7 + 400) * DAT_00684000;
    goto LAB_003a9be0;
  case 0xc:
    if (*(long **)(pBVar7 + 0x158) == (long *)0x0) {
      pBVar7 = (BindingValue *)0x0;
    }
    else {
      uVar6 = (**(code **)(**(long **)(pBVar7 + 0x158) + 0x10))();
      pBVar7 = (BindingValue *)(uVar6 & 0xffffffff);
    }
    ParticleEmitter::TitleForType((ParticleEmitter *)&local_50,pBVar7);
    BindingValue::ValueWithInt(pBVar7,(int)&local_50,in_x2);
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar10;
        *piVar10 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    break;
  case 0xd:
    lVar9 = *(long *)(pBVar7 + 0x158);
    if (lVar9 == 0) {
      pfVar11 = (float *)(PTR_Vector3Zero_007e5988 + 8);
      local_50 = *(long *)PTR_Vector3Zero_007e5988;
    }
    else {
      local_50 = *(long *)(lVar9 + 0x38);
      pfVar11 = (float *)(lVar9 + 0x40);
    }
    local_48 = *pfVar11;
    this = (FloatColor *)&local_50;
LAB_003a9be0:
    BindingValue::ValueWithVector3((BindingValue *)this,(Vector3 *)in_x1);
    break;
  case 0xe:
    lVar9 = *(long *)(pBVar7 + 0x158);
    if (lVar9 != 0) {
      FloatColor::FromHSLA
                ((FloatColor *)pBVar7,*(float *)(lVar9 + 0xa8),*(float *)(lVar9 + 0xac),
                 *(float *)(lVar9 + 0xb0),*(float *)(lVar9 + 0xb4));
      in_x1 = extraout_x1;
    }
    BindingValue::ValueWithFloatColor((BindingValue *)&local_50,in_x1);
    break;
  case 0xf:
    if (*(long *)(pBVar7 + 0x158) == 0) {
LAB_003a9b20:
      fVar13 = 0.0;
    }
    else {
      fVar13 = *(float *)(*(long *)(pBVar7 + 0x158) + 0xb8);
    }
    goto LAB_003a9b24;
  case 0x10:
    if (*(long *)(pBVar7 + 0x158) == 0) goto LAB_003a9b20;
    fVar13 = *(float *)(*(long *)(pBVar7 + 0x158) + 0xbc);
    goto LAB_003a9b24;
  case 0x11:
    if (*(long *)(pBVar7 + 0x158) == 0) goto LAB_003a9b20;
    fVar13 = *(float *)(*(long *)(pBVar7 + 0x158) + 0xc0);
LAB_003a9b24:
    BindingValue::ValueWithFloat(pBVar7,fVar13);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


