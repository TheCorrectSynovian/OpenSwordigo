/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e38c4
 * Function: google::protobuf::io::CodedInputStream::GetDirectBufferPointer
 * Signature: undefined __thiscall GetDirectBufferPointer(CodedInputStream * this, void * * param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::GetDirectBufferPointer(void const**, int*) */

undefined8 __thiscall
google::protobuf::io::CodedInputStream::GetDirectBufferPointer
          (CodedInputStream *this,void **param_1,int *param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 8);
  if (*(int *)(this + 0x10) == (int)pvVar2) {
    uVar1 = Refresh(this);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    pvVar2 = *(void **)(this + 8);
  }
  *param_1 = pvVar2;
                    /* try { // try from 005e390c to 006e3933 has its CatchHandler @ 005e3b44 */
  *param_2 = *(int *)(this + 0x10) - *(int *)(this + 8);
  return 1;
}


