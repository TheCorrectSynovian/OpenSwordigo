/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057a528
 * Function: Caver::AndroidCheckPromotion
 * Signature: undefined __cdecl AndroidCheckPromotion(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidCheckPromotion(std::string const&) */

bool Caver::AndroidCheckPromotion(string *param_1)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 0057a548 to 0067a54f has its CatchHandler @ 0057c684 */
  uVar4 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"checkPromotion","(Ljava/lang/String;)Z");
  p_Var2 = DAT_007e9c68;
  p_Var1 = DAT_007e9c60;
  uVar5 = (**(code **)(*(long *)DAT_007e9c60 + 0x538))(DAT_007e9c60,*(undefined8 *)param_1);
  cVar3 = _JNIEnv::CallStaticBooleanMethod(p_Var1,p_Var2,uVar4,uVar5);
  return cVar3 != '\0';
}


