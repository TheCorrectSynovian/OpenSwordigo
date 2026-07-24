/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00581ce8
 * Function: Caver::MusicPlayer::UpdatePlayerVolume
 * Signature: undefined __thiscall UpdatePlayerVolume(MusicPlayer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::UpdatePlayerVolume() */

void __thiscall Caver::MusicPlayer::UpdatePlayerVolume(MusicPlayer *this)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_58;
  float local_50;
  long local_48;
  
                    /* try { // try from 00581cf4 to 00681cfb has its CatchHandler @ 00582c88 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar8 = *(long **)(this + 0x10);
  if (plVar8 != (long *)0x0) {
    fVar10 = *(float *)(this + 4);
    fVar12 = *(float *)(this + 0x28);
    lVar5 = *(long *)(this + 0x30);
                    /* try { // try from 00581d24 to 00681d2f has its CatchHandler @ 00582958 */
    pcVar9 = *(code **)(*plVar8 + 0x68);
    fVar11 = 1.0;
    if (lVar5 == 0) {
      bVar3 = false;
    }
    else {
      lVar1 = *(long *)(lVar5 + 0x10);
      if (lVar1 == *(long *)(lVar5 + 0x18)) {
        local_50 = 1.0;
        local_58 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 00581d78 to 00681d7f has its CatchHandler @ 00582b24 */
      }
      else {
        FUN_0066a528(&local_58,lVar1);
        local_50 = *(float *)(lVar1 + 8);
                    /* try { // try from 00581d50 to 00681d77 has its CatchHandler @ 005826bc */
      }
      bVar3 = true;
      fVar11 = local_50;
    }
                    /* try { // try from 00581d80 to 00681d93 has its CatchHandler @ 00582954 */
    (*pcVar9)(fVar10 * fVar12 * fVar11,plVar8);
                    /* try { // try from 00581d94 to 00681da7 has its CatchHandler @ 00582900 */
    if ((bVar3) && (local_58 + -0x18 != PTR_DAT_007e5de8)) {
                    /* try { // try from 00581dd4 to 00681de7 has its CatchHandler @ 00582898 */
      piVar6 = (int *)(local_58 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
                    /* try { // try from 00581dfc to 00681e0b has its CatchHandler @ 00582b98 */
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(local_58 + -0x18);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00581db8 to 00681dbf has its CatchHandler @ 00582a7c */
                    /* try { // try from 00581dc0 to 00681dd3 has its CatchHandler @ 005828fc */
  return;
}


