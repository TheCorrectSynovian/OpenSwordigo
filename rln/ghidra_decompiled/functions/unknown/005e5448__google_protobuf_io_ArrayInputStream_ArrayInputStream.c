/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5448
 * Function: google::protobuf::io::ArrayInputStream::ArrayInputStream
 * Signature: undefined __thiscall ArrayInputStream(ArrayInputStream * this, void * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayInputStream::ArrayInputStream(void const*, int, int) */

void __thiscall
google::protobuf::io::ArrayInputStream::ArrayInputStream
          (ArrayInputStream *this,void *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5b80;
  if (param_3 < 1) {
    param_3 = param_2;
  }
  *(int *)(this + 0x10) = param_2;
  *(int *)(this + 0x14) = param_3;
                    /* try { // try from 005e545c to 006e545f has its CatchHandler @ 005e5f00 */
  *(undefined **)this = puVar1 + 0x10;
  *(void **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


