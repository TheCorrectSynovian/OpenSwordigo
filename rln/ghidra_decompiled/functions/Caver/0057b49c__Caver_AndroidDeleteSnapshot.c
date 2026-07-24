/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b49c
 * Function: Caver::AndroidDeleteSnapshot
 * Signature: undefined __cdecl AndroidDeleteSnapshot(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidDeleteSnapshot(std::string const&) */

void Caver::AndroidDeleteSnapshot(string *param_1)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"deleteSnapshot","(Ljava/lang/String;)V");
  p_Var2 = DAT_007e9c68;
  p_Var1 = DAT_007e9c60;
  uVar4 = (**(code **)(*(long *)DAT_007e9c60 + 0x538))(DAT_007e9c60,*(undefined8 *)param_1);
  _JNIEnv::CallStaticVoidMethod(p_Var1,p_Var2,uVar3,uVar4);
  return;
}


