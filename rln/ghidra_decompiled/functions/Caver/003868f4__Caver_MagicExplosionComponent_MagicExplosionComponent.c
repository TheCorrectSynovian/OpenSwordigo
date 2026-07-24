/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003868f4
 * Function: Caver::MagicExplosionComponent::MagicExplosionComponent
 * Signature: undefined __thiscall MagicExplosionComponent(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::MagicExplosionComponent() */

void __thiscall
Caver::MagicExplosionComponent::MagicExplosionComponent(MagicExplosionComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  MagicExplosionComponent *pMVar11;
  int *piVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  puVar10 = PTR_vtable_007e74d8;
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_vtable_007e5a50;
  puVar7 = PTR_vtable_007e4ce0;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e4ce0 + 0x128;
  puVar2 = PTR_vtable_007e4ce0 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x30] = (MagicExplosionComponent)0x0;
  pMVar11 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pMVar11 = 0;
  *(MagicExplosionComponent **)(this + 0x58) = pMVar11;
  *(MagicExplosionComponent **)(this + 0x60) = pMVar11;
  auVar14 = NEON_fmov(0x3f800000,4);
  *(undefined **)this = puVar7 + 0x10;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar10 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar8 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(long *)(this + 0xb8) = auVar14._8_8_;
  *(long *)(this + 0xb0) = auVar14._0_8_;
  uVar6 = DAT_00688bf0;
  *(undefined4 *)(this + 0xe8) = 0x43160000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xe0) = uVar6;
  this[0xf2] = (MagicExplosionComponent)0x0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x158] = (MagicExplosionComponent)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  FUN_00666bb8(local_78,"particleEmitter",auStack_80);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_78,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar9) {
    piVar12 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"sound",auStack_80);
  Component::BindOutlet
            ((Component *)this,4,(string *)local_78,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar9) {
    piVar12 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


