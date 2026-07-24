/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a5cfc
 * Function: Caver::ParticleEmitterComponent::ParticleEmitterComponent
 * Signature: undefined __thiscall ParticleEmitterComponent(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleEmitterComponent::ParticleEmitterComponent() */

void __thiscall
Caver::ParticleEmitterComponent::ParticleEmitterComponent(ParticleEmitterComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  char *pcVar15;
  ParticleSystem *pPVar16;
  ParticleEmitterComponent *pPVar17;
  int *piVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  undefined *local_98;
  long local_90 [2];
  ParticleSystem *local_80;
  long *local_78;
  char acStack_6c [4];
  long local_68;
  
  puVar3 = PTR_vtable_007e7a70;
  puVar13 = PTR_vtable_007e74d8;
  puVar12 = PTR_vtable_007e69f8;
  puVar11 = PTR_DAT_007e5de8;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e69f8 + 0x128;
  puVar2 = PTR_vtable_007e69f8 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x30] = (ParticleEmitterComponent)0x0;
  pPVar17 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pPVar17 = 0;
  puVar1 = PTR_vtable_007e50d0;
  uVar8 = _UNK_00683808;
  uVar7 = _DAT_00683800;
  *(undefined **)this = puVar12 + 0x10;
  puVar3 = puVar3 + 0x10;
  *(undefined **)(this + 0x78) = puVar3;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)(this + 0x90) = puVar3;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined **)(this + 0xa8) = puVar3;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined **)(this + 0xc0) = puVar3;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined **)(this + 0xd8) = puVar3;
  *(undefined **)(this + 0x108) = puVar13 + 0x10;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined **)(this + 0x120) = puVar1 + 0x10;
  *(undefined4 *)(this + 0x144) = 0x1e;
  *(ParticleEmitterComponent **)(this + 0x58) = pPVar17;
  *(ParticleEmitterComponent **)(this + 0x60) = pPVar17;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  this[0x104] = (ParticleEmitterComponent)0x0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  this[0x140] = (ParticleEmitterComponent)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  uVar10 = _UNK_00689608;
  uVar9 = _DAT_00689600;
  this[0x168] = (ParticleEmitterComponent)0x1;
  this[0x169] = (ParticleEmitterComponent)0x0;
  *(undefined8 *)(this + 0x174) = uVar8;
  *(undefined8 *)(this + 0x16c) = uVar7;
  *(undefined8 *)(this + 0x184) = uVar10;
  *(undefined8 *)(this + 0x17c) = uVar9;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  this[0x1d4] = (ParticleEmitterComponent)0x0;
  FUN_00666bb8(&local_80,"parentEmitter",&local_98);
  Component::BindOutlet
            ((Component *)this,0,(string *)&local_80,(ComponentOutletBase *)(this + 0x108),false);
  if (local_80 + -0x18 != (ParticleSystem *)puVar11) {
    pPVar16 = local_80 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar20 = *(int *)pPVar16;
      *(int *)pPVar16 = iVar20 + -1;
    }
    else {
      do {
        iVar20 = *(int *)pPVar16;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pPVar16,0x10);
        if (bVar14) {
          *(int *)pPVar16 = iVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar20 < 1) {
      operator_delete(local_80 + -0x18);
    }
  }
  FUN_00666bb8(&local_80,"modelBinding",&local_98);
  Component::BindOutlet
            ((Component *)this,2,(string *)&local_80,(ComponentOutletBase *)(this + 0x120),false);
  if (local_80 + -0x18 != (ParticleSystem *)puVar11) {
    pPVar16 = local_80 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar20 = *(int *)pPVar16;
      *(int *)pPVar16 = iVar20 + -1;
    }
    else {
      do {
        iVar20 = *(int *)pPVar16;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pPVar16,0x10);
        if (bVar14) {
          *(int *)pPVar16 = iVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar20 < 1) {
      operator_delete(local_80 + -0x18);
    }
  }
  puVar1 = PTR_pthread_create_007e4e78;
  uVar21 = 0;
  do {
    local_98 = puVar11 + 0x18;
    pcVar15 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        ((uint)(uVar21 + 1),acStack_6c);
    FUN_00669e1c(&local_98,0,*(undefined8 *)puVar11,pcVar15,(long)acStack_6c - (long)pcVar15);
    FUN_0035a030(local_90,"particleType",&local_98);
    Component::BindOutlet
              ((Component *)this,(int)uVar21 + 7,(string *)local_90,
               (ComponentOutletBase *)(this + uVar21 * 0x18 + 0x78),false);
    if ((undefined *)(local_90[0] + -0x18) != puVar11) {
      piVar18 = (int *)(local_90[0] + -8);
      if (puVar1 == (undefined *)0x0) {
        iVar20 = *piVar18;
        *piVar18 = iVar20 + -1;
      }
      else {
        do {
          iVar20 = *piVar18;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar14) {
            *piVar18 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (iVar20 < 1) {
        operator_delete((undefined *)(local_90[0] + -0x18));
      }
    }
    if (local_98 + -0x18 != puVar11) {
      piVar18 = (int *)(local_98 + -8);
      if (puVar1 == (undefined *)0x0) {
        iVar20 = *piVar18;
        *piVar18 = iVar20 + -1;
      }
      else {
        do {
          iVar20 = *piVar18;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar14) {
            *piVar18 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (iVar20 < 1) {
        operator_delete(local_98 + -0x18);
      }
    }
    bVar14 = uVar21 < 4;
    uVar21 = uVar21 + 1;
  } while (bVar14);
  pPVar16 = operator_new(0xc0);
  ParticleSystem::ParticleSystem(pPVar16);
  local_80 = pPVar16;
  boost::detail::shared_count::shared_count<Caver::ParticleSystem>
            ((shared_count *)&local_78,pPVar16);
  boost::detail::sp_enable_shared_from_this(&local_80,pPVar16,pPVar16);
  pPVar16 = *(ParticleSystem **)(this + 0x148);
  plVar4 = *(long **)(this + 0x150);
  *(ParticleSystem **)(this + 0x148) = local_80;
  *(long **)(this + 0x150) = local_78;
  local_80 = pPVar16;
  local_78 = plVar4;
  if ((plVar4 != (long *)0x0) && (lVar19 = plVar4[1], plVar4[1] = lVar19 + -1, lVar19 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar19 = plVar4[2];
    plVar4[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


