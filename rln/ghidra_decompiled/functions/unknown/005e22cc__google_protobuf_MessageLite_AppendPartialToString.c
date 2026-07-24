/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e22cc
 * Function: google::protobuf::MessageLite::AppendPartialToString
 * Signature: undefined __thiscall AppendPartialToString(MessageLite * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::AppendPartialToString(std::string*) const */

undefined8 __thiscall
google::protobuf::MessageLite::AppendPartialToString(MessageLite *this,string *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  
                    /* try { // try from 005e22e4 to 006e22ef has its CatchHandler @ 005e24c0 */
  uVar7 = *(undefined8 *)(*(long *)param_1 + -0x18);
                    /* try { // try from 005e22f0 to 006e236f has its CatchHandler @ 005e1ec0 */
  iVar1 = (**(code **)(*(long *)this + 0x48))();
  iVar6 = (int)uVar7;
  FUN_00669650(param_1,(long)(iVar1 + iVar6),0);
  lVar4 = *(long *)param_1;
  if (*(long *)(lVar4 + -0x18) == 0) {
    lVar4 = 0;
  }
  else if (-1 < *(int *)(lVar4 + -8)) {
    FUN_00668ea8(param_1);
    lVar4 = *(long *)param_1;
  }
  lVar4 = lVar4 + iVar6;
  lVar3 = (**(code **)(*(long *)this + 0x58))(this,lVar4);
  uVar5 = lVar3 - lVar4;
  if (uVar5 != (long)iVar1) {
    uVar2 = (**(code **)(*(long *)this + 0x48))(this);
                    /* try { // try from 005e2370 to 006e2377 has its CatchHandler @ 005e237c */
                    /* try { // try from 005e2378 to 006e23bf has its CatchHandler @ 005e1ec0 */
    FUN_005e2050(iVar1,uVar2,uVar5 & 0xffffffff);
  }
                    /* catch() { ... } // from try @ 005e2370 with catch @ 005e237c */
  return 1;
}


