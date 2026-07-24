/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1d0c
 * Function: Caver::WaterMeshComponent::WaterMeshComponent
 * Signature: undefined __thiscall WaterMeshComponent(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::WaterMeshComponent::WaterMeshComponent() */

void __thiscall Caver::WaterMeshComponent::WaterMeshComponent(WaterMeshComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  WaterMeshComponent *pWVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR_vtable_007e5238;
  puVar5 = PTR_vtable_007e48b0;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  puVar4 = PTR_vtable_007e4878;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (WaterMeshComponent)0x0;
  pWVar8 = this + 0x48;
  *(undefined8 *)pWVar8 = 0;
  *(WaterMeshComponent **)(this + 0x58) = pWVar8;
  *(WaterMeshComponent **)(this + 0x60) = pWVar8;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined **)(this + 0x18) = puVar5 + 0x168;
  *(undefined **)(this + 0x10) = puVar5 + 0x128;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar6 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined **)(this + 0x98) = puVar4 + 0x10;
  auVar12 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  uVar13 = auVar12._8_8_;
  *(undefined8 *)(this + 0xb8) = uVar13;
  uVar11 = auVar12._0_8_;
  *(undefined8 *)(this + 0xb0) = uVar11;
  *(undefined8 *)(this + 200) = uVar13;
  *(undefined8 *)(this + 0xc0) = uVar11;
  *(undefined8 *)(this + 0xd8) = uVar13;
  *(undefined8 *)(this + 0xd0) = uVar11;
  VertexArrayObject::VertexArrayObject((VertexArrayObject *)(this + 0xe0));
  this[0x128] = (WaterMeshComponent)0x0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (WaterMeshComponent)0x0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined8 *)(this + 0x14c) = 0;
  *(undefined8 *)(this + 0x144) = 0;
  FUN_00666bb8(local_78,"boundsShape",auStack_80);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_78,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar7) {
    piVar9 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"textureMapping",auStack_80);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_78,(ComponentOutletBase *)(this + 0x98),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar7) {
    piVar9 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  auVar12 = _DAT_006847d0;
  *(long *)(this + 0x90) = DAT_006847d0._8_8_;
  *(long *)(this + 0x88) = auVar12._0_8_;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


