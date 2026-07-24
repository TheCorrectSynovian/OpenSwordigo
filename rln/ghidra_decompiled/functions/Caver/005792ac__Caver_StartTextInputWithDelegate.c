/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005792ac
 * Function: Caver::StartTextInputWithDelegate
 * Signature: undefined __cdecl StartTextInputWithDelegate(ITextInputDelegate * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate*, std::string const&) */

void Caver::StartTextInputWithDelegate(ITextInputDelegate *param_1,string *param_2)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  DAT_007e9cb0 = param_1;
  uVar3 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"startTextInput","(Ljava/lang/String;)V");
  p_Var2 = DAT_007e9c68;
  p_Var1 = DAT_007e9c60;
  uVar4 = (**(code **)(*(long *)DAT_007e9c60 + 0x538))(DAT_007e9c60,*(undefined8 *)param_2);
  _JNIEnv::CallStaticVoidMethod(p_Var1,p_Var2,uVar3,uVar4);
  return;
}


