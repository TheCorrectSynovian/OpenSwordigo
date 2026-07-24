/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005608a4
 * Function: Caver::ObjectTemplate::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectTemplate::ValueForBindedProperty(int) */

void Caver::ObjectTemplate::ValueForBindedProperty(int param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  BindingValue *this;
  int iVar4;
  Program *in_x1;
  Program *extraout_x1;
  undefined4 *in_x8;
  long lVar5;
  undefined *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  this = (BindingValue *)(ulong)(uint)param_1;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = (int)in_x1;
                    /* try { // try from 005608c4 to 00660927 has its CatchHandler @ 005605b0 */
  if (iVar4 == 0x66) {
    lVar5 = *(long *)(this + 0x58);
    plVar1 = *(long **)(this + 0x60);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    if (lVar5 == 0) {
      local_48 = 0;
      local_40 = 0;
      local_50 = 0;
      local_60 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 005609a0 to 006609b3 has its CatchHandler @ 00560d74 */
      local_58 = 0;
      bVar3 = 0;
    }
    else {
      if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 005607e8 with catch @ 00560924
                       catch() { ... } // from try @ 0056089c with catch @ 00560924 */
        plVar1[1] = plVar1[1] + 1;
      }
                    /* try { // try from 00560928 to 00660953 has its CatchHandler @ 00560928
                       catch() { ... } // from try @ 00560928 with catch @ 00560928
                       catch() { ... } // from try @ 00560978 with catch @ 00560928
                       catch() { ... } // from try @ 00560aac with catch @ 00560928
                       catch() { ... } // from try @ 00560d14 with catch @ 00560928 */
      FUN_0066a528(&local_60,lVar5);
      local_58 = *(undefined8 *)(lVar5 + 8);
      local_50 = *(long *)(lVar5 + 0x10);
      if (local_50 != 0) {
        *(long *)(local_50 + 8) = *(long *)(local_50 + 8) + 1;
      }
                    /* try { // try from 00560954 to 00660967 has its CatchHandler @ 00560e40 */
      local_48 = *(undefined8 *)(lVar5 + 0x18);
      local_40 = *(long *)(lVar5 + 0x20);
      in_x1 = extraout_x1;
      if (local_40 == 0) {
        bVar3 = 1;
      }
      else {
                    /* try { // try from 0056096c to 00660977 has its CatchHandler @ 00560dd0 */
        bVar3 = 1;
        *(long *)(local_40 + 8) = *(long *)(local_40 + 8) + 1;
                    /* try { // try from 00560978 to 0066099f has its CatchHandler @ 00560928 */
      }
    }
    BindingValue::ValueWithProgram((BindingValue *)&local_60,in_x1);
    Program::~Program((Program *)&local_60);
                    /* try { // try from 005609d8 to 006609e3 has its CatchHandler @ 00560ccc */
    if (((plVar1 != (long *)0x0) && (!(bool)(bVar3 ^ 1))) &&
       (lVar5 = plVar1[1], plVar1[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar5 = plVar1[2];
      plVar1[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 00560a00 to 00660a27 has its CatchHandler @ 00560cc8 */
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    if ((plVar1 != (long *)0x0) && (lVar5 = plVar1[1], plVar1[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar5 = plVar1[2];
                    /* try { // try from 00560a34 to 00660a3b has its CatchHandler @ 00560c78 */
      plVar1[2] = lVar5 + -1;
                    /* try { // try from 00560a3c to 00660a47 has its CatchHandler @ 00560c14 */
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  else if (iVar4 == 0x65) {
    BindingValue::ValueWithFloat(this,*(float *)(this + 0x130));
  }
  else if (iVar4 == 100) {
    BindingValue::ValueWithString(this + 0x50,(string *)in_x1);
  }
  else {
    *in_x8 = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


