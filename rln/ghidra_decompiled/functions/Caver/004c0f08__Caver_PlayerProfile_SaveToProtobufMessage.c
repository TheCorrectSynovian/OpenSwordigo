/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c0f08
 * Function: Caver::PlayerProfile::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(PlayerProfile * this, PlayerProfile * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile*) */

void __thiscall
Caver::PlayerProfile::SaveToProtobufMessage(PlayerProfile *this,PlayerProfile *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  DateTime *this_00;
  GameState *pGVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  PlayerProfile *pPVar13;
  GameState *this_01;
  PlayerProfile_Counter *this_02;
  undefined4 uVar14;
  long local_78 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004c0f30 to 005c10c7 has its CatchHandler @ 004c0f30
                       catch() { ... } // from try @ 004c0f30 with catch @ 004c0f30
                       catch() { ... } // from try @ 004c1100 with catch @ 004c0f30
                       catch() { ... } // from try @ 004c139c with catch @ 004c0f30
                       catch() { ... } // from try @ 004c14d8 with catch @ 004c0f30
                       catch() { ... } // from try @ 004c1534 with catch @ 004c0f30 */
  if (*(long *)(this + 0x80) == 0) goto LAB_004c13b0;
  uVar12 = DateTime::Now();
  *(undefined8 *)(this + 0x28) = uVar12;
  puVar4 = PTR__default_identifier__007e5ce8;
  plVar6 = *(long **)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x2000;
  if (plVar6 == (long *)puVar4) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0xa0) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x18);
  puVar4 = PTR__default_name__007e7d58;
  plVar6 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1;
  if (plVar6 == (long *)puVar4) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x20);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
  if (*(long *)(param_1 + 0x18) == 0) {
    this_00 = operator_new(0x20);
    Proto::DateTime::DateTime(this_00);
    *(DateTime **)(param_1 + 0x18) = this_00;
  }
  DateTime::SaveToProtobufMessage((DateTime *)(this + 0x28));
  currentLevelTitle();
  puVar4 = PTR__default_current_level_title__007e50a0;
  plVar6 = *(long **)(param_1 + 0x20);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 4;
  if (plVar6 == (long *)puVar4) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x20) = plVar6;
  }
  FUN_0066a6a8(plVar6,local_78);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_78[0] + -0x18) == PTR_DAT_007e5de8) {
LAB_004c1078:
    pGVar7 = *(GameState **)(this + 0x80);
    if (pGVar7 == (GameState *)0x0) goto LAB_004c10f0;
LAB_004c1080:
    uVar14 = *(undefined4 *)(pGVar7 + 0xb8);
    *(undefined4 *)(this + 0x38) = uVar14;
    *(undefined4 *)(param_1 + 0x28) = uVar14;
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 8;
    uVar14 = GameState::PercentCompleted(pGVar7);
    *(undefined4 *)(this + 0x3c) = uVar14;
    uVar8 = *(uint *)(param_1 + 0xa8);
  }
  else {
    piVar10 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar11) goto LAB_004c1078;
    operator_delete((undefined *)(local_78[0] + -0x18));
    pGVar7 = *(GameState **)(this + 0x80);
    if (pGVar7 != (GameState *)0x0) goto LAB_004c1080;
LAB_004c10f0:
    uVar14 = *(undefined4 *)(this + 0x38);
    uVar8 = *(uint *)(param_1 + 0xa8) | 8;
                    /* try { // try from 004c10fc to 005c10ff has its CatchHandler @ 004c14d8 */
    *(uint *)(param_1 + 0xa8) = uVar8;
                    /* try { // try from 004c1100 to 005c11ab has its CatchHandler @ 004c0f30 */
    *(undefined4 *)(param_1 + 0x28) = uVar14;
    uVar14 = *(undefined4 *)(this + 0x3c);
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar14;
  uVar12 = *(undefined8 *)(this + 0x40);
  *(uint *)(param_1 + 0xa8) = uVar8 | 0x30;
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  equippedWeaponName();
  puVar5 = PTR__default_equipped_weapon_name__007e59b0;
  plVar6 = *(long **)(param_1 + 0x40);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x80;
  if (plVar6 == (long *)puVar5) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(puVar4 + 0x18);
    *(long **)(param_1 + 0x40) = plVar6;
  }
  FUN_0066a6a8(plVar6,local_78);
  if ((undefined *)(local_78[0] + -0x18) != puVar4) {
    piVar10 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  equippedArmorName();
  puVar5 = PTR__default_equipped_armor_name__007e6ea0;
  plVar6 = *(long **)(param_1 + 0x48);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x100;
  if (plVar6 == (long *)puVar5) {
    plVar6 = operator_new(8);
                    /* try { // try from 004c11ac to 005c139b has its CatchHandler @ 004c14dc */
    *plVar6 = (long)(puVar4 + 0x18);
    *(long **)(param_1 + 0x48) = plVar6;
  }
  FUN_0066a6a8(plVar6,local_78);
  if ((undefined *)(local_78[0] + -0x18) != puVar4) {
    piVar10 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  weaponTrinketName();
  puVar5 = PTR__default_weapon_trinket_name__007e6df0;
  plVar6 = *(long **)(param_1 + 0x50);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x200;
  if (plVar6 == (long *)puVar5) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(puVar4 + 0x18);
    *(long **)(param_1 + 0x50) = plVar6;
  }
  FUN_0066a6a8(plVar6,local_78);
  if ((undefined *)(local_78[0] + -0x18) != puVar4) {
    piVar10 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  armorTrinketName();
  puVar5 = PTR__default_armor_trinket_name__007e7ba0;
  plVar6 = *(long **)(param_1 + 0x58);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x400;
  if (plVar6 == (long *)puVar5) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(puVar4 + 0x18);
    *(long **)(param_1 + 0x58) = plVar6;
  }
  FUN_0066a6a8(plVar6,local_78);
  if ((undefined *)(local_78[0] + -0x18) != puVar4) {
    piVar10 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004c14d0 to 005c14d7 has its CatchHandler @ 004c14dc */
      iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 004c10fc with catch @ 004c14d8
                       try { // try from 004c14d8 to 005c150f has its CatchHandler @ 004c0f30 */
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 004c11ac with catch @ 004c14dc
                       catch() { ... } // from try @ 004c14d0 with catch @ 004c14dc */
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  puVar5 = PTR__default_name__007e6560;
  pPVar13 = *(PlayerProfile **)(this + 0xa8);
  if (this + 0x98 != pPVar13) {
    do {
      iVar11 = *(int *)(param_1 + 0x68);
      iVar9 = *(int *)(param_1 + 0x6c);
      if (iVar11 < iVar9) {
        *(int *)(param_1 + 0x68) = iVar11 + 1;
        this_02 = *(PlayerProfile_Counter **)(*(long *)(param_1 + 0x60) + (long)iVar11 * 8);
      }
      else {
        if (iVar9 == *(int *)(param_1 + 0x70)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x60),iVar9 + 1);
          iVar9 = *(int *)(param_1 + 0x6c);
        }
        *(int *)(param_1 + 0x6c) = iVar9 + 1;
        this_02 = operator_new(0x20);
        Proto::PlayerProfile_Counter::PlayerProfile_Counter(this_02);
        iVar11 = *(int *)(param_1 + 0x68);
        *(int *)(param_1 + 0x68) = iVar11 + 1;
        *(PlayerProfile_Counter **)(*(long *)(param_1 + 0x60) + (long)iVar11 * 8) = this_02;
      }
      plVar6 = *(long **)(this_02 + 0x10);
      *(uint *)(this_02 + 0x1c) = *(uint *)(this_02 + 0x1c) | 1;
      if (plVar6 == (long *)puVar5) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(puVar4 + 0x18);
        *(long **)(this_02 + 0x10) = plVar6;
      }
      FUN_0066a6a8(plVar6,pPVar13 + 0x20);
      *(undefined4 *)(this_02 + 0x18) = *(undefined4 *)(pPVar13 + 0x28);
      *(uint *)(this_02 + 0x1c) = *(uint *)(this_02 + 0x1c) | 2;
      pPVar13 = (PlayerProfile *)FUN_0064c6a0(pPVar13);
    } while (this + 0x98 != pPVar13);
  }
  uVar8 = *(uint *)(param_1 + 0xa8);
  if (this[0xc0] != (PlayerProfile)0x0) {
    uVar8 = uVar8 | 0x1000;
    *(uint *)(param_1 + 0xa8) = uVar8;
    param_1[0x98] = (PlayerProfile)0x1;
  }
  this_01 = *(GameState **)(param_1 + 0x38);
  pGVar7 = *(GameState **)(this + 0x80);
  *(uint *)(param_1 + 0xa8) = uVar8 | 0x40;
  if (this_01 == (GameState *)0x0) {
    this_01 = operator_new(0x120);
                    /* try { // try from 004c139c to 005c14cf has its CatchHandler @ 004c0f30 */
    Proto::GameState::GameState(this_01);
    *(GameState **)(param_1 + 0x38) = this_01;
  }
  GameState::SaveToProtobufMessage(pGVar7,this_01);
LAB_004c13b0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


