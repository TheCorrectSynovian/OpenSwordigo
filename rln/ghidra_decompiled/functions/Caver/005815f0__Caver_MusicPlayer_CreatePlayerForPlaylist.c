/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005815f0
 * Function: Caver::MusicPlayer::CreatePlayerForPlaylist
 * Signature: undefined __thiscall CreatePlayerForPlaylist(MusicPlayer * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&) */

void __thiscall Caver::MusicPlayer::CreatePlayerForPlaylist(MusicPlayer *this,shared_ptr *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  AudioPlayer *pAVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  code *pcVar11;
  undefined1 auStack_80 [8];
  long local_78;
  long local_70;
  long local_68 [2];
  undefined *local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 005815fc to 00681667 has its CatchHandler @ 005833bc */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pAVar5 = (AudioPlayer *)AudioPlayer::NewPlayer();
  boost::shared_ptr<Caver::AudioPlayer>::shared_ptr<Caver::AudioPlayer>
            ((shared_ptr<Caver::AudioPlayer> *)&local_58,pAVar5);
  puVar1 = *(undefined **)(this + 0x10);
  plVar10 = *(long **)(this + 0x18);
  *(undefined **)(this + 0x10) = local_58;
  *(long **)(this + 0x18) = local_50;
  local_58 = puVar1;
  local_50 = plVar10;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
                    /* try { // try from 00581670 to 0068167f has its CatchHandler @ 00583064 */
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  lVar7 = *(long *)(*(long *)param_1 + 0x10);
  if (lVar7 == *(long *)(*(long *)param_1 + 0x18)) {
                    /* try { // try from 005816b8 to 006816df has its CatchHandler @ 00582728 */
    local_50 = (long *)CONCAT44(local_50._4_4_,0x3f800000);
    local_58 = PTR_DAT_007e5de8 + 0x18;
  }
  else {
    FUN_0066a528(&local_58,lVar7);
    local_50 = (long *)CONCAT44(local_50._4_4_,*(undefined4 *)(lVar7 + 8));
  }
  plVar10 = *(long **)(this + 0x10);
  pcVar11 = *(code **)(*plVar10 + 0x10);
  FUN_0066a528(&local_70,&local_58);
  FUN_00666bb8(&local_78,&DAT_00696758,auStack_80);
                    /* try { // try from 00581700 to 00681727 has its CatchHandler @ 00583064 */
  PathForResourceOfType((string *)&local_70,(string *)&local_78);
  uVar6 = (*pcVar11)(plVar10,local_68);
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
                    /* try { // try from 00581844 to 00681847 has its CatchHandler @ 00582fd4 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if ((undefined *)(local_78 + -0x18) != puVar1) {
    piVar8 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00581870 to 00681877 has its CatchHandler @ 00582cdc */
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
                    /* try { // try from 00581748 to 0068174b has its CatchHandler @ 00582714 */
  if ((undefined *)(local_70 + -0x18) != puVar1) {
    piVar8 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((uVar6 & 1) == 0) {
    plVar10 = *(long **)(this + 0x10);
    pcVar11 = *(code **)(*plVar10 + 0x10);
                    /* try { // try from 0058176c to 0068176f has its CatchHandler @ 00582710 */
    FUN_0066a528(&local_70,&local_58);
                    /* try { // try from 00581774 to 0068177b has its CatchHandler @ 00582d4c */
                    /* try { // try from 0058177c to 0068178f has its CatchHandler @ 00582d48 */
    FUN_00666bb8(&local_78,&DAT_0069675c,auStack_80);
                    /* try { // try from 00581790 to 006817a3 has its CatchHandler @ 0058300c */
    PathForResourceOfType((string *)&local_70,(string *)&local_78);
    uVar6 = (*pcVar11)(plVar10,local_68);
                    /* try { // try from 005817a4 to 006817af has its CatchHandler @ 00582d18 */
    if ((undefined *)(local_68[0] + -0x18) != puVar1) {
      piVar8 = (int *)(local_68[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
                    /* try { // try from 00581958 to 00681963 has its CatchHandler @ 00582c8c */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
                    /* try { // try from 005819c8 to 006819d7 has its CatchHandler @ 00582be8 */
        operator_delete((undefined *)(local_68[0] + -0x18));
      }
    }
    if ((undefined *)(local_78 + -0x18) != puVar1) {
      piVar8 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 00581984 to 006819ab has its CatchHandler @ 00582724 */
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
                    /* try { // try from 005817d0 to 006817d3 has its CatchHandler @ 0058300c */
    if ((undefined *)(local_70 + -0x18) != puVar1) {
      piVar8 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 00581a10 to 00681a37 has its CatchHandler @ 005826c0 */
      plVar10 = *(long **)(this + 0x18);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar7 = plVar10[2];
        plVar10[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
                    /* try { // try from 00581a58 to 00681a7f has its CatchHandler @ 00582be8 */
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      goto LAB_005817f8;
    }
  }
                    /* try { // try from 005817e8 to 006817ef has its CatchHandler @ 00582d14 */
  (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),this[8]);
                    /* try { // try from 005817f0 to 00681803 has its CatchHandler @ 00582d10 */
  UpdatePlayerVolume(this);
LAB_005817f8:
                    /* try { // try from 00581804 to 00681817 has its CatchHandler @ 00582fd4 */
  if (local_58 + -0x18 != puVar1) {
    piVar8 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_58 + -0x18);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00581818 to 00681823 has its CatchHandler @ 00582ce0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


