/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ac040
 * Function: Caver::CharacterState::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(CharacterState * this, CharacterState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState*) const */

void __thiscall
Caver::CharacterState::SaveToProtobufMessage(CharacterState *this,CharacterState *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  CharacterState *pCVar16;
  CharacterState_ItemState *this_00;
  undefined8 *puVar17;
  long local_78 [2];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 004ac078 to 005ac083 has its CatchHandler @ 004ac0b8 */
  uVar3 = *(uint *)(param_1 + 0xcc);
  uVar4 = *(undefined4 *)(this + 0x98);
  *(uint *)(param_1 + 0xcc) = uVar3 | 1;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar4 = *(undefined4 *)(this + 0x9c);
  *(uint *)(param_1 + 0xcc) = uVar3 | 3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  uVar4 = *(undefined4 *)(this + 0xa0);
  *(uint *)(param_1 + 0xcc) = uVar3 | 7;
                    /* catch() { ... } // from try @ 004abfc0 with catch @ 004ac0ac
                       catch() { ... } // from try @ 004ac03c with catch @ 004ac0ac */
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  uVar4 = *(undefined4 *)(this + 0xa4);
                    /* catch() { ... } // from try @ 004ac078 with catch @ 004ac0b8 */
  *(uint *)(param_1 + 0xcc) = uVar3 | 0xf;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar4 = *(undefined4 *)(this + 0xa8);
  *(uint *)(param_1 + 0xcc) = uVar3 | 0x1f;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  puVar9 = PTR__default_name__007e5e50;
  puVar8 = PTR_DAT_007e5de8;
  pCVar16 = *(CharacterState **)(this + 0x28);
  if (pCVar16 != this + 0x18) {
                    /* try { // try from 004ac0d8 to 005ac0ff has its CatchHandler @ 004ac108 */
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      iVar15 = *(int *)(param_1 + 0x28);
      iVar12 = *(int *)(param_1 + 0x2c);
      if (iVar15 < iVar12) {
                    /* catch() { ... } // from try @ 004ac128 with catch @ 004ac148 */
        *(int *)(param_1 + 0x28) = iVar15 + 1;
        this_00 = *(CharacterState_ItemState **)(*(long *)(param_1 + 0x20) + (long)iVar15 * 8);
      }
      else {
        if (iVar12 == *(int *)(param_1 + 0x30)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x20),iVar12 + 1);
          iVar12 = *(int *)(param_1 + 0x2c);
        }
        *(int *)(param_1 + 0x2c) = iVar12 + 1;
        this_00 = operator_new(0x20);
        Proto::CharacterState_ItemState::CharacterState_ItemState(this_00);
        iVar15 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar15 + 1;
        *(CharacterState_ItemState **)(*(long *)(param_1 + 0x20) + (long)iVar15 * 8) = this_00;
      }
                    /* catch() { ... } // from try @ 004ac1dc with catch @ 004ac1ac */
      FUN_0066a528(local_78,*(long *)(pCVar16 + 0x28) + 8);
      plVar10 = *(long **)(this_00 + 0x10);
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 1;
                    /* try { // try from 004ac1c8 to 005ac1db has its CatchHandler @ 004ac200 */
      if (plVar10 == (long *)puVar9) {
        plVar10 = operator_new(8);
        *plVar10 = (long)puVar1;
        *(long **)(this_00 + 0x10) = plVar10;
      }
                    /* try { // try from 004ac1dc to 005ac203 has its CatchHandler @ 004ac1ac */
      FUN_0066a6a8(plVar10,local_78);
      if ((undefined *)(local_78[0] + -0x18) != puVar8) {
        piVar14 = (int *)(local_78[0] + -8);
                    /* try { // try from 004ac100 to 005ac10b has its CatchHandler @ 004abed4 */
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar15 = *piVar14;
          *piVar14 = iVar15 + -1;
        }
        else {
          do {
            iVar15 = *piVar14;
                    /* catch() { ... } // from try @ 004ac0d8 with catch @ 004ac108 */
                    /* try { // try from 004ac10c to 005ac127 has its CatchHandler @ 004ac10c
                       catch() { ... } // from try @ 004ac10c with catch @ 004ac10c
                       catch() { ... } // from try @ 004ac12c with catch @ 004ac10c */
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar6) {
              *piVar14 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
                    /* try { // try from 004ac128 to 005ac12b has its CatchHandler @ 004ac148 */
        if (iVar15 < 1) {
                    /* try { // try from 004ac12c to 005ac15b has its CatchHandler @ 004ac10c */
          operator_delete((undefined *)(local_78[0] + -0x18));
        }
      }
                    /* catch() { ... } // from try @ 004ac1c8 with catch @ 004ac200 */
      *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(pCVar16 + 0x38);
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 2;
      pCVar16 = (CharacterState *)FUN_0064c6a0(pCVar16);
    } while (pCVar16 != this + 0x18);
  }
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_pthread_create_007e4e78;
  puVar17 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  if (puVar17 != puVar2) {
    do {
      FUN_0066a528(local_78,*puVar17);
      iVar15 = *(int *)(param_1 + 0x70);
      iVar12 = *(int *)(param_1 + 0x74);
      if (iVar15 < iVar12) {
        *(int *)(param_1 + 0x70) = iVar15 + 1;
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar15 * 8);
      }
      else {
        if (iVar12 == *(int *)(param_1 + 0x78)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x68),iVar12 + 1);
          iVar12 = *(int *)(param_1 + 0x74);
        }
        *(int *)(param_1 + 0x74) = iVar12 + 1;
        uVar11 = google::protobuf::internal::StringTypeHandlerBase::New();
        iVar15 = *(int *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = iVar15 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar15 * 8) = uVar11;
      }
      FUN_0066a6a8(uVar11,local_78);
      if ((undefined *)(local_78[0] + -0x18) != puVar9) {
        piVar14 = (int *)(local_78[0] + -8);
        if (puVar8 == (undefined *)0x0) {
          iVar15 = *piVar14;
          *piVar14 = iVar15 + -1;
        }
        else {
          do {
            iVar15 = *piVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar6) {
              *piVar14 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (iVar15 < 1) {
          operator_delete((undefined *)(local_78[0] + -0x18));
        }
      }
      puVar17 = puVar17 + 2;
    } while (puVar17 != puVar2);
  }
  if (*(long *)(this + 0x58) == 0) {
LAB_004ac374:
    lVar13 = *(long *)(this + 0x68);
    if (lVar13 == 0) goto LAB_004ac3e4;
LAB_004ac37c:
    FUN_0066a528(local_78,lVar13 + 8);
    puVar8 = PTR__default_weapon_trinket__007e5d70;
    plVar10 = *(long **)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0x400;
    if (plVar10 == (long *)puVar8) {
      plVar10 = operator_new(8);
      *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0xa8) = plVar10;
    }
    FUN_0066a6a8(plVar10,local_78);
    if ((undefined *)(local_78[0] + -0x18) == PTR_DAT_007e5de8) goto LAB_004ac3e4;
                    /* catch() { ... } // from try @ 004ac5a0 with catch @ 004ac548
                       catch() { ... } // from try @ 004ac6c8 with catch @ 004ac548 */
    piVar14 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
                    /* try { // try from 004ac560 to 005ac563 has its CatchHandler @ 004ac5fc */
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (0 < iVar15) goto LAB_004ac3e4;
    operator_delete((undefined *)(local_78[0] + -0x18));
    lVar13 = *(long *)(this + 0x78);
  }
  else {
    FUN_0066a528(local_78);
    puVar8 = PTR__default_current_skill__007e50e8;
    plVar10 = *(long **)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0x200;
    if (plVar10 == (long *)puVar8) {
      plVar10 = operator_new(8);
      *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0xa0) = plVar10;
    }
    FUN_0066a6a8(plVar10,local_78);
    if ((undefined *)(local_78[0] + -0x18) == PTR_DAT_007e5de8) goto LAB_004ac374;
                    /* catch() { ... } // from try @ 004ac508 with catch @ 004ac52c */
    piVar14 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (0 < iVar15) goto LAB_004ac374;
    operator_delete((undefined *)(local_78[0] + -0x18));
    lVar13 = *(long *)(this + 0x68);
    if (lVar13 != 0) goto LAB_004ac37c;
LAB_004ac3e4:
    lVar13 = *(long *)(this + 0x78);
  }
                    /* catch() { ... } // from try @ 004ac560 with catch @ 004ac5fc */
  if (lVar13 != 0) {
    FUN_0066a528(local_78,lVar13 + 8);
    puVar8 = PTR__default_armor_trinket__007e5360;
    plVar10 = *(long **)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0x800;
    if (plVar10 == (long *)puVar8) {
      plVar10 = operator_new(8);
      *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0xb0) = plVar10;
    }
    FUN_0066a6a8(plVar10,local_78);
    if ((undefined *)(local_78[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar14 = (int *)(local_78[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar15 = *piVar14;
        *piVar14 = iVar15 + -1;
      }
      else {
        do {
          iVar15 = *piVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar6) {
            *piVar14 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (iVar15 < 1) {
        operator_delete((undefined *)(local_78[0] + -0x18));
        lVar13 = *(long *)(this + 0x88);
        goto joined_r0x004ac458;
      }
    }
  }
  lVar13 = *(long *)(this + 0x88);
joined_r0x004ac458:
  if (lVar13 != 0) {
                    /* catch() { ... } // from try @ 004ac480 with catch @ 004ac460
                       catch() { ... } // from try @ 004ac4e4 with catch @ 004ac460 */
    FUN_0066a528(local_78,lVar13 + 8);
    puVar8 = PTR__default_skill_trinket__007e61b0;
    plVar10 = *(long **)(param_1 + 0xb8);
                    /* try { // try from 004ac478 to 005ac47f has its CatchHandler @ 004ac4b0 */
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0x1000;
                    /* try { // try from 004ac480 to 005ac4b7 has its CatchHandler @ 004ac460 */
    if (plVar10 == (long *)puVar8) {
      plVar10 = operator_new(8);
      *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0xb8) = plVar10;
    }
    FUN_0066a6a8(plVar10,local_78);
                    /* catch() { ... } // from try @ 004ac478 with catch @ 004ac4b0 */
                    /* try { // try from 004ac4b8 to 005ac4bf has its CatchHandler @ 004ac4cc */
    if ((undefined *)(local_78[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar14 = (int *)(local_78[0] + -8);
                    /* try { // try from 004ac59c to 005ac59f has its CatchHandler @ 004ac690 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar15 = *piVar14;
        *piVar14 = iVar15 + -1;
      }
      else {
        do {
                    /* try { // try from 004ac5a0 to 005ac647 has its CatchHandler @ 004ac548 */
          iVar15 = *piVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar6) {
            *piVar14 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (iVar15 < 1) {
        operator_delete((undefined *)(local_78[0] + -0x18));
                    /* try { // try from 004ac648 to 005ac64f has its CatchHandler @ 004ac66c */
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0xcc);
                    /* try { // try from 004ac4c8 to 005ac4cb has its CatchHandler @ 004ac4dc */
                    /* catch() { ... } // from try @ 004ac4b8 with catch @ 004ac4cc */
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(this + 0xac);
  *(uint *)(param_1 + 0xcc) = uVar3 | 0x2000;
  uVar4 = *(undefined4 *)(this + 0xb0);
                    /* catch() { ... } // from try @ 004ac4c8 with catch @ 004ac4dc */
                    /* try { // try from 004ac4e0 to 005ac4e3 has its CatchHandler @ 004ac4ec */
  *(uint *)(param_1 + 0xcc) = uVar3 | 0x6000;
                    /* try { // try from 004ac4e4 to 005ac4ef has its CatchHandler @ 004ac460 */
  *(undefined4 *)(param_1 + 0xc4) = uVar4;
                    /* catch() { ... } // from try @ 004ac4e0 with catch @ 004ac4ec */
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(this + 0xb4);
  *(uint *)(param_1 + 0xcc) = uVar3 | 0xe000;
                    /* catch() { ... } // from try @ 004ac510 with catch @ 004ac4f4 */
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004ac508 to 005ac50f has its CatchHandler @ 004ac52c */
                    /* try { // try from 004ac510 to 005ac53f has its CatchHandler @ 004ac4f4 */
  return;
}


