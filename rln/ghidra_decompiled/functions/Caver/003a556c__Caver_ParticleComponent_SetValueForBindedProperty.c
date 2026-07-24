/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a556c
 * Function: Caver::ParticleComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ParticleComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::ParticleComponent::SetValueForBindedProperty
          (ParticleComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == 1) {
    fVar10 = **(float **)(param_2 + 8);
    lVar7 = *(long *)(this + 0x78);
    *(float *)(this + 0x80) = fVar10;
    if (lVar7 != 0) {
      fVar11 = *(float *)(lVar7 + 0x54) / *(float *)(lVar7 + 0x58);
      if (fVar11 <= 1.0) {
        fVar11 = fVar10 * fVar11;
        fVar12 = fVar10;
      }
      else {
        fVar12 = fVar10 / fVar11;
        fVar11 = fVar10;
      }
      *(float *)(this + 0x84) = fVar11;
      *(float *)(this + 0x88) = fVar12;
    }
  }
  else if (param_1 == 0) {
    psVar5 = (string *)TextureLibrary::sharedLibrary();
    FUN_0066a528(&local_50,*(undefined8 *)(param_2 + 8));
    TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
    puVar4 = PTR_DAT_007e5de8;
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    if (local_48 != (long *)0x0) {
      FUN_0066a528(&local_50,*(undefined8 *)(param_2 + 8));
      FUN_0066a6a8(this + 0x70,&local_50);
      if ((undefined *)(local_50 + -0x18) != puVar4) {
        piVar8 = (int *)(local_50 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_50 + -0x18));
        }
      }
      if (local_48 != (long *)0x0) {
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      }
      plVar6 = *(long **)(this + 0x78);
      *(long **)(this + 0x78) = local_48;
      if ((plVar6 != (long *)0x0) &&
         (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
      if (*(float *)(this + 0x80) < DAT_00683944) {
        lVar7 = *(long *)(this + 0x78);
        fVar11 = *(float *)(lVar7 + 0x54);
        fVar12 = *(float *)(lVar7 + 0x58);
        fVar10 = fVar11;
        if (fVar11 <= fVar12) {
          fVar10 = fVar12;
        }
        *(float *)(this + 0x80) = fVar10;
        if (lVar7 != 0) {
          fVar11 = fVar11 / fVar12;
          if (fVar11 <= 1.0) {
            fVar11 = fVar10 * fVar11;
            fVar12 = fVar10;
          }
          else {
            fVar12 = fVar10 / fVar11;
            fVar11 = fVar10;
          }
          *(float *)(this + 0x84) = fVar11;
          *(float *)(this + 0x88) = fVar12;
        }
      }
      if ((local_48 != (long *)0x0) &&
         (iVar9 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*local_48 + 8))();
      }
    }
  }
  else {
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


