/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e24b0
 * Function: google::protobuf::MessageLite::SerializePartialToArray
 * Signature: undefined __thiscall SerializePartialToArray(MessageLite * this, void * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializePartialToArray(void*, int) const */

undefined8 __thiscall
google::protobuf::MessageLite::SerializePartialToArray(MessageLite *this,void *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 005e24b0 to 006e24fb has its CatchHandler @ 005e1ec0 */
                    /* catch() { ... } // from try @ 005e22bc with catch @ 005e24b4 */
                    /* catch() { ... } // from try @ 005e227c with catch @ 005e24b8 */
                    /* catch() { ... } // from try @ 005e22e4 with catch @ 005e24c0 */
                    /* catch() { ... } // from try @ 005e1efc with catch @ 005e24c4 */
  iVar1 = (**(code **)(*(long *)this + 0x48))();
                    /* catch() { ... } // from try @ 005e21c8 with catch @ 005e24d8 */
  if (param_2 < iVar1) {
    uVar3 = 0;
  }
  else {
                    /* try { // try from 005e24fc to 006e2507 has its CatchHandler @ 005e25e4 */
    lVar4 = (**(code **)(*(long *)this + 0x58))(this,param_1);
    if (lVar4 - (long)param_1 != (long)iVar1) {
      uVar2 = (**(code **)(*(long *)this + 0x48))(this);
      FUN_005e2050(iVar1,uVar2,lVar4 - (long)param_1 & 0xffffffff);
    }
                    /* try { // try from 005e252c to 006e25df has its CatchHandler @ 005e2670 */
    uVar3 = 1;
  }
  return uVar3;
}


