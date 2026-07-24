/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005811a0
 * Function: Caver::MusicPlayer::PlayMusicWithName
 * Signature: undefined __thiscall PlayMusicWithName(MusicPlayer * this, string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::PlayMusicWithName(std::string const&, bool) */

void __thiscall
Caver::MusicPlayer::PlayMusicWithName(MusicPlayer *this,string *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  size_t __n;
  long lVar8;
  int *piVar9;
  size_t *psVar10;
  long *plVar11;
  void *local_68;
  long *plStack_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
                    /* try { // try from 005811b8 to 006811bb has its CatchHandler @ 005836fc */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005811cc to 006811d7 has its CatchHandler @ 0058375c */
  if (*(long *)(this + 0x30) != 0) {
                    /* try { // try from 005811d8 to 006811df has its CatchHandler @ 005836e4 */
                    /* try { // try from 005811e0 to 006811eb has its CatchHandler @ 0058375c */
    FUN_0066a528(&local_58,*(long *)(this + 0x30));
    pvVar5 = local_58;
    __n = *(size_t *)((long)*(void **)param_1 + -0x18);
    psVar10 = (size_t *)((long)local_58 + -0x18);
    if (((__n == *psVar10) && (iVar7 = memcmp(*(void **)param_1,local_58,__n), iVar7 == 0)) &&
       (-1 < *(int *)(this + 0x20))) {
      bVar6 = DAT_00683944 <= *(float *)(this + 0x28);
    }
    else {
                    /* try { // try from 0058120c to 00681213 has its CatchHandler @ 00583684 */
      bVar6 = false;
    }
                    /* try { // try from 00581214 to 00681223 has its CatchHandler @ 00583620 */
    if (psVar10 != (size_t *)PTR_DAT_007e5de8) {
      piVar9 = (int *)((long)pvVar5 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(psVar10);
      }
    }
    if (bVar6) goto LAB_005813a8;
  }
  local_58 = (void *)0x0;
  plStack_50 = (long *)0x0;
  if (*(long *)(*(long *)param_1 + -0x18) == 0) {
    plStack_60 = (long *)0x0;
    local_68 = (void *)0x0;
LAB_005812ac:
    if (*(long *)(this + 0x30) != 0) goto LAB_005812b4;
LAB_00581340:
    uVar4 = DAT_00696750;
    if (param_2) {
                    /* try { // try from 00581348 to 0068134f has its CatchHandler @ 00583694 */
      *(undefined4 *)(this + 0x20) = 1;
      *(undefined8 *)(this + 0x24) = uVar4;
    }
    SetCurrentPlaylist(this,(shared_ptr *)&local_58);
  }
  else {
    PlaylistForName((string *)this);
    local_58 = local_68;
    plStack_50 = plStack_60;
    if (plStack_60 != (long *)0x0) {
                    /* try { // try from 00581258 to 0068125f has its CatchHandler @ 0058361c */
      plStack_60[1] = plStack_60[1] + 1;
      lVar8 = plStack_60[1];
      plStack_60[1] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 00581278 to 0068127f has its CatchHandler @ 00583618 */
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        lVar8 = plStack_60[2];
                    /* try { // try from 00581284 to 0068128b has its CatchHandler @ 005835e0 */
        plStack_60[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plStack_60 + 0x18))(plStack_60);
        }
      }
      goto LAB_005812ac;
    }
    if (*(long *)(this + 0x30) == 0) goto LAB_00581340;
LAB_005812b4:
    if (plStack_60 != (long *)0x0) {
      plStack_60[1] = plStack_60[1] + 1;
    }
    plVar11 = *(long **)(this + 0x48);
    *(void **)(this + 0x40) = local_68;
    *(long **)(this + 0x48) = plStack_60;
                    /* try { // try from 005812d8 to 00681323 has its CatchHandler @ 0058370c */
    if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar8 = plVar11[2];
      plVar11[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    this[0x50] = (MusicPlayer)param_2;
    if (-1 < *(int *)(this + 0x20)) {
      *(undefined8 *)(this + 0x20) = 0x3f2aaaabffffffff;
    }
  }
                    /* try { // try from 00581370 to 00681397 has its CatchHandler @ 005835dc */
  if ((plStack_60 != (long *)0x0) &&
     (lVar8 = plStack_60[1], plStack_60[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plStack_60 + 0x10))(plStack_60);
    lVar8 = plStack_60[2];
    plStack_60[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_60 + 0x18))(plStack_60);
    }
  }
LAB_005813a8:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005813b8 to 006813df has its CatchHandler @ 0058375c */
  return;
}


