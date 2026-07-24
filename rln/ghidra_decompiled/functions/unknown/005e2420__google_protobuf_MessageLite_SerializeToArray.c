/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2420
 * Function: google::protobuf::MessageLite::SerializeToArray
 * Signature: undefined __thiscall SerializeToArray(MessageLite * this, void * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializeToArray(void*, int) const */

undefined8 __thiscall
google::protobuf::MessageLite::SerializeToArray(MessageLite *this,void *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 005e2438 to 006e24af has its CatchHandler @ 005e2670 */
  iVar1 = (**(code **)(*(long *)this + 0x48))();
  if (param_2 < iVar1) {
    uVar3 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 005e1f7c with catch @ 005e2464 */
    lVar4 = (**(code **)(*(long *)this + 0x58))(this,param_1);
    if (lVar4 - (long)param_1 != (long)iVar1) {
      uVar2 = (**(code **)(*(long *)this + 0x48))(this);
      FUN_005e2050(iVar1,uVar2,lVar4 - (long)param_1 & 0xffffffff);
    }
    uVar3 = 1;
  }
  return uVar3;
}


