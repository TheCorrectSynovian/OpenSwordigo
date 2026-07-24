/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bbb48
 * Function: Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent
 * Signature: undefined __thiscall GroundMeshGeneratorComponent(GroundMeshGeneratorComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent() */

void __thiscall
Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent
          (GroundMeshGeneratorComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  GroundMeshGeneratorComponent *pGVar13;
  int *piVar14;
  int iVar15;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  puVar12 = PTR_vtable_007e7028;
  puVar11 = PTR_DAT_007e5de8;
  puVar10 = PTR_vtable_007e5768;
  puVar9 = PTR_vtable_007e4878;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e7348 + 0x128;
  puVar2 = PTR_vtable_007e7348 + 0x168;
  puVar3 = PTR_vtable_007e7348 + 0x10;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (GroundMeshGeneratorComponent)0x0;
  pGVar13 = this + 0x48;
  *(undefined8 *)pGVar13 = 0;
  *(undefined **)this = puVar3;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar8 = _UNK_00689e08;
  uVar7 = _DAT_00689e00;
  *(GroundMeshGeneratorComponent **)(this + 0x58) = pGVar13;
  *(GroundMeshGeneratorComponent **)(this + 0x60) = pGVar13;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar10 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar12 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined **)(this + 0xb8) = puVar9 + 0x10;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)(this + 0xa0) = puVar9 + 0x10;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0x42c80000;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe4) = uVar8;
  *(undefined8 *)(this + 0xdc) = uVar7;
  FUN_00666bb8(local_78,0x6847f1,auStack_80);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_78,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar14 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"targetMesh",auStack_80);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_78,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar14 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"frontTexMap",auStack_80);
  Component::BindOutlet
            ((Component *)this,2,(string *)local_78,(ComponentOutletBase *)(this + 0xa0),false);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar14 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"surfaceTexMap",auStack_80);
  Component::BindOutlet
            ((Component *)this,3,(string *)local_78,(ComponentOutletBase *)(this + 0xb8),false);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar14 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


