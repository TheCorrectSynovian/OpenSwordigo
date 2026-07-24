/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4950
 * Function: google::protobuf::io::CodedOutputStream::WriteRaw
 * Signature: undefined __thiscall WriteRaw(CodedOutputStream * this, void * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::WriteRaw(void const*, int) */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteRaw(CodedOutputStream *this,void *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  void *local_50;
  long local_48;
  
                    /* try { // try from 005e495c to 006e49d3 has its CatchHandler @ 005e4b38 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar5 = *(int *)(this + 0x10);
                    /* catch() { ... } // from try @ 005e44dc with catch @ 005e4988 */
  pvVar3 = *(void **)(this + 8);
  if (iVar5 < param_2) {
    do {
      memcpy(pvVar3,param_1,(long)iVar5);
      iVar1 = *(int *)(this + 0x10);
      uVar4 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_50,this + 0x10);
      if ((uVar4 & 1) == 0) {
        *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 005e4a18 to 006e4a23 has its CatchHandler @ 005e4b04 */
        *(undefined4 *)(this + 0x10) = 0;
        this[0x18] = (CodedOutputStream)0x1;
        goto LAB_005e4a20;
      }
      iVar5 = *(int *)(this + 0x10);
      param_2 = param_2 - iVar1;
      param_1 = (void *)((long)param_1 + (long)iVar1);
                    /* try { // try from 005e49d4 to 006e4a17 has its CatchHandler @ 005e4378 */
                    /* catch() { ... } // from try @ 005e47d0 with catch @ 005e49d8 */
      *(void **)(this + 8) = local_50;
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + iVar5;
                    /* catch() { ... } // from try @ 005e43f4 with catch @ 005e49e0 */
      pvVar3 = local_50;
    } while (iVar5 < param_2);
  }
  memcpy(pvVar3,param_1,(long)param_2);
                    /* catch() { ... } // from try @ 005e471c with catch @ 005e49f4 */
  *(long *)(this + 8) = *(long *)(this + 8) + (long)param_2;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) - param_2;
LAB_005e4a20:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005e4a48 to 006e4afb has its CatchHandler @ 005e4b38 */
  __stack_chk_fail();
}


