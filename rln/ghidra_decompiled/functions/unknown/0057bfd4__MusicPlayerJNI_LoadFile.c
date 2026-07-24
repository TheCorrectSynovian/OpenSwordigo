/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057bfd4
 * Function: MusicPlayerJNI::LoadFile
 * Signature: undefined __cdecl LoadFile(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* MusicPlayerJNI::LoadFile(std::string const&) */

bool MusicPlayerJNI::LoadFile(string *param_1)

{
  _jobject *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  
  uVar3 = DAT_007e9cd8;
  p_Var2 = DAT_007e9cc8;
  p_Var1 = DAT_007e9cc0;
  if (DAT_007e9cc8 == (_jmethodID *)0x0) {
    bVar4 = false;
  }
  else {
    uVar6 = (**(code **)(*(long *)DAT_007e9cc0 + 0x538))(DAT_007e9cc0,*(undefined8 *)param_1);
    cVar5 = _JNIEnv::CallBooleanMethod(p_Var1,p_Var2,uVar3,uVar6);
    bVar4 = cVar5 != '\0';
  }
  return bVar4;
}


