/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ab174
 * Function: Caver::CharacterState::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(CharacterState * this, CharacterState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&) */

void __thiscall
Caver::CharacterState::LoadFromProtobufMessage(CharacterState *this,CharacterState *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  long local_a0;
  long *local_98;
  long local_88;
  
                    /* try { // try from 004ab188 to 005ab193 has its CatchHandler @ 004ab1ec */
                    /* try { // try from 004ab194 to 005ab20b has its CatchHandler @ 004ab128 */
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  uVar2 = *(uint *)(param_1 + 0xcc);
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(uint *)(param_1 + 0xcc);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(uint *)(param_1 + 0xcc);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 0xcc);
  }
  if ((uVar2 >> 4 & 1) == 0) {
    iVar13 = *(int *)(this + 0xa8);
  }
  else {
    iVar13 = *(int *)(param_1 + 0x1c);
    *(int *)(this + 0xa8) = iVar13;
  }
  if (iVar13 < 2) {
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    do {
      iVar5 = iVar13 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ab188 with catch @ 004ab1ec
                        */
      fVar17 = (float)GameData::EntityHealthMultiplierAtLevel(*(GameData **)this,iVar5);
                    /* try { // try from 004ab20c to 005ab233 has its CatchHandler @ 004ab23c */
      fVar18 = (float)GameData::EntityHealthMultiplierAtLevel(*(GameData **)this,iVar5);
                    /* try { // try from 004ab234 to 005ab23f has its CatchHandler @ 004ab128 */
      iVar14 = iVar14 + (int)(((float)iVar13 * 8.0 + 24.0) *
                             (float)(int)((float)((iVar13 + 2) * (int)fVar17) / fVar18));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ab20c with catch @ 004ab23c
                        */
      bVar1 = 2 < iVar13;
      iVar13 = iVar5;
    } while (bVar1);
  }
  iVar13 = *(int *)(param_1 + 0x18);
  if (iVar13 < iVar14) {
    if (*(int *)(this + 0xa8) < 2) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar14 = *(int *)(this + 0xa8);
      do {
        iVar5 = iVar14 + -1;
        fVar17 = (float)GameData::EntityHealthMultiplierAtLevel(*(GameData **)this,iVar5);
                    /* try { // try from 004ab2d8 to 005ab5ab has its CatchHandler @ 004ab2d8
                       catch() { ... } // from try @ 004ab2d8 with catch @ 004ab2d8
                       catch() { ... } // from try @ 004ab5d8 with catch @ 004ab2d8
                       catch() { ... } // from try @ 004ab674 with catch @ 004ab2d8
                       catch() { ... } // from try @ 004ab7f0 with catch @ 004ab2d8
                       catch() { ... } // from try @ 004ab960 with catch @ 004ab2d8 */
        fVar18 = (float)GameData::EntityHealthMultiplierAtLevel(*(GameData **)this,iVar5);
        iVar13 = iVar13 + (int)(((float)iVar14 * 8.0 + 24.0) *
                               (float)(int)((float)((iVar14 + 2) * (int)fVar17) / fVar18));
        bVar1 = 2 < iVar14;
        iVar14 = iVar5;
      } while (bVar1);
    }
  }
  *(int *)(this + 0xa4) = iVar13;
  puVar7 = PTR_DAT_007e5de8;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar16 = 0;
    do {
      GameData::ItemForName(*(string **)this);
      plVar12 = local_98;
      lVar11 = local_a0;
      if ((local_98 != (long *)0x0) && (local_98[1] == 0)) {
        (**(code **)(*local_98 + 0x10))(local_98);
        lVar10 = plVar12[2];
        plVar12[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      if (lVar11 != 0) {
        uVar3 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + lVar16 * 8) + 0x18);
        FUN_0066a528(&local_a0,lVar11 + 8);
        plVar8 = (long *)std::
                         map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                         ::operator[]((map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                                       *)(this + 0x10),(string *)&local_a0);
        if (plVar12 != (long *)0x0) {
          plVar12[1] = plVar12[1] + 1;
        }
        plVar15 = (long *)plVar8[1];
        *plVar8 = lVar11;
        plVar8[1] = (long)plVar12;
        if ((plVar15 != (long *)0x0) &&
           (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          lVar11 = plVar15[2];
          plVar15[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
        }
        *(undefined4 *)(plVar8 + 2) = uVar3;
        if ((undefined *)(local_a0 + -0x18) != puVar7) {
          piVar9 = (int *)(local_a0 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar13 = *piVar9;
            *piVar9 = iVar13 + -1;
          }
          else {
            do {
              iVar13 = *piVar9;
              cVar4 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar1) {
                *piVar9 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (iVar13 < 1) {
            operator_delete((undefined *)(local_a0 + -0x18));
          }
        }
      }
      if ((plVar12 != (long *)0x0) &&
         (lVar11 = plVar12[1], plVar12[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar11 = plVar12[2];
        plVar12[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x28));
  }
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar16 = 0;
    do {
      GameData::SkillForName(*(string **)this);
      plVar12 = *(long **)(this + 0x48);
      if (plVar12 == *(long **)(this + 0x50)) {
        std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>
                         *)(this + 0x40),plVar12,&local_a0);
        plVar12 = local_98;
      }
      else {
        *plVar12 = local_a0;
        plVar12[1] = (long)local_98;
        if (local_98 != (long *)0x0) {
          local_98[1] = local_98[1] + 1;
        }
        *(long **)(this + 0x48) = plVar12 + 2;
        plVar12 = local_98;
      }
      local_98 = plVar12;
      if ((plVar12 != (long *)0x0) &&
         (lVar11 = plVar12[1], plVar12[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar11 = plVar12[2];
        plVar12[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x70));
  }
  if (((byte)param_1[0xcd] >> 1 & 1) != 0) {
                    /* try { // try from 004ab5ac to 005ab5d7 has its CatchHandler @ 004ab918 */
    GameData::SkillForName(*(string **)this);
    if (local_98 != (long *)0x0) {
      local_98[1] = local_98[1] + 1;
    }
    plVar12 = *(long **)(this + 0x60);
    *(long *)(this + 0x58) = local_a0;
    *(long **)(this + 0x60) = local_98;
                    /* try { // try from 004ab5d8 to 005ab66b has its CatchHandler @ 004ab2d8 */
    if ((plVar12 != (long *)0x0) &&
       (lVar16 = plVar12[1], plVar12[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar16 = plVar12[2];
      plVar12[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    plVar12 = local_98;
    if ((local_98 != (long *)0x0) &&
       (lVar16 = local_98[1], local_98[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*local_98 + 0x10))(local_98);
      lVar16 = plVar12[2];
      plVar12[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
  }
  GameData::ItemForName(*(string **)this);
                    /* try { // try from 004ab66c to 005ab673 has its CatchHandler @ 004ab8cc */
  if (local_98 != (long *)0x0) {
                    /* try { // try from 004ab674 to 005ab7c3 has its CatchHandler @ 004ab2d8 */
    local_98[1] = local_98[1] + 1;
  }
  plVar12 = *(long **)(this + 0x70);
  *(long *)(this + 0x68) = local_a0;
  *(long **)(this + 0x70) = local_98;
  if ((plVar12 != (long *)0x0) && (lVar16 = plVar12[1], plVar12[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar16 = plVar12[2];
    plVar12[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar16 = local_98[1], local_98[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar16 = plVar12[2];
    plVar12[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  GameData::ItemForName(*(string **)this);
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
  plVar12 = *(long **)(this + 0x80);
  *(long *)(this + 0x78) = local_a0;
  *(long **)(this + 0x80) = local_98;
  if ((plVar12 != (long *)0x0) && (lVar16 = plVar12[1], plVar12[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar16 = plVar12[2];
    plVar12[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar16 = local_98[1], local_98[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar16 = plVar12[2];
    plVar12[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
                    /* try { // try from 004ab7c4 to 005ab7cb has its CatchHandler @ 004ab880 */
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  GameData::ItemForName(*(string **)this);
  if (local_98 != (long *)0x0) {
                    /* try { // try from 004ab7e4 to 005ab7ef has its CatchHandler @ 004ab834 */
    local_98[1] = local_98[1] + 1;
  }
  plVar12 = *(long **)(this + 0x90);
                    /* try { // try from 004ab7f0 to 005ab853 has its CatchHandler @ 004ab2d8 */
  *(long *)(this + 0x88) = local_a0;
  *(long **)(this + 0x90) = local_98;
  if ((plVar12 != (long *)0x0) && (lVar16 = plVar12[1], plVar12[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar16 = plVar12[2];
    plVar12[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
                    /* catch() { ... } // from try @ 004ab7e4 with catch @ 004ab834 */
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if ((local_98 != (long *)0x0) &&
     (lVar16 = local_98[1], local_98[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 004ab854 to 005ab95f has its CatchHandler @ 004ab968 */
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar16 = local_98[2];
    local_98[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*local_98 + 0x18))(local_98);
    }
  }
                    /* catch() { ... } // from try @ 004ab7c4 with catch @ 004ab880 */
  uVar2 = *(uint *)(param_1 + 0xcc);
  if ((uVar2 >> 0xd & 1) != 0) {
    *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xc0);
    uVar2 = *(uint *)(param_1 + 0xcc);
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xc4);
    uVar2 = *(uint *)(param_1 + 0xcc);
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 200);
  }
  if (*(long *)(lVar6 + 0x28) == local_88) {
                    /* catch() { ... } // from try @ 004ab66c with catch @ 004ab8cc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


