/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00575f6c
 * Function: Caver::SceneObjectGroup::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::ValueForBindedProperty(int) */

void Caver::SceneObjectGroup::ValueForBindedProperty(int param_1)

{
  long lVar1;
  ulong uVar2;
  BindingValue *this;
  Program *in_x1;
  Program *extraout_x1;
  undefined4 *in_x8;
  long lVar3;
  undefined *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
                    /* try { // try from 00575f6c to 00675f93 has its CatchHandler @ 00575f44 */
  uVar2 = (ulong)(uint)param_1;
                    /* catch() { ... } // from try @ 00575f68 with catch @ 00575f80 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00575f94 to 00676037 has its CatchHandler @ 00575f94
                       catch() { ... } // from try @ 00575f94 with catch @ 00575f94
                       catch() { ... } // from try @ 00577b98 with catch @ 00575f94
                       catch() { ... } // from try @ 0057ce1c with catch @ 00575f94 */
  switch((ulong)in_x1 & 0xffffffff) {
  case 0:
    BindingValue::ValueWithString((BindingValue *)(uVar2 + 0x20),(string *)in_x1);
    goto LAB_00576074;
  case 1:
    this = (BindingValue *)(ulong)*(byte *)(uVar2 + 0x48);
    break;
  case 2:
    this = (BindingValue *)(ulong)*(byte *)(uVar2 + 0x49);
    break;
  case 3:
    this = (BindingValue *)(ulong)*(byte *)(uVar2 + 0x4b);
    break;
  case 4:
    lVar3 = *(long *)(uVar2 + 0x28);
    if (lVar3 == 0) {
      local_48 = 0;
      local_40 = 0;
      local_50 = 0;
      local_60 = PTR_DAT_007e5de8 + 0x18;
      local_58 = 0;
    }
    else {
      FUN_0066a528(&local_60,lVar3);
      local_58 = *(undefined8 *)(lVar3 + 8);
      local_50 = *(long *)(lVar3 + 0x10);
      if (local_50 != 0) {
        *(long *)(local_50 + 8) = *(long *)(local_50 + 8) + 1;
      }
      local_48 = *(undefined8 *)(lVar3 + 0x18);
      local_40 = *(long *)(lVar3 + 0x20);
      in_x1 = extraout_x1;
      if (local_40 != 0) {
        *(long *)(local_40 + 8) = *(long *)(local_40 + 8) + 1;
      }
    }
    BindingValue::ValueWithProgram((BindingValue *)&local_60,in_x1);
    Program::~Program((Program *)&local_60);
    goto LAB_00576074;
  default:
                    /* try { // try from 00576038 to 00676043 has its CatchHandler @ 0057c648 */
    *in_x8 = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    goto LAB_00576074;
  }
  BindingValue::ValueWithBool(this,SUB81(in_x1,0));
LAB_00576074:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00576088 to 0067609f has its CatchHandler @ 0057c63c */
  return;
}


