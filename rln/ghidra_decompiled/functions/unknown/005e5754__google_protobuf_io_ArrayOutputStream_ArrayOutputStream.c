/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5754
 * Function: google::protobuf::io::ArrayOutputStream::ArrayOutputStream
 * Signature: undefined __thiscall ArrayOutputStream(ArrayOutputStream * this, void * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayOutputStream::ArrayOutputStream(void*, int, int) */

void __thiscall
google::protobuf::io::ArrayOutputStream::ArrayOutputStream
          (ArrayOutputStream *this,void *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6ca0;
                    /* try { // try from 005e575c to 006e575f has its CatchHandler @ 005e5d20 */
  if (param_3 < 1) {
    param_3 = param_2;
  }
  *(int *)(this + 0x10) = param_2;
  *(int *)(this + 0x14) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(void **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


