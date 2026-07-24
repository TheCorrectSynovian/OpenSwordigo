/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b250
 * Function: Caver::AndroidReportAchievementProgress
 * Signature: undefined __cdecl AndroidReportAchievementProgress(string * param_1, int param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidReportAchievementProgress(std::string const&, int, bool) */

void Caver::AndroidReportAchievementProgress(string *param_1,int param_2,bool param_3)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"reportAchievementProgress","(Ljava/lang/String;IZ)V"
                    );
  p_Var2 = DAT_007e9c68;
  p_Var1 = DAT_007e9c60;
  uVar4 = (**(code **)(*(long *)DAT_007e9c60 + 0x538))(DAT_007e9c60,*(undefined8 *)param_1);
  _JNIEnv::CallStaticVoidMethod(p_Var1,p_Var2,uVar3,uVar4,(ulong)(uint)param_2,(ulong)param_3);
  return;
}


