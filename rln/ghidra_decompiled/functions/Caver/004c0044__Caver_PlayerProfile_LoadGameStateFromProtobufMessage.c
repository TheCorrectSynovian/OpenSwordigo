/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c0044
 * Function: Caver::PlayerProfile::LoadGameStateFromProtobufMessage
 * Signature: undefined __thiscall LoadGameStateFromProtobufMessage(PlayerProfile * this, GameState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::LoadGameStateFromProtobufMessage(Caver::Proto::GameState const&) */

void __thiscall
Caver::PlayerProfile::LoadGameStateFromProtobufMessage(PlayerProfile *this,GameState *param_1)

{
  shared_ptr *psVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  Map *pMVar6;
  GameData *pGVar7;
  GameState *this_00;
  GameData *pGVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  undefined1 auStack_218 [8];
  long local_210;
  Map *local_208;
  long *local_200;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  GameData *local_1e8;
  long *local_1e0;
  long local_1d8 [38];
  Map aMStack_a8 [80];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  Proto::Map::Map(aMStack_a8);
  FUN_00666bb8(&local_1e8,&DAT_00691f7c,auStack_1f0);
  FUN_00666bb8(&local_208,&DAT_00691f81,auStack_1f8);
  PathForResourceOfType((string *)&local_1e8,(string *)&local_208);
  LoadProtobufMessageFromFile((MessageLite *)aMStack_a8,(string *)local_1d8);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_1d8[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_1d8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* catch() { ... } // from try @ 004c055c with catch @ 004c0520
                       catch() { ... } // from try @ 004c0594 with catch @ 004c0520 */
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_1d8[0] + -0x18));
    }
  }
  if (local_208 + -0x18 != (Map *)puVar5) {
    pMVar6 = local_208 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pMVar6;
      *(int *)pMVar6 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pMVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pMVar6,0x10);
        if (bVar3) {
          *(int *)pMVar6 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_208 + -0x18);
    }
  }
  if (local_1e8 + -0x18 != (GameData *)puVar5) {
    pGVar7 = local_1e8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar7;
                    /* try { // try from 004c0558 to 005c055b has its CatchHandler @ 004c0578 */
      *(int *)pGVar7 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pGVar7,0x10);
        if (bVar3) {
          *(int *)pGVar7 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 004c055c to 005c058b has its CatchHandler @ 004c0520 */
    if (iVar11 < 1) {
      operator_delete(local_1e8 + -0x18);
    }
  }
  pMVar6 = operator_new(0x78);
  Map::Map(pMVar6);
  local_208 = pMVar6;
  boost::detail::shared_count::shared_count<Caver::Map>((shared_count *)&local_200,pMVar6);
  boost::detail::sp_enable_shared_from_this(&local_208,pMVar6,pMVar6);
                    /* try { // try from 004c0134 to 005c0193 has its CatchHandler @ 004c0134
                       catch() { ... } // from try @ 004c0134 with catch @ 004c0134
                       catch() { ... } // from try @ 004c0198 with catch @ 004c0134
                       catch() { ... } // from try @ 004c0278 with catch @ 004c0134
                       catch() { ... } // from try @ 004c03f8 with catch @ 004c0134 */
  Map::LoadFromProtobufMessage(local_208,aMStack_a8);
  FUN_00666bb8(local_1d8,"gamedata",auStack_1f8);
  FUN_00666bb8(&local_1e8,"gdata",auStack_218);
  PathForResourceOfType((string *)local_1d8,(string *)&local_1e8);
  if (local_1e8 + -0x18 != (GameData *)puVar5) {
    pGVar7 = local_1e8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar7;
                    /* catch() { ... } // from try @ 004c0558 with catch @ 004c0578 */
      *(int *)pGVar7 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pGVar7,0x10);
        if (bVar3) {
          *(int *)pGVar7 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_1e8 + -0x18);
                    /* try { // try from 004c058c to 005c0593 has its CatchHandler @ 004c059c */
    }
  }
  if ((undefined *)(local_1d8[0] + -0x18) != puVar5) {
    piVar10 = (int *)(local_1d8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
                    /* try { // try from 004c0594 to 005c059f has its CatchHandler @ 004c0520 */
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* catch() { ... } // from try @ 004c058c with catch @ 004c059c */
                    /* catch() { ... } // from try @ 004c0624 with catch @ 004c05a0 */
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_1d8[0] + -0x18));
    }
  }
                    /* try { // try from 004c0194 to 005c0197 has its CatchHandler @ 004c0404 */
                    /* try { // try from 004c0198 to 005c024f has its CatchHandler @ 004c0134 */
  Proto::GameData::GameData((GameData *)local_1d8);
  LoadProtobufMessageFromFile((MessageLite *)local_1d8,(string *)&local_210);
  pGVar7 = operator_new(0xe8);
  memset(pGVar7,0,0xe8);
  *(GameData **)(pGVar7 + 0x18) = pGVar7 + 8;
  *(GameData **)(pGVar7 + 0x20) = pGVar7 + 8;
  pGVar8 = pGVar7 + 0x60;
  *(undefined8 *)(pGVar7 + 0x68) = 0;
  *(undefined8 *)pGVar8 = 0;
  *(undefined8 *)(pGVar7 + 0x80) = 0;
  *(undefined8 *)(pGVar7 + 0x78) = 0;
  *(GameData **)(pGVar7 + 0x70) = pGVar8;
  *(GameData **)(pGVar7 + 0x78) = pGVar8;
  *(undefined8 *)(pGVar7 + 0x50) = 0;
  *(undefined8 *)(pGVar7 + 0x48) = 0;
  *(undefined8 *)(pGVar7 + 0x40) = 0;
  *(undefined8 *)(pGVar7 + 0x38) = 0;
  *(undefined8 *)(pGVar7 + 0x30) = 0;
  *(undefined8 *)(pGVar7 + 0x90) = 0;
  *(undefined8 *)(pGVar7 + 0x88) = 0;
  *(undefined8 *)(pGVar7 + 0x98) = 0;
  pGVar8 = pGVar7 + 0xa8;
  *(undefined8 *)(pGVar7 + 0xb0) = 0;
  *(undefined8 *)pGVar8 = 0;
  *(undefined8 *)(pGVar7 + 0xc0) = 0;
  *(undefined8 *)(pGVar7 + 0xb8) = 0;
  *(GameData **)(pGVar7 + 0xb8) = pGVar8;
  *(GameData **)(pGVar7 + 0xc0) = pGVar8;
  *(undefined8 *)(pGVar7 + 200) = 0;
  *(undefined8 *)(pGVar7 + 0xd0) = 0;
  *(undefined8 *)(pGVar7 + 0xd8) = 0;
  *(undefined8 *)(pGVar7 + 0xe0) = 0;
  local_1e8 = pGVar7;
  boost::detail::shared_count::shared_count<Caver::GameData>((shared_count *)&local_1e0,pGVar7);
  boost::detail::sp_enable_shared_from_this(&local_1e8,pGVar7,pGVar7);
  pGVar7 = *(GameData **)(this + 0x70);
  plVar12 = *(long **)(this + 0x78);
  *(GameData **)(this + 0x70) = local_1e8;
  *(long **)(this + 0x78) = local_1e0;
  local_1e8 = pGVar7;
  local_1e0 = plVar12;
                    /* try { // try from 004c0250 to 005c0277 has its CatchHandler @ 004c03ac */
  if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = plVar12[2];
    plVar12[2] = lVar9 + -1;
                    /* try { // try from 004c0278 to 005c03a7 has its CatchHandler @ 004c0134 */
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  psVar1 = (shared_ptr *)(this + 0x70);
  lVar9 = *(long *)psVar1;
  if (local_200 != (long *)0x0) {
    local_200[1] = local_200[1] + 1;
  }
  plVar12 = *(long **)(lVar9 + 0x50);
  *(Map **)(lVar9 + 0x48) = local_208;
  *(long **)(lVar9 + 0x50) = local_200;
  if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = plVar12[2];
    plVar12[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  GameData::LoadFromProtobufMessage(*(GameData **)psVar1,(GameData *)local_1d8);
  this_00 = operator_new(0x1d0);
  GameState::GameState(this_00,psVar1);
  local_1e8 = (GameData *)this_00;
  boost::detail::shared_count::shared_count<Caver::GameState>((shared_count *)&local_1e0,this_00);
  boost::detail::sp_enable_shared_from_this(&local_1e8,this_00,this_00);
  pGVar7 = *(GameData **)(this + 0x80);
  plVar12 = *(long **)(this + 0x88);
  *(GameData **)(this + 0x80) = local_1e8;
  *(long **)(this + 0x88) = local_1e0;
  local_1e8 = pGVar7;
  local_1e0 = plVar12;
  if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = plVar12[2];
    plVar12[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  GameState::LoadFromProtobufMessage(*(GameState **)(this + 0x80),param_1);
                    /* try { // try from 004c03a8 to 005c03ab has its CatchHandler @ 004c0404 */
  Proto::GameData::~GameData((GameData *)local_1d8);
                    /* catch() { ... } // from try @ 004c0250 with catch @ 004c03ac */
  plVar12 = local_200;
  if ((undefined *)(local_210 + -0x18) != puVar5) {
    piVar10 = (int *)(local_210 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_210 + -0x18));
      plVar12 = local_200;
    }
  }
                    /* try { // try from 004c03d0 to 005c03f7 has its CatchHandler @ 004c0400 */
  if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = plVar12[2];
    plVar12[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 004c03f8 to 005c0417 has its CatchHandler @ 004c0134 */
                    /* catch() { ... } // from try @ 004c03d0 with catch @ 004c0400 */
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
                    /* catch() { ... } // from try @ 004c0194 with catch @ 004c0404
                       catch() { ... } // from try @ 004c03a8 with catch @ 004c0404 */
  Proto::Map::~Map(aMStack_a8);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c05d8 to 005c05db has its CatchHandler @ 004c0608 */
    __stack_chk_fail();
  }
  return;
}


