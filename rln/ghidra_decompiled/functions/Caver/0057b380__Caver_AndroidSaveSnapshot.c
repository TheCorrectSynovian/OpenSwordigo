/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b380
 * Function: Caver::AndroidSaveSnapshot
 * Signature: undefined __cdecl AndroidSaveSnapshot(string * param_1, string * param_2, string * param_3, longlong param_4, longlong param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidSaveSnapshot(std::string const&, std::string const&, std::string const&, long long,
   long long) */

void Caver::AndroidSaveSnapshot
               (string *param_1,string *param_2,string *param_3,longlong param_4,longlong param_5)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"saveSnapshot",
                     "(Ljava/lang/String;[BLjava/lang/String;JJ)V");
  uVar4 = (**(code **)(*(long *)DAT_007e9c60 + 0x580))
                    (DAT_007e9c60,*(undefined4 *)(*(long *)param_2 + -0x18));
  (**(code **)(*(long *)DAT_007e9c60 + 0x680))
            (DAT_007e9c60,uVar4,0,*(undefined4 *)(*(long *)param_2 + -0x18));
  p_Var2 = DAT_007e9c68;
  p_Var1 = DAT_007e9c60;
  uVar5 = (**(code **)(*(long *)DAT_007e9c60 + 0x538))(DAT_007e9c60,*(undefined8 *)param_1);
  uVar6 = (**(code **)(*(long *)DAT_007e9c60 + 0x538))(DAT_007e9c60,*(undefined8 *)param_3);
  _JNIEnv::CallStaticVoidMethod(p_Var1,p_Var2,uVar3,uVar5,uVar4,uVar6,param_4,param_5);
  return;
}


