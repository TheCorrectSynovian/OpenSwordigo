/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00580f14
 * Function: Caver::MusicPlayer::PlaylistForName
 * Signature: undefined __cdecl PlaylistForName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::PlaylistForName(std::string const&) */

void Caver::MusicPlayer::PlaylistForName(string *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  MusicPlaylist *this;
  string *in_x1;
  long *in_x8;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00580f3c to 00680f63 has its CatchHandler @ 00583570 */
  plVar6 = (long *)std::
                   map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                   ::operator[]((map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                                 *)(param_1 + 0x58),in_x1);
  puVar1 = (undefined *)*plVar6;
  plVar6 = (long *)plVar6[1];
  *in_x8 = (long)puVar1;
  in_x8[1] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    plVar6[1] = plVar6[1] + 1;
  }
  if (puVar1 == (undefined *)0x0) {
    this = operator_new(0x28);
    MusicPlaylist::MusicPlaylist(this);
    boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>
              ((shared_ptr<Caver::MusicPlaylist> *)&local_68,this);
    puVar5 = local_68;
    *in_x8 = (long)local_68;
    in_x8[1] = (long)local_60;
    local_60 = plVar6;
                    /* try { // try from 00580fa8 to 00680faf has its CatchHandler @ 00583488 */
    if ((plVar6 != (long *)0x0) && (lVar7 = plVar6[1], plVar6[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      local_68 = puVar1;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar7 = plVar6[2];
      plVar6[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* try { // try from 00580fd0 to 00680ff7 has its CatchHandler @ 00583364 */
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    puVar1 = PTR_DAT_007e5de8;
    local_60 = (long *)CONCAT44(local_60._4_4_,0x3f800000);
    local_68 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 00580ff8 to 00681003 has its CatchHandler @ 005835d8 */
    FUN_0066a6a8(&local_68);
                    /* try { // try from 00581004 to 0068100b has its CatchHandler @ 00583484 */
    lVar7 = *(long *)(puVar5 + 0x18);
                    /* try { // try from 0058100c to 00681073 has its CatchHandler @ 005835d8 */
    if (lVar7 == *(long *)(puVar5 + 0x20)) {
      std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>::_M_insert_aux
                ((vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>> *)(puVar5 + 0x10),
                 lVar7,&local_68);
    }
    else {
      FUN_0066a528(lVar7,&local_68);
      *(undefined4 *)(lVar7 + 8) = local_60._0_4_;
      *(long *)(puVar5 + 0x18) = *(long *)(puVar5 + 0x18) + 0x10;
    }
    if (local_68 + -0x18 != puVar1) {
                    /* try { // try from 00581080 to 00681093 has its CatchHandler @ 0058347c */
      piVar8 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
                    /* try { // try from 005810a8 to 006810b7 has its CatchHandler @ 0058344c */
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
                    /* try { // try from 00581094 to 006810a7 has its CatchHandler @ 00583538 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_68 + -0x18);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00581078 to 0068107f has its CatchHandler @ 00583480 */
  return;
}


