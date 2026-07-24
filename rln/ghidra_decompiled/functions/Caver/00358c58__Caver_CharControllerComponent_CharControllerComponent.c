/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00358c58
 * Function: Caver::CharControllerComponent::CharControllerComponent
 * Signature: undefined __thiscall CharControllerComponent(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharControllerComponent::CharControllerComponent() */

void __thiscall
Caver::CharControllerComponent::CharControllerComponent(CharControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  char *pcVar15;
  CharControllerComponent *pCVar16;
  int *piVar17;
  int iVar18;
  ulong uVar19;
  undefined *local_98;
  long local_90 [2];
  long local_80 [2];
  char acStack_6c [4];
  long local_68;
  
  puVar5 = PTR_vtable_007e7d00;
  puVar13 = PTR_vtable_007e67b0;
  puVar12 = PTR_vtable_007e6670;
  puVar11 = PTR_vtable_007e6598;
  puVar10 = PTR_vtable_007e63a0;
  puVar9 = PTR_DAT_007e5de8;
  puVar4 = PTR_vtable_007e5a50;
  puVar3 = PTR_vtable_007e5548;
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  puVar1 = PTR_vtable_007e6598 + 0x128;
  puVar2 = PTR_vtable_007e6598 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x30] = (CharControllerComponent)0x0;
  pCVar16 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pCVar16 = 0;
  uVar8 = DAT_00684a10;
  *(undefined **)this = puVar11 + 0x10;
  *(CharControllerComponent **)(this + 0x58) = pCVar16;
  *(CharControllerComponent **)(this + 0x60) = pCVar16;
  puVar3 = puVar3 + 0x10;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar13 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar12 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)(this + 0xa0) = puVar12 + 0x10;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined **)(this + 0xe8) = puVar3;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined **)(this + 0xb8) = puVar3;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined **)(this + 0xd0) = puVar3;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined **)(this + 0x100) = puVar3;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined **)(this + 0x118) = puVar3;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined **)(this + 0x130) = puVar3;
  puVar4 = puVar4 + 0x10;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined **)(this + 0x148) = puVar4;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined **)(this + 0x160) = puVar4;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined **)(this + 0x178) = puVar4;
  *(undefined **)(this + 0x198) = puVar10 + 0x10;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined **)(this + 0x1b0) = puVar10 + 0x10;
  puVar5 = puVar5 + 0x10;
  *(undefined **)(this + 0x1d0) = puVar5;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined **)(this + 0x1e8) = puVar5;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined **)(this + 0x200) = puVar5;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  this[0x1c8] = (CharControllerComponent)0x0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x220) = 0x7f7fffff;
  this[0x224] = (CharControllerComponent)0x0;
  *(undefined8 *)(this + 0x22c) = 0;
  this[0x234] = (CharControllerComponent)0x0;
  *(undefined8 *)(this + 0x23d) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  this[0x245] = (CharControllerComponent)0x1;
  *(undefined4 *)(this + 0x248) = 0;
  this[0x24c] = (CharControllerComponent)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 600) = 0x7f7fffff;
  this[0x25c] = (CharControllerComponent)0x0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x26c) = uVar8;
  uVar8 = _DAT_00687910;
  *(undefined8 *)(this + 0x280) = _UNK_00687918;
  *(undefined8 *)(this + 0x278) = uVar8;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined2 *)(this + 700) = 0;
  *(undefined8 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  this[0x2ec] = (CharControllerComponent)0x0;
  *(undefined8 *)(this + 0x2e4) = 0;
  FUN_00666bb8(local_80,"entity",&local_98);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_80,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,&DAT_006879df,&local_98);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_80,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,0x6879fa,&local_98);
  Component::BindOutlet
            ((Component *)this,2,(string *)local_80,(ComponentOutletBase *)(this + 0xa0),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"liftAnimation",&local_98);
  Component::BindOutlet
            ((Component *)this,3,(string *)local_80,(ComponentOutletBase *)(this + 0xb8),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"dropAnimation",&local_98);
  Component::BindOutlet
            ((Component *)this,4,(string *)local_80,(ComponentOutletBase *)(this + 0xd0),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"throwAnimation",&local_98);
  Component::BindOutlet
            ((Component *)this,5,(string *)local_80,(ComponentOutletBase *)(this + 0xe8),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"pushAnimation",&local_98);
  Component::BindOutlet
            ((Component *)this,6,(string *)local_80,(ComponentOutletBase *)(this + 0x100),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"hurtAnimation",&local_98);
  Component::BindOutlet
            ((Component *)this,7,(string *)local_80,(ComponentOutletBase *)(this + 0x118),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"dieAnimation",&local_98);
  Component::BindOutlet
            ((Component *)this,8,(string *)local_80,(ComponentOutletBase *)(this + 0x130),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"jumpSound",&local_98);
  Component::BindOutlet
            ((Component *)this,9,(string *)local_80,(ComponentOutletBase *)(this + 0x148),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"airJumpSound",&local_98);
  Component::BindOutlet
            ((Component *)this,10,(string *)local_80,(ComponentOutletBase *)(this + 0x160),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"jumpLandSound",&local_98);
  Component::BindOutlet
            ((Component *)this,0xb,(string *)local_80,(ComponentOutletBase *)(this + 0x178),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"rightWeaponController",&local_98);
  Component::BindOutlet
            ((Component *)this,0xc,(string *)local_80,(ComponentOutletBase *)(this + 0x198),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  FUN_00666bb8(local_80,"leftWeaponController",&local_98);
  Component::BindOutlet
            ((Component *)this,0xd,(string *)local_80,(ComponentOutletBase *)(this + 0x1b0),true);
  if ((undefined *)(local_80[0] + -0x18) != puVar9) {
    piVar17 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar14) {
          *piVar17 = iVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  uVar19 = 0;
  do {
    local_98 = puVar9 + 0x18;
    pcVar15 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        ((uint)(uVar19 + 1),acStack_6c);
    FUN_00669e1c(&local_98,0,*(undefined8 *)puVar9,pcVar15,(long)acStack_6c - (long)pcVar15);
    FUN_0035a030(local_90,"swing",&local_98);
    Component::BindOutlet
              ((Component *)this,(int)uVar19 + 0xe,(string *)local_90,
               (ComponentOutletBase *)(this + uVar19 * 0x18 + 0x1d0),true);
    if ((undefined *)(local_90[0] + -0x18) != puVar9) {
      piVar17 = (int *)(local_90[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar18 = *piVar17;
        *piVar17 = iVar18 + -1;
      }
      else {
        do {
          iVar18 = *piVar17;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar14) {
            *piVar17 = iVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (iVar18 < 1) {
        operator_delete((undefined *)(local_90[0] + -0x18));
      }
    }
    if (local_98 + -0x18 != puVar9) {
      piVar17 = (int *)(local_98 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar18 = *piVar17;
        *piVar17 = iVar18 + -1;
      }
      else {
        do {
          iVar18 = *piVar17;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar14) {
            *piVar17 = iVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (iVar18 < 1) {
        operator_delete(local_98 + -0x18);
      }
    }
    bVar14 = uVar19 < 2;
    uVar19 = uVar19 + 1;
  } while (bVar14);
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


