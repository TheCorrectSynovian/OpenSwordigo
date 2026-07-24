/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00319e7c
 * Function: Caver::CollisionShapeComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::ValueForBindedProperty(int) */

void Caver::CollisionShapeComponent::ValueForBindedProperty(int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  BindingValue *pBVar5;
  Program *in_x1;
  string *in_x2;
  int *piVar6;
  int iVar7;
  float fVar8;
  long local_48 [2];
  long local_38;
  
  pBVar5 = (BindingValue *)(ulong)(uint)param_1;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  switch((int)in_x1) {
  case 200:
    pBVar5 = (BindingValue *)(ulong)(byte)pBVar5[0x178];
    break;
  default:
    ShapeComponent::ValueForBindedProperty((ShapeComponent *)pBVar5,(int)in_x1);
    goto LAB_00319f9c;
  case 0xca:
    fVar8 = *(float *)(pBVar5 + 0x150);
    goto LAB_00319f94;
  case 0xcb:
    fVar8 = *(float *)(pBVar5 + 0x154);
    goto LAB_00319f94;
  case 0xcc:
    pBVar5 = (BindingValue *)(ulong)(byte)pBVar5[0x17a];
    break;
  case 0xcd:
    pBVar5 = (BindingValue *)(ulong)(byte)pBVar5[0x17b];
    break;
  case 0xce:
    pBVar5 = (BindingValue *)(ulong)(byte)pBVar5[0x17c];
    break;
  case 0xcf:
    pBVar5 = (BindingValue *)(ulong)(byte)pBVar5[0x17d];
    break;
  case 0xd0:
    uVar1 = *(uint *)(pBVar5 + 0x180);
    FUN_00319d38(local_48,uVar1);
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,(int)local_48,in_x2);
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    goto LAB_00319f9c;
  case 0xd1:
    fVar8 = *(float *)(pBVar5 + 0x184);
LAB_00319f94:
    BindingValue::ValueWithFloat(pBVar5,fVar8);
    goto LAB_00319f9c;
  case 0xd2:
    pBVar5 = (BindingValue *)(ulong)(byte)pBVar5[0x188];
    break;
  case 0xd3:
    pBVar5 = pBVar5 + 0x90;
    goto LAB_00319eec;
  case 0xd4:
    pBVar5 = pBVar5 + 0xb8;
    goto LAB_00319eec;
  case 0xd5:
    pBVar5 = pBVar5 + 0xe0;
LAB_00319eec:
    BindingValue::ValueWithProgram(pBVar5,in_x1);
    goto LAB_00319f9c;
  }
  BindingValue::ValueWithBool(pBVar5,SUB81(in_x1,0));
LAB_00319f9c:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


