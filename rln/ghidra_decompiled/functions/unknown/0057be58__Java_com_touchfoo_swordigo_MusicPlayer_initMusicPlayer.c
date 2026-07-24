/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057be58
 * Function: Java_com_touchfoo_swordigo_MusicPlayer_initMusicPlayer
 * Signature: undefined Java_com_touchfoo_swordigo_MusicPlayer_initMusicPlayer(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_MusicPlayer_initMusicPlayer(long *param_1,undefined8 param_2)

{
  DAT_007e9cc0 = param_1;
  DAT_007e9cc8 = (**(code **)(*param_1 + 0xa8))();
  DAT_007e9cd0 = (**(code **)(*param_1 + 0xf8))(param_1,param_2);
  DAT_007e9cd8 = (**(code **)(*DAT_007e9cc0 + 0x108))
                           (DAT_007e9cc0,DAT_007e9cd0,"loadFile","(Ljava/lang/String;)Z");
  DAT_007e9ce0 = (**(code **)(*DAT_007e9cc0 + 0x108))
                           (DAT_007e9cc0,DAT_007e9cd0,&DAT_00696554,&DAT_0069604e);
  DAT_007e9ce8 = (**(code **)(*DAT_007e9cc0 + 0x108))
                           (DAT_007e9cc0,DAT_007e9cd0,"pause",&DAT_0069604e);
  DAT_007e9cf0 = (**(code **)(*DAT_007e9cc0 + 0x108))
                           (DAT_007e9cc0,DAT_007e9cd0,0x696559,&DAT_0069604e);
  DAT_007e9cf8 = (**(code **)(*DAT_007e9cc0 + 0x108))
                           (DAT_007e9cc0,DAT_007e9cd0,0x69655e,&DAT_0069617a);
  DAT_007e9d00 = (**(code **)(*DAT_007e9cc0 + 0x108))
                           (DAT_007e9cc0,DAT_007e9cd0,"setVolume",&DAT_00696573);
  return;
}


