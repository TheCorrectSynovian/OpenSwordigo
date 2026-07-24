/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036a67c
 * Function: Caver::MovementBehaviourForString
 * Signature: undefined __cdecl MovementBehaviourForString(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MovementBehaviourForString(std::string const&) */

undefined4 Caver::MovementBehaviourForString(string *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006689e0(param_1,&DAT_0068804e);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_006689e0(param_1,"follow");
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = FUN_006689e0(param_1,"fight");
      uVar2 = 3;
      if (iVar1 != 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


