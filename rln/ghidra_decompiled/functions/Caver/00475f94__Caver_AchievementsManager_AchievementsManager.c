/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00475f94
 * Function: Caver::AchievementsManager::AchievementsManager
 * Signature: undefined __thiscall AchievementsManager(AchievementsManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::AchievementsManager() */

void __thiscall Caver::AchievementsManager::AchievementsManager(AchievementsManager *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  Achievement *pAVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  AchievementsManager *pAVar11;
  AchievementsManager *pAVar12;
  long *plVar13;
  ulong uVar14;
  long local_cd8;
  Achievement *local_cd0;
  long *local_cc8;
  long local_cc0;
  Achievement *local_cb8;
  long *local_cb0;
  Achievement *local_ca8;
  long *local_ca0;
  undefined1 auStack_c98 [8];
  long local_c90;
  undefined1 auStack_c88 [8];
  long local_c80;
  undefined1 auStack_c78 [8];
  long local_c70;
  undefined1 auStack_c68 [8];
  long local_c60;
  undefined1 auStack_c58 [8];
  long local_c50;
  undefined1 auStack_c48 [8];
  long local_c40;
  undefined1 auStack_c38 [8];
  long local_c30;
  undefined1 auStack_c28 [8];
  long local_c20;
  undefined1 auStack_c18 [8];
  long local_c10;
  undefined1 auStack_c08 [8];
  long local_c00;
  undefined1 auStack_bf8 [8];
  long local_bf0;
  undefined1 auStack_be8 [8];
  long local_be0;
  undefined1 auStack_bd8 [8];
  long local_bd0;
  undefined1 auStack_bc8 [8];
  long local_bc0;
  undefined1 auStack_bb8 [8];
  long local_bb0;
  undefined1 auStack_ba8 [8];
  long local_ba0;
  undefined1 auStack_b98 [8];
  long local_b90;
  undefined1 auStack_b88 [8];
  long local_b80;
  undefined1 auStack_b78 [8];
  long local_b70;
  undefined1 auStack_b68 [8];
  long local_b60;
  undefined1 auStack_b58 [8];
  long local_b50;
  undefined1 auStack_b48 [8];
  long local_b40;
  undefined1 auStack_b38 [8];
  long local_b30;
  undefined1 auStack_b28 [8];
  long local_b20;
  undefined1 auStack_b18 [8];
  long local_b10;
  undefined1 auStack_b08 [8];
  long local_b00;
  undefined1 auStack_af8 [8];
  long local_af0;
  undefined1 auStack_ae8 [8];
  long local_ae0;
  undefined1 auStack_ad8 [8];
  long local_ad0;
  undefined1 auStack_ac8 [8];
  long local_ac0;
  undefined1 auStack_ab8 [8];
  long local_ab0;
  undefined1 auStack_aa8 [8];
  long local_aa0;
  undefined1 auStack_a98 [8];
  long local_a90;
  undefined1 auStack_a88 [8];
  long local_a80;
  undefined1 auStack_a78 [8];
  long local_a70;
  undefined1 auStack_a68 [8];
  long local_a60;
  undefined1 auStack_a58 [8];
  long local_a50;
  undefined1 auStack_a48 [8];
  long local_a40;
  undefined1 auStack_a38 [8];
  long local_a30;
  undefined1 auStack_a28 [8];
  long local_a20;
  undefined1 auStack_a18 [8];
  long local_a10;
  undefined1 auStack_a08 [8];
  long local_a00;
  undefined1 auStack_9f8 [8];
  long local_9f0;
  undefined1 auStack_9e8 [8];
  long local_9e0;
  undefined1 auStack_9d8 [8];
  long local_9d0;
  undefined1 auStack_9c8 [8];
  long local_9c0;
  undefined1 auStack_9b8 [8];
  long local_9b0;
  undefined1 auStack_9a8 [8];
  long local_9a0;
  undefined1 auStack_998 [8];
  long local_990;
  undefined1 auStack_988 [8];
  long local_980;
  undefined1 auStack_978 [8];
  long local_970;
  undefined1 auStack_968 [8];
  long local_960;
  undefined1 auStack_958 [8];
  long local_950;
  undefined1 auStack_948 [8];
  long local_940;
  undefined1 auStack_938 [8];
  long local_930;
  undefined1 auStack_928 [8];
  long local_920;
  undefined1 auStack_918 [8];
  long local_910;
  undefined1 auStack_908 [8];
  long local_900;
  undefined1 auStack_8f8 [8];
  long local_8f0;
  undefined1 auStack_8e8 [8];
  long local_8e0;
  undefined1 auStack_8d8 [8];
  long local_8d0;
  undefined1 auStack_8c8 [8];
  long local_8c0;
  undefined1 auStack_8b8 [8];
  long local_8b0;
  undefined1 auStack_8a8 [8];
  long local_8a0;
  undefined1 auStack_898 [8];
  long local_890;
  undefined1 auStack_888 [8];
  long local_880;
  undefined1 auStack_878 [8];
  long local_870;
  undefined1 auStack_868 [8];
  long local_860;
  undefined1 auStack_858 [8];
  long local_850;
  undefined1 auStack_848 [8];
  long local_840;
  undefined1 auStack_838 [8];
  long local_830;
  undefined1 auStack_828 [8];
  long local_820;
  undefined1 auStack_818 [8];
  long local_810;
  undefined1 auStack_808 [8];
  long local_800;
  undefined1 auStack_7f8 [8];
  long local_7f0;
  undefined1 auStack_7e8 [8];
  long local_7e0;
  undefined1 auStack_7d8 [8];
  long local_7d0;
  undefined1 auStack_7c8 [8];
  long local_7c0;
  undefined1 auStack_7b8 [8];
  long local_7b0;
  undefined1 auStack_7a8 [8];
  long local_7a0;
  undefined1 auStack_798 [8];
  long local_790;
  undefined1 auStack_788 [8];
  long local_780;
  undefined1 auStack_778 [8];
  long local_770;
  undefined1 auStack_768 [8];
  long local_760;
  undefined1 auStack_758 [8];
  long local_750;
  undefined1 auStack_748 [8];
  long local_740;
  undefined1 auStack_738 [8];
  long local_730;
  undefined1 auStack_728 [8];
  long local_720;
  undefined1 auStack_718 [8];
  long local_710;
  undefined1 auStack_708 [8];
  long local_700;
  undefined1 auStack_6f8 [8];
  long local_6f0;
  undefined1 auStack_6e8 [8];
  long local_6e0;
  undefined1 auStack_6d8 [8];
  long local_6d0;
  undefined1 auStack_6c8 [8];
  long local_6c0;
  undefined1 auStack_6b8 [8];
  long local_6b0;
  undefined1 auStack_6a8 [8];
  long local_6a0;
  undefined1 auStack_698 [8];
  long local_690;
  undefined1 auStack_688 [8];
  long local_680;
  undefined1 auStack_678 [8];
  long local_670;
  undefined1 auStack_668 [8];
  long local_660;
  undefined1 auStack_658 [8];
  long local_650;
  undefined1 auStack_648 [8];
  long local_640;
  undefined1 auStack_638 [8];
  long local_630;
  undefined1 auStack_628 [8];
  long local_620;
  undefined1 auStack_618 [8];
  long local_610;
  undefined1 auStack_608 [8];
  long local_600;
  undefined1 auStack_5f8 [8];
  long local_5f0;
  undefined1 auStack_5e8 [8];
  long local_5e0;
  undefined1 auStack_5d8 [8];
  long local_5d0;
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [8];
  undefined1 auStack_5b8 [16];
  Achievement aAStack_5a8 [48];
  Achievement aAStack_578 [48];
  Achievement aAStack_548 [48];
  Achievement aAStack_518 [48];
  Achievement aAStack_4e8 [48];
  Achievement aAStack_4b8 [48];
  Achievement aAStack_488 [48];
  Achievement aAStack_458 [48];
  Achievement aAStack_428 [48];
  Achievement aAStack_3f8 [48];
  Achievement aAStack_3c8 [48];
  Achievement aAStack_398 [48];
  Achievement aAStack_368 [48];
  Achievement aAStack_338 [48];
  Achievement aAStack_308 [48];
  Achievement aAStack_2d8 [48];
  Achievement aAStack_2a8 [48];
  Achievement aAStack_278 [48];
  Achievement aAStack_248 [48];
  Achievement aAStack_218 [48];
  Achievement aAStack_1e8 [48];
  Achievement aAStack_1b8 [48];
  Achievement aAStack_188 [48];
  Achievement aAStack_158 [48];
  Achievement aAStack_128 [48];
  Achievement aAStack_f8 [48];
  Achievement aAStack_c8 [48];
  Achievement aAStack_98 [48];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00475e5c with catch @ 00475fdc */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  pAVar11 = this + 0x20;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)pAVar11 = 0;
  *(AchievementsManager **)(this + 0x30) = pAVar11;
  *(AchievementsManager **)(this + 0x38) = pAVar11;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  pAVar12 = this + 0x68;
  *(undefined8 *)pAVar12 = 0;
  *(AchievementsManager **)(this + 0x78) = pAVar12;
  *(AchievementsManager **)(this + 0x80) = pAVar12;
  pAVar11 = this + 0x98;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)pAVar11 = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(AchievementsManager **)(this + 0xa8) = pAVar11;
  *(AchievementsManager **)(this + 0xb0) = pAVar11;
  *(undefined8 *)(this + 0xb8) = 0;
  memset(this + 200,0,0x60);
  std::
  _Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
  ::_M_initialize_map((_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
                       *)(this + 0xd8),0);
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(AchievementsManager **)(this + 0x168) = this + 0x150;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(AchievementsManager **)(this + 0x160) = this + 0x150;
                    /* catch() { ... } // from try @ 00475d70 with catch @ 0047606c */
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(AchievementsManager **)(this + 0x198) = this + 0x180;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(AchievementsManager **)(this + 400) = this + 0x180;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(AchievementsManager **)(this + 0x1c0) = this + 0x1b0;
  *(AchievementsManager **)(this + 0x1c8) = this + 0x1b0;
  *(undefined8 *)(this + 0x1d0) = 0;
  FUN_00666bb8(&local_cc0,"scavenger",auStack_5b8);
  FUN_00666bb8(&local_cd8,"Scavenger",auStack_5c0);
  FUN_00666bb8(&local_ca8,"Find a Treasure.",auStack_5c8);
  FUN_00666bb8(&local_5d0,"treasures",auStack_5d8);
  Achievement::Achievement
            (aAStack_5a8,(string *)&local_cc0,(string *)&local_cd8,(string *)&local_ca8,10,
             (string *)&local_5d0,1);
  FUN_00666bb8(&local_5e0,&DAT_0068eec0,auStack_5e8);
                    /* try { // try from 00476128 to 005762cb has its CatchHandler @ 00476128
                       catch() { ... } // from try @ 00476128 with catch @ 00476128
                       catch() { ... } // from try @ 004762d0 with catch @ 00476128 */
  FUN_00666bb8(&local_5f0,"Beam Me Up Scotty",auStack_5f8);
  FUN_00666bb8(&local_600,"Travel through a portal.",auStack_608);
  FUN_00666bb8(&local_610,&DAT_0068fbeb,auStack_618);
  Achievement::Achievement
            (aAStack_578,(string *)&local_5e0,(string *)&local_5f0,(string *)&local_600,10,
             (string *)&local_610,1);
  FUN_00666bb8(&local_620,"angrybats",auStack_628);
  FUN_00666bb8(&local_630,"Angry Bats",auStack_638);
  FUN_00666bb8(&local_640,"Kill Szan, The Angry.",auStack_648);
  FUN_00666bb8(&local_650,&DAT_0068fbeb,auStack_658);
  Achievement::Achievement
            (aAStack_548,(string *)&local_620,(string *)&local_630,(string *)&local_640,0x14,
             (string *)&local_650,1);
  FUN_00666bb8(&local_660,"blastabat",auStack_668);
  FUN_00666bb8(&local_670,"Blast a Bat",auStack_678);
  FUN_00666bb8(&local_680,"Kill a bat with a magic bolt.",auStack_688);
  FUN_00666bb8(&local_690,&DAT_0068fbeb,auStack_698);
  Achievement::Achievement
            (aAStack_518,(string *)&local_660,(string *)&local_670,(string *)&local_680,0x14,
             (string *)&local_690,1);
  FUN_00666bb8(&local_6a0,"golddigger",auStack_6a8);
  FUN_00666bb8(&local_6b0,"Gold Digger",auStack_6b8);
  FUN_00666bb8(&local_6c0,"Find 10 Treasures.",auStack_6c8);
  FUN_00666bb8(&local_6d0,"treasures",auStack_6d8);
                    /* try { // try from 004762cc to 005762cf has its CatchHandler @ 004763c4 */
                    /* try { // try from 004762d0 to 005763d7 has its CatchHandler @ 00476128 */
  Achievement::Achievement
            (aAStack_4e8,(string *)&local_6a0,(string *)&local_6b0,(string *)&local_6c0,0x14,
             (string *)&local_6d0,10);
  FUN_00666bb8(&local_6e0,"thedestroyer",auStack_6e8);
  FUN_00666bb8(&local_6f0,"The Destroyer",auStack_6f8);
  FUN_00666bb8(&local_700,"Smash 100 pots.",auStack_708);
  FUN_00666bb8(&local_710,&DAT_0069045a,auStack_718);
  Achievement::Achievement
            (aAStack_4b8,(string *)&local_6e0,(string *)&local_6f0,(string *)&local_700,0x14,
             (string *)&local_710,100);
  FUN_00666bb8(&local_720,"thegardener",auStack_728);
  FUN_00666bb8(&local_730,"The Gardener",auStack_738);
  FUN_00666bb8(&local_740,"Cut down 100 bushes.",auStack_748);
  FUN_00666bb8(&local_750,"bushes",auStack_758);
                    /* catch() { ... } // from try @ 004762cc with catch @ 004763c4 */
  Achievement::Achievement
            (aAStack_488,(string *)&local_720,(string *)&local_730,(string *)&local_740,0x14,
             (string *)&local_750,100);
                    /* try { // try from 004763d8 to 00576417 has its CatchHandler @ 004763d8
                       catch() { ... } // from try @ 004763d8 with catch @ 004763d8
                       catch() { ... } // from try @ 00476ff4 with catch @ 004763d8 */
  FUN_00666bb8(&local_760,"recklessshooting",auStack_768);
  FUN_00666bb8(&local_770,"Reckless Shooting",auStack_778);
  FUN_00666bb8(&local_780,"Get killed by your own magic bolt.",auStack_788);
                    /* try { // try from 00476418 to 0057642b has its CatchHandler @ 00477448 */
  FUN_00666bb8(&local_790,&DAT_0068fbeb,auStack_798);
                    /* try { // try from 00476438 to 00576443 has its CatchHandler @ 004773e4 */
  Achievement::Achievement
            (aAStack_458,(string *)&local_760,(string *)&local_770,(string *)&local_780,0x1e,
             (string *)&local_790,1);
  FUN_00666bb8(&local_7a0,"bombabat",auStack_7a8);
                    /* try { // try from 0047646c to 005764a7 has its CatchHandler @ 00477380 */
  FUN_00666bb8(&local_7b0,"Bomb a Bat",auStack_7b8);
  FUN_00666bb8(&local_7c0,"Kill a bat with a bomb.",auStack_7c8);
  FUN_00666bb8(&local_7d0,&DAT_0068fbeb,auStack_7d8);
  Achievement::Achievement
            (aAStack_428,(string *)&local_7a0,(string *)&local_7b0,(string *)&local_7c0,0x14,
             (string *)&local_7d0,1);
                    /* try { // try from 004764d0 to 005764e3 has its CatchHandler @ 0047737c */
  FUN_00666bb8(&local_7e0,"mishandlingexplosives",auStack_7e8);
  FUN_00666bb8(&local_7f0,"Mishandling Explosives",auStack_7f8);
                    /* try { // try from 004764f4 to 005764ff has its CatchHandler @ 0047733c */
  FUN_00666bb8(&local_800,"Get killed by your own bomb.",auStack_808);
  FUN_00666bb8(&local_810,&DAT_0068fbeb,auStack_818);
                    /* try { // try from 00476520 to 0057655b has its CatchHandler @ 004772e0 */
  Achievement::Achievement
            (aAStack_3f8,(string *)&local_7e0,(string *)&local_7f0,(string *)&local_800,0x1e,
             (string *)&local_810,1);
  FUN_00666bb8(&local_820,"pancaketime",auStack_828);
  FUN_00666bb8(&local_830,"Pancake Time",auStack_838);
  FUN_00666bb8(&local_840,"Get crushed to death.",auStack_848);
                    /* try { // try from 0047657c to 0057658f has its CatchHandler @ 004772dc */
  FUN_00666bb8(&local_850,&DAT_0068fbeb,auStack_858);
                    /* try { // try from 004765a0 to 005765ab has its CatchHandler @ 0047729c */
  Achievement::Achievement
            (aAStack_3c8,(string *)&local_820,(string *)&local_830,(string *)&local_840,0x1e,
             (string *)&local_850,1);
  FUN_00666bb8(&local_860,"animatedearth",auStack_868);
                    /* try { // try from 004765d0 to 0057660b has its CatchHandler @ 00477240 */
  FUN_00666bb8(&local_870,"Animated Earth",auStack_878);
  FUN_00666bb8(&local_880,"Kill Boulder, The Golem.",auStack_888);
  FUN_00666bb8(&local_890,&DAT_0068fbeb,auStack_898);
  Achievement::Achievement
            (aAStack_398,(string *)&local_860,(string *)&local_870,(string *)&local_880,0x1e,
             (string *)&local_890,1);
                    /* try { // try from 0047662c to 0057663f has its CatchHandler @ 0047723c */
  FUN_00666bb8(&local_8a0,"lostsword",auStack_8a8);
                    /* try { // try from 00476650 to 0057665b has its CatchHandler @ 004771fc */
  FUN_00666bb8(&local_8b0,"Lost Sword",auStack_8b8);
  FUN_00666bb8(&local_8c0,"Find The Needle.",auStack_8c8);
  FUN_00666bb8(&local_8d0,&DAT_0068fbeb,auStack_8d8);
                    /* try { // try from 00476680 to 005766bb has its CatchHandler @ 004771a0 */
  Achievement::Achievement
            (aAStack_368,(string *)&local_8a0,(string *)&local_8b0,(string *)&local_8c0,0x1e,
             (string *)&local_8d0,1);
  FUN_00666bb8(&local_8e0,"theundead",auStack_8e8);
  FUN_00666bb8(&local_8f0,"The Undead",auStack_8f8);
  FUN_00666bb8(&local_900,"Find The Shadowtrinket.",auStack_908);
  FUN_00666bb8(&local_910,&DAT_0068fbeb,auStack_918);
  Achievement::Achievement
            (aAStack_338,(string *)&local_8e0,(string *)&local_8f0,(string *)&local_900,0x1e,
             (string *)&local_910,1);
  FUN_00666bb8(&local_920,"lawandjustice",auStack_928);
  FUN_00666bb8(&local_930,"Law and Justice",auStack_938);
  FUN_00666bb8(&local_940,"Kill Zak, The Bandit Leader.",auStack_948);
  FUN_00666bb8(&local_950,&DAT_0068fbeb,auStack_958);
  Achievement::Achievement
            (aAStack_308,(string *)&local_920,(string *)&local_930,(string *)&local_940,0x1e,
             (string *)&local_950,1);
  FUN_00666bb8(&local_960,"likeaninja",auStack_968);
  FUN_00666bb8(&local_970,"Like a Ninja",auStack_978);
  FUN_00666bb8(&local_980,&DAT_0069060f,auStack_988);
  FUN_00666bb8(&local_990,&DAT_0068fbeb,auStack_998);
  Achievement::Achievement
            (aAStack_2d8,(string *)&local_960,(string *)&local_970,(string *)&local_980,0x50,
             (string *)&local_990,1);
  FUN_00666bb8(&local_9a0,&DAT_00690645,auStack_9a8);
  FUN_00666bb8(&local_9b0,&DAT_0069064a,auStack_9b8);
  FUN_00666bb8(&local_9c0,"Kill Jack, The Ambusher.",auStack_9c8);
  FUN_00666bb8(&local_9d0,&DAT_0068fbeb,auStack_9d8);
  Achievement::Achievement
            (aAStack_2a8,(string *)&local_9a0,(string *)&local_9b0,(string *)&local_9c0,0x1e,
             (string *)&local_9d0,1);
  FUN_00666bb8(&local_9e0,"anotherentrance",auStack_9e8);
  FUN_00666bb8(&local_9f0,"Another Entrance",auStack_9f8);
  FUN_00666bb8(&local_a00,"Find The Thorn.",auStack_a08);
  FUN_00666bb8(&local_a10,&DAT_0068fbeb,auStack_a18);
  Achievement::Achievement
            (aAStack_278,(string *)&local_9e0,(string *)&local_9f0,(string *)&local_a00,0x1e,
             (string *)&local_a10,1);
  FUN_00666bb8(&local_a20,"lordoftheundead",auStack_a28);
  FUN_00666bb8(&local_a30,"Lord of The Undead",auStack_a38);
  FUN_00666bb8(&local_a40,"Find The Magic Sword.",auStack_a48);
  FUN_00666bb8(&local_a50,&DAT_0068fbeb,auStack_a58);
  Achievement::Achievement
            (aAStack_248,(string *)&local_a20,(string *)&local_a30,(string *)&local_a40,0x1e,
             (string *)&local_a50,1);
  FUN_00666bb8(&local_a60,"toofast",auStack_a68);
  FUN_00666bb8(&local_a70,"Too Fast",auStack_a78);
  FUN_00666bb8(&local_a80,"Kill Slick, The Quick.",auStack_a88);
  FUN_00666bb8(&local_a90,&DAT_0068fbeb,auStack_a98);
  Achievement::Achievement
            (aAStack_218,(string *)&local_a60,(string *)&local_a70,(string *)&local_a80,0x1e,
             (string *)&local_a90,1);
  FUN_00666bb8(&local_aa0,"treasurehunter",auStack_aa8);
  FUN_00666bb8(&local_ab0,"Treasure Hunter",auStack_ab8);
  FUN_00666bb8(&local_ac0,"Find 40 Treasures.",auStack_ac8);
  FUN_00666bb8(&local_ad0,"treasures",auStack_ad8);
  Achievement::Achievement
            (aAStack_1e8,(string *)&local_aa0,(string *)&local_ab0,(string *)&local_ac0,0x1e,
             (string *)&local_ad0,0x28);
  FUN_00666bb8(&local_ae0,"deadlymage",auStack_ae8);
  FUN_00666bb8(&local_af0,&DAT_00690737,auStack_af8);
  FUN_00666bb8(&local_b00,"Kill Edogani, The Deadly.",auStack_b08);
  FUN_00666bb8(&local_b10,&DAT_0068fbeb,auStack_b18);
  Achievement::Achievement
            (aAStack_1b8,(string *)&local_ae0,(string *)&local_af0,(string *)&local_b00,0x1e,
             (string *)&local_b10,1);
  FUN_00666bb8(&local_b20,"toorich",auStack_b28);
  FUN_00666bb8(&local_b30,"Too Rich",auStack_b38);
  FUN_00666bb8(&local_b40,"Have 999 soul shards.",auStack_b48);
  FUN_00666bb8(&local_b50,&DAT_0068fbeb,auStack_b58);
  Achievement::Achievement
            (aAStack_188,(string *)&local_b20,(string *)&local_b30,(string *)&local_b40,0x1e,
             (string *)&local_b50,1);
  FUN_00666bb8(&local_b60,"takingtheshortcut",auStack_b68);
  FUN_00666bb8(&local_b70,"Open Sesame",auStack_b78);
  FUN_00666bb8(&local_b80,"Find a Key.",auStack_b88);
  FUN_00666bb8(&local_b90,&DAT_0068fbeb,auStack_b98);
  Achievement::Achievement
            (aAStack_158,(string *)&local_b60,(string *)&local_b70,(string *)&local_b80,0x1e,
             (string *)&local_b90,1);
  FUN_00666bb8(&local_ba0,"indianajones",auStack_ba8);
  FUN_00666bb8(&local_bb0,"Indiana Jones",auStack_bb8);
                    /* try { // try from 00476c00 to 00576c2b has its CatchHandler @ 00477aa8 */
  FUN_00666bb8(&local_bc0,"Find all the Treasures.",auStack_bc8);
  FUN_00666bb8(&local_bd0,"treasures",auStack_bd8);
                    /* try { // try from 00476c2c to 00576c3b has its CatchHandler @ 00477a58 */
  Achievement::Achievement
            (aAStack_128,(string *)&local_ba0,(string *)&local_bb0,(string *)&local_bc0,0x50,
             (string *)&local_bd0,0x3b);
                    /* try { // try from 00476c3c to 00576c47 has its CatchHandler @ 004779f8 */
                    /* try { // try from 00476c48 to 00576c57 has its CatchHandler @ 00477994 */
  FUN_00666bb8(&local_be0,"shatteredblade",auStack_be8);
  FUN_00666bb8(&local_bf0,"Shattered Blade",auStack_bf8);
                    /* try { // try from 00476c7c to 00576c87 has its CatchHandler @ 00477948 */
  FUN_00666bb8(&local_c00,"Assemble the Mageblade.",auStack_c08);
                    /* try { // try from 00476c88 to 00576c97 has its CatchHandler @ 004778e4 */
  FUN_00666bb8(&local_c10,&DAT_0068fbeb,auStack_c18);
                    /* try { // try from 00476cb0 to 00576cbb has its CatchHandler @ 00477880 */
  Achievement::Achievement
            (aAStack_f8,(string *)&local_be0,(string *)&local_bf0,(string *)&local_c00,0x28,
             (string *)&local_c10,1);
  FUN_00666bb8(&local_c20,"theexplorer",auStack_c28);
                    /* try { // try from 00476ce0 to 00576d1b has its CatchHandler @ 00477814 */
  FUN_00666bb8(&local_c30,"The Explorer",auStack_c38);
  FUN_00666bb8(&local_c40,"Visit every place.",auStack_c48);
  FUN_00666bb8(&local_c50,&DAT_0068fbeb,auStack_c58);
  Achievement::Achievement
            (aAStack_c8,(string *)&local_c20,(string *)&local_c30,(string *)&local_c40,0x1e,
             (string *)&local_c50,1);
  FUN_00666bb8(&local_c60,"masteroforder",auStack_c68);
                    /* try { // try from 00476d48 to 00576d53 has its CatchHandler @ 00477808 */
                    /* try { // try from 00476d54 to 00576d67 has its CatchHandler @ 004777c8 */
  FUN_00666bb8(&local_c70,"Master of Order",auStack_c78);
  FUN_00666bb8(&local_c80,"Kill The Master of Chaos.",auStack_c88);
                    /* try { // try from 00476d70 to 00576d7b has its CatchHandler @ 00477788 */
  FUN_00666bb8(&local_c90,&DAT_0068fbeb,auStack_c98);
                    /* try { // try from 00476d9c to 00576dd3 has its CatchHandler @ 0047771c */
  Achievement::Achievement
            (aAStack_98,(string *)&local_c60,(string *)&local_c70,(string *)&local_c80,0x50,
             (string *)&local_c90,1);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_c90 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_c90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c90 + -0x18));
    }
  }
  if ((undefined *)(local_c80 + -0x18) != puVar5) {
                    /* try { // try from 00477bec to 00577c9b has its CatchHandler @ 00477bec
                       catch() { ... } // from try @ 00477bec with catch @ 00477bec
                       catch() { ... } // from try @ 00477ca4 with catch @ 00477bec
                       catch() { ... } // from try @ 00477d84 with catch @ 00477bec */
    piVar8 = (int *)(local_c80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00478bb4 to 00578bbf has its CatchHandler @ 00479484 */
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c80 + -0x18));
    }
  }
  if ((undefined *)(local_c70 + -0x18) != puVar5) {
    piVar8 = (int *)(local_c70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
                    /* try { // try from 00478bd0 to 00578c1b has its CatchHandler @ 00479514 */
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c70 + -0x18));
    }
  }
  if ((undefined *)(local_c60 + -0x18) != puVar5) {
    piVar8 = (int *)(local_c60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c60 + -0x18));
    }
  }
  if ((undefined *)(local_c50 + -0x18) != puVar5) {
    piVar8 = (int *)(local_c50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c50 + -0x18));
    }
  }
                    /* try { // try from 00476dfc to 00576e07 has its CatchHandler @ 00477718 */
                    /* try { // try from 00476e08 to 00576e1b has its CatchHandler @ 004776d8 */
  if ((undefined *)(local_c40 + -0x18) != puVar5) {
    piVar8 = (int *)(local_c40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c40 + -0x18));
    }
  }
  if ((undefined *)(local_c30 + -0x18) != puVar5) {
                    /* try { // try from 00477ca4 to 00577d7b has its CatchHandler @ 00477bec */
    piVar8 = (int *)(local_c30 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c30 + -0x18));
    }
  }
                    /* try { // try from 00476e24 to 00576e2f has its CatchHandler @ 00477698 */
  if ((undefined *)(local_c20 + -0x18) != puVar5) {
    piVar8 = (int *)(local_c20 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c20 + -0x18));
    }
  }
  if ((undefined *)(local_c10 + -0x18) != puVar5) {
    piVar8 = (int *)(local_c10 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c10 + -0x18));
    }
  }
  if ((undefined *)(local_c00 + -0x18) != puVar5) {
    piVar8 = (int *)(local_c00 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_c00 + -0x18));
    }
  }
                    /* try { // try from 00476e50 to 00576e87 has its CatchHandler @ 0047762c */
  if ((undefined *)(local_bf0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_bf0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_bf0 + -0x18));
                    /* try { // try from 00478ce4 to 00578cef has its CatchHandler @ 00479764 */
    }
  }
  if ((undefined *)(local_be0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_be0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00478cf8 to 00578d03 has its CatchHandler @ 004796d4 */
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_be0 + -0x18));
                    /* try { // try from 00478d04 to 00578d0b has its CatchHandler @ 004795a4 */
    }
  }
  if ((undefined *)(local_bd0 + -0x18) != puVar5) {
                    /* try { // try from 00477d7c to 00577d83 has its CatchHandler @ 00477de4 */
    piVar8 = (int *)(local_bd0 + -8);
                    /* try { // try from 00477d84 to 00577e93 has its CatchHandler @ 00477bec */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* try { // try from 00478d1c to 00578d37 has its CatchHandler @ 0047976c */
      operator_delete((undefined *)(local_bd0 + -0x18));
    }
  }
  if ((undefined *)(local_bc0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_bc0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* try { // try from 00478d3c to 00578de7 has its CatchHandler @ 00479770 */
      operator_delete((undefined *)(local_bc0 + -0x18));
    }
  }
  if ((undefined *)(local_bb0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_bb0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_bb0 + -0x18));
    }
  }
  if ((undefined *)(local_ba0 + -0x18) != puVar5) {
                    /* catch() { ... } // from try @ 00477d7c with catch @ 00477de4 */
    piVar8 = (int *)(local_ba0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_ba0 + -0x18));
    }
  }
                    /* try { // try from 00476eb0 to 00576ebb has its CatchHandler @ 00477628 */
  if ((undefined *)(local_b90 + -0x18) != puVar5) {
    piVar8 = (int *)(local_b90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 00477c9c with catch @ 00477e24 */
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b90 + -0x18));
    }
  }
                    /* try { // try from 00476ebc to 00576ecf has its CatchHandler @ 004775e8 */
  if ((undefined *)(local_b80 + -0x18) != puVar5) {
    piVar8 = (int *)(local_b80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b80 + -0x18));
    }
  }
                    /* try { // try from 00476ed8 to 00576ee3 has its CatchHandler @ 004775a8 */
  if ((undefined *)(local_b70 + -0x18) != puVar5) {
    piVar8 = (int *)(local_b70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b70 + -0x18));
    }
  }
  if ((undefined *)(local_b60 + -0x18) != puVar5) {
    piVar8 = (int *)(local_b60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b60 + -0x18));
    }
  }
  if ((undefined *)(local_b50 + -0x18) != puVar5) {
                    /* catch() { ... } // from try @ 00477f60 with catch @ 00477e9c */
    piVar8 = (int *)(local_b50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00478e08 to 00578e0b has its CatchHandler @ 004796d4 */
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b50 + -0x18));
    }
  }
                    /* try { // try from 00476f04 to 00576f3b has its CatchHandler @ 0047753c */
  if ((undefined *)(local_b40 + -0x18) != puVar5) {
    piVar8 = (int *)(local_b40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
                    /* try { // try from 00478e2c to 00578e2f has its CatchHandler @ 00479764 */
                    /* try { // try from 00478e30 to 00578faf has its CatchHandler @ 004784a0 */
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b40 + -0x18));
    }
  }
  if ((undefined *)(local_b30 + -0x18) != puVar5) {
    piVar8 = (int *)(local_b30 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b30 + -0x18));
    }
  }
  if ((undefined *)(local_b20 + -0x18) != puVar5) {
    piVar8 = (int *)(local_b20 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b20 + -0x18));
    }
  }
  if ((undefined *)(local_b10 + -0x18) != puVar5) {
                    /* try { // try from 00477f2c to 00577f5f has its CatchHandler @ 00478070 */
    piVar8 = (int *)(local_b10 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b10 + -0x18));
    }
  }
  if ((undefined *)(local_b00 + -0x18) != puVar5) {
    piVar8 = (int *)(local_b00 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
                    /* try { // try from 00477f60 to 0057812b has its CatchHandler @ 00477e9c */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b00 + -0x18));
    }
  }
  if ((undefined *)(local_af0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_af0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_af0 + -0x18));
    }
  }
                    /* try { // try from 00476f64 to 00576f6f has its CatchHandler @ 00477538 */
  if ((undefined *)(local_ae0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_ae0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_ae0 + -0x18));
    }
  }
                    /* try { // try from 00476f70 to 00576f83 has its CatchHandler @ 004774f8 */
  if ((undefined *)(local_ad0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_ad0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_ad0 + -0x18));
    }
  }
  if ((undefined *)(local_ac0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_ac0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_ac0 + -0x18));
    }
  }
                    /* try { // try from 00476f8c to 00576f97 has its CatchHandler @ 004774b8 */
  if ((undefined *)(local_ab0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_ab0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_ab0 + -0x18));
    }
  }
  if ((undefined *)(local_aa0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_aa0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_aa0 + -0x18));
    }
  }
                    /* try { // try from 00476fb8 to 00576ff3 has its CatchHandler @ 0047744c */
  if ((undefined *)(local_a90 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a90 + -0x18));
    }
  }
  if ((undefined *)(local_a80 + -0x18) != puVar5) {
                    /* catch() { ... } // from try @ 00477f2c with catch @ 00478070 */
    piVar8 = (int *)(local_a80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
                    /* try { // try from 00478fb0 to 00579007 has its CatchHandler @ 004796e4 */
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a80 + -0x18));
    }
  }
  if ((undefined *)(local_a70 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a70 + -0x18));
    }
  }
  if ((undefined *)(local_a60 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a60 + -0x18));
    }
  }
                    /* try { // try from 00476ff4 to 00577b07 has its CatchHandler @ 004763d8 */
  if ((undefined *)(local_a50 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a50 + -0x18));
    }
  }
  if ((undefined *)(local_a40 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a40 + -0x18));
    }
  }
  if ((undefined *)(local_a30 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a30 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
                    /* catch() { ... } // from try @ 00478184 with catch @ 00478138 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a30 + -0x18));
    }
  }
  if ((undefined *)(local_a20 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a20 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
                    /* try { // try from 0047815c to 0057816f has its CatchHandler @ 00478274 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a20 + -0x18));
    }
  }
  if ((undefined *)(local_a10 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a10 + -8);
                    /* try { // try from 00478174 to 00578183 has its CatchHandler @ 00478204 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00478184 to 00578277 has its CatchHandler @ 00478138 */
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a10 + -0x18));
    }
  }
  if ((undefined *)(local_a00 + -0x18) != puVar5) {
    piVar8 = (int *)(local_a00 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a00 + -0x18));
                    /* try { // try from 004790c4 to 0057911b has its CatchHandler @ 004795bc */
    }
  }
  if ((undefined *)(local_9f0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_9f0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_9f0 + -0x18));
    }
  }
  if ((undefined *)(local_9e0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_9e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_9e0 + -0x18));
    }
  }
  if ((undefined *)(local_9d0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_9d0 + -8);
                    /* catch() { ... } // from try @ 00478174 with catch @ 00478204 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_9d0 + -0x18));
    }
  }
  if ((undefined *)(local_9c0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_9c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_9c0 + -0x18));
    }
  }
  if ((undefined *)(local_9b0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_9b0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_9b0 + -0x18));
    }
  }
  if ((undefined *)(local_9a0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_9a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 0047815c with catch @ 00478274 */
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_9a0 + -0x18));
    }
  }
  if ((undefined *)(local_990 + -0x18) != puVar5) {
    piVar8 = (int *)(local_990 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_990 + -0x18));
    }
  }
  if ((undefined *)(local_980 + -0x18) != puVar5) {
    piVar8 = (int *)(local_980 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_980 + -0x18));
    }
  }
  if ((undefined *)(local_970 + -0x18) != puVar5) {
    piVar8 = (int *)(local_970 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_970 + -0x18));
    }
  }
  if ((undefined *)(local_960 + -0x18) != puVar5) {
    piVar8 = (int *)(local_960 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* try { // try from 004791fc to 00579253 has its CatchHandler @ 00479524 */
      operator_delete((undefined *)(local_960 + -0x18));
    }
  }
  if ((undefined *)(local_950 + -0x18) != puVar5) {
    piVar8 = (int *)(local_950 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_950 + -0x18));
    }
  }
  if ((undefined *)(local_940 + -0x18) != puVar5) {
    piVar8 = (int *)(local_940 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_940 + -0x18));
    }
  }
  if ((undefined *)(local_930 + -0x18) != puVar5) {
    piVar8 = (int *)(local_930 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00479254 to 00579793 has its CatchHandler @ 004784a0 */
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_930 + -0x18));
    }
  }
  if ((undefined *)(local_920 + -0x18) != puVar5) {
    piVar8 = (int *)(local_920 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_920 + -0x18));
    }
  }
  if ((undefined *)(local_910 + -0x18) != puVar5) {
    piVar8 = (int *)(local_910 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_910 + -0x18));
    }
  }
  if ((undefined *)(local_900 + -0x18) != puVar5) {
    piVar8 = (int *)(local_900 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_900 + -0x18));
    }
  }
  if ((undefined *)(local_8f0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_8f0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_8f0 + -0x18));
    }
  }
  if ((undefined *)(local_8e0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_8e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_8e0 + -0x18));
    }
  }
  if ((undefined *)(local_8d0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_8d0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_8d0 + -0x18));
    }
  }
  if ((undefined *)(local_8c0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_8c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_8c0 + -0x18));
    }
  }
  if ((undefined *)(local_8b0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_8b0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 00478af8 with catch @ 0047935c */
      operator_delete((undefined *)(local_8b0 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00476680 with catch @ 004771a0 */
  if ((undefined *)(local_8a0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_8a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_8a0 + -0x18));
    }
  }
  if ((undefined *)(local_890 + -0x18) != puVar5) {
    piVar8 = (int *)(local_890 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_890 + -0x18));
    }
  }
  if ((undefined *)(local_880 + -0x18) != puVar5) {
    piVar8 = (int *)(local_880 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_880 + -0x18));
    }
  }
  if ((undefined *)(local_870 + -0x18) != puVar5) {
    piVar8 = (int *)(local_870 + -8);
                    /* try { // try from 0047851c to 0057851f has its CatchHandler @ 004796cc */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_870 + -0x18));
    }
  }
  if ((undefined *)(local_860 + -0x18) != puVar5) {
    piVar8 = (int *)(local_860 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
                    /* catch() { ... } // from try @ 0047873c with catch @ 004793ec */
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 004789f8 with catch @ 004793f4 */
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_860 + -0x18));
    }
  }
  if ((undefined *)(local_850 + -0x18) != puVar5) {
    piVar8 = (int *)(local_850 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_850 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00476650 with catch @ 004771fc */
  if ((undefined *)(local_840 + -0x18) != puVar5) {
    piVar8 = (int *)(local_840 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_840 + -0x18));
    }
  }
  if ((undefined *)(local_830 + -0x18) != puVar5) {
    piVar8 = (int *)(local_830 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_830 + -0x18));
    }
  }
  if ((undefined *)(local_820 + -0x18) != puVar5) {
    piVar8 = (int *)(local_820 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_820 + -0x18));
                    /* catch() { ... } // from try @ 00478bb4 with catch @ 00479484 */
    }
  }
  if ((undefined *)(local_810 + -0x18) != puVar5) {
    piVar8 = (int *)(local_810 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
                    /* catch() { ... } // from try @ 004788f8 with catch @ 0047948c */
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_810 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 0047662c with catch @ 0047723c */
                    /* catch() { ... } // from try @ 004765d0 with catch @ 00477240 */
  if ((undefined *)(local_800 + -0x18) != puVar5) {
    piVar8 = (int *)(local_800 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
                    /* try { // try from 0047861c to 0057867f has its CatchHandler @ 004797c0 */
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_800 + -0x18));
    }
  }
  if ((undefined *)(local_7f0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_7f0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_7f0 + -0x18));
    }
  }
  if ((undefined *)(local_7e0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_7e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 004788f0 with catch @ 004794f4 */
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 004786d0 with catch @ 004794fc */
      operator_delete((undefined *)(local_7e0 + -0x18));
                    /* catch() { ... } // from try @ 0047896c with catch @ 00479504 */
    }
  }
  if ((undefined *)(local_7d0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_7d0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
                    /* catch() { ... } // from try @ 004788d4 with catch @ 0047950c */
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 00478bd0 with catch @ 00479514 */
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 00478554 with catch @ 0047951c */
      operator_delete((undefined *)(local_7d0 + -0x18));
                    /* catch() { ... } // from try @ 004791fc with catch @ 00479524 */
    }
  }
  if ((undefined *)(local_7c0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_7c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_7c0 + -0x18));
    }
  }
  if ((undefined *)(local_7b0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_7b0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
                    /* try { // try from 004786d0 to 005786d3 has its CatchHandler @ 004794fc */
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_7b0 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 004765a0 with catch @ 0047729c */
  if ((undefined *)(local_7a0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_7a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_7a0 + -0x18));
    }
  }
  if ((undefined *)(local_790 + -0x18) != puVar5) {
    piVar8 = (int *)(local_790 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_790 + -0x18));
                    /* catch() { ... } // from try @ 00478d04 with catch @ 004795a4 */
    }
  }
  if ((undefined *)(local_780 + -0x18) != puVar5) {
    piVar8 = (int *)(local_780 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
                    /* try { // try from 0047873c to 0057873f has its CatchHandler @ 004793ec */
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 004790c4 with catch @ 004795bc */
      operator_delete((undefined *)(local_780 + -0x18));
    }
  }
  if ((undefined *)(local_770 + -0x18) != puVar5) {
    piVar8 = (int *)(local_770 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_770 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 0047657c with catch @ 004772dc */
                    /* catch() { ... } // from try @ 00476520 with catch @ 004772e0 */
  if ((undefined *)(local_760 + -0x18) != puVar5) {
    piVar8 = (int *)(local_760 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_760 + -0x18));
    }
  }
  if ((undefined *)(local_750 + -0x18) != puVar5) {
    piVar8 = (int *)(local_750 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_750 + -0x18));
    }
  }
  if ((undefined *)(local_740 + -0x18) != puVar5) {
    piVar8 = (int *)(local_740 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 00478820 with catch @ 0047963c */
      operator_delete((undefined *)(local_740 + -0x18));
    }
  }
  if ((undefined *)(local_730 + -0x18) != puVar5) {
    piVar8 = (int *)(local_730 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_730 + -0x18));
    }
  }
  if ((undefined *)(local_720 + -0x18) != puVar5) {
    piVar8 = (int *)(local_720 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00478820 to 0057887f has its CatchHandler @ 0047963c */
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_720 + -0x18));
    }
  }
  if ((undefined *)(local_710 + -0x18) != puVar5) {
    piVar8 = (int *)(local_710 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_710 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 004764f4 with catch @ 0047733c */
  if ((undefined *)(local_700 + -0x18) != puVar5) {
    piVar8 = (int *)(local_700 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_700 + -0x18));
    }
  }
  if ((undefined *)(local_6f0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_6f0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
                    /* catch() { ... } // from try @ 0047851c with catch @ 004796cc */
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 00478cf8 with catch @ 004796d4
                       catch() { ... } // from try @ 00478e08 with catch @ 004796d4 */
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_6f0 + -0x18));
                    /* catch() { ... } // from try @ 00478fb0 with catch @ 004796e4 */
    }
  }
  if ((undefined *)(local_6e0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_6e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_6e0 + -0x18));
    }
  }
  if ((undefined *)(local_6d0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_6d0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 004788d4 to 005788e3 has its CatchHandler @ 0047950c */
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_6d0 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 004764d0 with catch @ 0047737c */
                    /* catch() { ... } // from try @ 0047646c with catch @ 00477380 */
  if ((undefined *)(local_6c0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_6c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
                    /* try { // try from 004788f0 to 005788f7 has its CatchHandler @ 004794f4 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 004788f8 to 0057890b has its CatchHandler @ 0047948c */
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_6c0 + -0x18));
    }
  }
  if ((undefined *)(local_6b0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_6b0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_6b0 + -0x18));
                    /* catch() { ... } // from try @ 00478ce4 with catch @ 00479764
                       catch() { ... } // from try @ 00478e2c with catch @ 00479764 */
    }
  }
  if ((undefined *)(local_6a0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_6a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
                    /* catch() { ... } // from try @ 00478d1c with catch @ 0047976c */
                    /* catch() { ... } // from try @ 00478d3c with catch @ 00479770 */
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_6a0 + -0x18));
    }
  }
  if ((undefined *)(local_690 + -0x18) != puVar5) {
    piVar8 = (int *)(local_690 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00479794 to 0057981b has its CatchHandler @ 00479884 */
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_690 + -0x18));
    }
  }
  if ((undefined *)(local_680 + -0x18) != puVar5) {
                    /* try { // try from 0047896c to 0057896f has its CatchHandler @ 00479504 */
    piVar8 = (int *)(local_680 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 0047861c with catch @ 004797c0 */
      operator_delete((undefined *)(local_680 + -0x18));
    }
  }
  if ((undefined *)(local_670 + -0x18) != puVar5) {
    piVar8 = (int *)(local_670 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_670 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00476438 with catch @ 004773e4 */
  if ((undefined *)(local_660 + -0x18) != puVar5) {
    piVar8 = (int *)(local_660 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_660 + -0x18));
    }
  }
  if ((undefined *)(local_650 + -0x18) != puVar5) {
    piVar8 = (int *)(local_650 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
                    /* try { // try from 0047981c to 00579887 has its CatchHandler @ 004784a0 */
      operator_delete((undefined *)(local_650 + -0x18));
    }
  }
  if ((undefined *)(local_640 + -0x18) != puVar5) {
    piVar8 = (int *)(local_640 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_640 + -0x18));
    }
  }
  if ((undefined *)(local_630 + -0x18) != puVar5) {
    piVar8 = (int *)(local_630 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_630 + -0x18));
    }
  }
  if ((undefined *)(local_620 + -0x18) != puVar5) {
    piVar8 = (int *)(local_620 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_620 + -0x18));
                    /* catch() { ... } // from try @ 00479794 with catch @ 00479884 */
    }
  }
  if ((undefined *)(local_610 + -0x18) != puVar5) {
    piVar8 = (int *)(local_610 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00479888 to 00579acb has its CatchHandler @ 00479888
                       catch() { ... } // from try @ 00479888 with catch @ 00479888
                       catch() { ... } // from try @ 00479b4c with catch @ 00479888
                       catch() { ... } // from try @ 00479bf0 with catch @ 00479888 */
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_610 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00476418 with catch @ 00477448 */
  if ((undefined *)(local_600 + -0x18) != puVar5) {
    piVar8 = (int *)(local_600 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_600 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00476fb8 with catch @ 0047744c */
  if ((undefined *)(local_5f0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_5f0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_5f0 + -0x18));
    }
  }
  if ((undefined *)(local_5e0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_5e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_5e0 + -0x18));
    }
  }
  if ((undefined *)(local_5d0 + -0x18) != puVar5) {
                    /* try { // try from 00478af8 to 00578b5b has its CatchHandler @ 0047935c */
    piVar8 = (int *)(local_5d0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_5d0 + -0x18));
    }
  }
  if (local_ca8 + -0x18 != (Achievement *)puVar5) {
    pAVar6 = local_ca8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)pAVar6;
      *(int *)pAVar6 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)pAVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pAVar6,0x10);
        if (bVar2) {
          *(int *)pAVar6 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_ca8 + -0x18);
    }
  }
  if ((undefined *)(local_cd8 + -0x18) != puVar5) {
    piVar8 = (int *)(local_cd8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_cd8 + -0x18));
    }
  }
  if ((undefined *)(local_cc0 + -0x18) != puVar5) {
    piVar8 = (int *)(local_cc0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_cc0 + -0x18));
    }
  }
  uVar14 = 0;
                    /* catch() { ... } // from try @ 00476f8c with catch @ 004774b8 */
  do {
    pAVar6 = operator_new(0x30);
    Achievement::Achievement(pAVar6,aAStack_5a8 + uVar14 * 0x30);
    local_ca8 = pAVar6;
                    /* catch() { ... } // from try @ 00476e24 with catch @ 00477698 */
    boost::detail::shared_count::shared_count<Caver::Achievement>((shared_count *)&local_ca0,pAVar6)
    ;
    boost::detail::sp_enable_shared_from_this(&local_ca8,pAVar6,pAVar6);
    puVar7 = *(undefined8 **)(this + 8);
    if (puVar7 == *(undefined8 **)(this + 0x10)) {
      std::
      vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
                       *)this,puVar7,&local_ca8);
      pAVar6 = local_ca8;
      plVar4 = local_ca0;
    }
    else {
      *puVar7 = local_ca8;
      puVar7[1] = local_ca0;
      if (local_ca0 != (long *)0x0) {
        local_ca0[1] = local_ca0[1] + 1;
      }
                    /* catch() { ... } // from try @ 00476e08 with catch @ 004776d8 */
      *(undefined8 **)(this + 8) = puVar7 + 2;
      pAVar6 = local_ca8;
      plVar4 = local_ca0;
    }
    if (plVar4 != (long *)0x0) {
      plVar4[1] = plVar4[1] + 1;
    }
    local_ca8 = pAVar6;
    local_ca0 = plVar4;
    FUN_0066a528(&local_cc0,aAStack_5a8 + uVar14 * 0x30);
                    /* catch() { ... } // from try @ 00476dfc with catch @ 00477718 */
                    /* catch() { ... } // from try @ 00476d9c with catch @ 0047771c */
    puVar7 = (undefined8 *)
             std::
             map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
             ::operator[]((map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                           *)(this + 0x18),(string *)&local_cc0);
    if (plVar4 != (long *)0x0) {
      plVar4[1] = plVar4[1] + 1;
    }
    plVar13 = (long *)puVar7[1];
    *puVar7 = pAVar6;
    puVar7[1] = plVar4;
    if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
                    /* catch() { ... } // from try @ 00476d70 with catch @ 00477788 */
    if ((undefined *)(local_cc0 + -0x18) != puVar5) {
      piVar8 = (int *)(local_cc0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar8;
        *piVar8 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_cc0 + -0x18));
      }
    }
    if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar9 = plVar4[2];
      plVar4[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 00476d54 with catch @ 004777c8 */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    pAVar6 = local_ca8;
    if (*(long *)(*(long *)(local_ca8 + 0x20) + -0x18) != 0) {
      pAVar6 = local_ca8 + 0x20;
    }
    FUN_0066a528(&local_cc0,pAVar6);
    pAVar11 = (AchievementsManager *)
              std::
              _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
              ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                      *)(this + 0x60),(string *)&local_cc0);
                    /* catch() { ... } // from try @ 00476d48 with catch @ 00477808 */
    if ((undefined *)(local_cc0 + -0x18) != puVar5) {
      piVar8 = (int *)(local_cc0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar8;
        *piVar8 = iVar10 + -1;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 00476f70 with catch @ 004774f8 */
          iVar10 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* catch() { ... } // from try @ 00476ed8 with catch @ 004775a8 */
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_cc0 + -0x18));
      }
    }
                    /* catch() { ... } // from try @ 00476ce0 with catch @ 00477814 */
    if (pAVar12 == pAVar11) {
      pAVar6 = local_ca8;
      if (*(long *)(*(long *)(local_ca8 + 0x20) + -0x18) != 0) {
        pAVar6 = local_ca8 + 0x20;
      }
      FUN_0066a528(&local_cc0,pAVar6);
      lVar9 = *(long *)(this + 0x50);
      if (lVar9 == *(long *)(this + 0x58)) {
        std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x48),lVar9,&local_cc0
                  );
      }
      else {
        FUN_0066a528(lVar9,&local_cc0);
        *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
      }
                    /* catch() { ... } // from try @ 00476cb0 with catch @ 00477880 */
      if ((undefined *)(local_cc0 + -0x18) != puVar5) {
                    /* catch() { ... } // from try @ 00476e50 with catch @ 0047762c */
        piVar8 = (int *)(local_cc0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar8;
          *piVar8 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete((undefined *)(local_cc0 + -0x18));
        }
      }
    }
    pAVar6 = local_ca8;
    if (*(long *)(*(long *)(local_ca8 + 0x20) + -0x18) != 0) {
      pAVar6 = local_ca8 + 0x20;
    }
    FUN_0066a528(&local_5d0,pAVar6);
    FUN_0066a528(&local_cd8,&local_5d0);
    local_cd0 = local_ca8;
    local_cc8 = local_ca0;
    if (local_ca0 != (long *)0x0) {
      local_ca0[1] = local_ca0[1] + 1;
    }
    FUN_0066a528(&local_cc0,&local_cd8);
    local_cb8 = local_cd0;
    local_cb0 = local_cc8;
    if (local_cc8 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00476c88 with catch @ 004778e4 */
      local_cc8[1] = local_cc8[1] + 1;
    }
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
    ::_M_insert_equal((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                       *)(this + 0x60),(pair *)&local_cc0);
    plVar4 = local_cb0;
    if ((local_cb0 != (long *)0x0) &&
       (lVar9 = local_cb0[1], local_cb0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_cb0 + 0x10))(local_cb0);
      lVar9 = plVar4[2];
      plVar4[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
                    /* catch() { ... } // from try @ 00476c7c with catch @ 00477948 */
    plVar4 = local_cc8;
    if ((undefined *)(local_cc0 + -0x18) != puVar5) {
      piVar8 = (int *)(local_cc0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar8;
        *piVar8 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_cc0 + -0x18));
        plVar4 = local_cc8;
      }
    }
    local_cc8 = plVar4;
    if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar9 = plVar4[2];
      plVar4[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 00476c48 with catch @ 00477994 */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if ((undefined *)(local_cd8 + -0x18) != puVar5) {
                    /* catch() { ... } // from try @ 00476f64 with catch @ 00477538 */
      piVar8 = (int *)(local_cd8 + -8);
                    /* catch() { ... } // from try @ 00476f04 with catch @ 0047753c */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar8;
                    /* catch() { ... } // from try @ 00476ebc with catch @ 004775e8 */
        *piVar8 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_cd8 + -0x18));
      }
    }
    plVar4 = local_ca0;
    if ((undefined *)(local_5d0 + -0x18) != puVar5) {
      piVar8 = (int *)(local_5d0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar8;
        *piVar8 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_5d0 + -0x18));
        plVar4 = local_ca0;
      }
    }
    local_ca0 = plVar4;
    if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar9 = plVar4[2];
      plVar4[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 00476c3c with catch @ 004779f8 */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 0x1c);
  Achievement::~Achievement(aAStack_98);
  Achievement::~Achievement(aAStack_c8);
  Achievement::~Achievement(aAStack_f8);
  Achievement::~Achievement(aAStack_128);
  Achievement::~Achievement(aAStack_158);
                    /* catch() { ... } // from try @ 00476c2c with catch @ 00477a58 */
  Achievement::~Achievement(aAStack_188);
  Achievement::~Achievement(aAStack_1b8);
  Achievement::~Achievement(aAStack_1e8);
  Achievement::~Achievement(aAStack_218);
  Achievement::~Achievement(aAStack_248);
                    /* catch() { ... } // from try @ 00476c00 with catch @ 00477aa8 */
  Achievement::~Achievement(aAStack_278);
  Achievement::~Achievement(aAStack_2a8);
  Achievement::~Achievement(aAStack_2d8);
  Achievement::~Achievement(aAStack_308);
  Achievement::~Achievement(aAStack_338);
  Achievement::~Achievement(aAStack_368);
  Achievement::~Achievement(aAStack_398);
  Achievement::~Achievement(aAStack_3c8);
  Achievement::~Achievement(aAStack_3f8);
  Achievement::~Achievement(aAStack_428);
  Achievement::~Achievement(aAStack_458);
  Achievement::~Achievement(aAStack_488);
  Achievement::~Achievement(aAStack_4b8);
  Achievement::~Achievement(aAStack_4e8);
  Achievement::~Achievement(aAStack_518);
  Achievement::~Achievement(aAStack_548);
  Achievement::~Achievement(aAStack_578);
  Achievement::~Achievement(aAStack_5a8);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


