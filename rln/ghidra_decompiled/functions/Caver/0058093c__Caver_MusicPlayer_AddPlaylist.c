/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058093c
 * Function: Caver::MusicPlayer::AddPlaylist
 * Signature: undefined __thiscall AddPlaylist(MusicPlayer * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::AddPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&) */

void __thiscall Caver::MusicPlayer::AddPlaylist(MusicPlayer *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  long local_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_0066a528(local_48,*(undefined8 *)param_1);
  puVar5 = (undefined8 *)
           std::
           map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
           ::operator[]((map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                         *)(this + 0x58),(string *)local_48);
  uVar1 = *(undefined8 *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar9 = (long *)puVar5[1];
  *puVar5 = uVar1;
  puVar5[1] = lVar6;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
                    /* try { // try from 005809c4 to 006809e3 has its CatchHandler @ 005809c4
                       catch() { ... } // from try @ 005809c4 with catch @ 005809c4
                       catch() { ... } // from try @ 005809ec with catch @ 005809c4
                       catch() { ... } // from try @ 00580a1c with catch @ 005809c4 */
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 005809e4 to 006809eb has its CatchHandler @ 00580a04 */
                    /* try { // try from 005809ec to 00680a0f has its CatchHandler @ 005809c4 */
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00580a18 to 00680a1b has its CatchHandler @ 00580a24 */
                    /* try { // try from 00580a1c to 00680a27 has its CatchHandler @ 005809c4 */
    piVar7 = (int *)(local_48[0] + -8);
                    /* catch() { ... } // from try @ 00580a18 with catch @ 00580a24 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005809e4 with catch @ 00580a04 */
                    /* try { // try from 00580a10 to 00680a13 has its CatchHandler @ 00580a14 */
                    /* catch() { ... } // from try @ 00580a10 with catch @ 00580a14 */
  return;
}


