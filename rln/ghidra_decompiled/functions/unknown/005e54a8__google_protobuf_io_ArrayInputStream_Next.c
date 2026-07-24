/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e54a8
 * Function: google::protobuf::io::ArrayInputStream::Next
 * Signature: undefined __thiscall Next(ArrayInputStream * this, void * * param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayInputStream::Next(void const**, int*) */

undefined8 __thiscall
google::protobuf::io::ArrayInputStream::Next(ArrayInputStream *this,void **param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x18);
                    /* try { // try from 005e54b0 to 006e54d7 has its CatchHandler @ 005e59b8 */
  if (iVar1 < *(int *)(this + 0x10)) {
    iVar2 = *(int *)(this + 0x10) - iVar1;
    if (*(int *)(this + 0x14) <= iVar2) {
      iVar2 = *(int *)(this + 0x14);
    }
    *(int *)(this + 0x1c) = iVar2;
    *param_1 = (void *)(*(long *)(this + 8) + (long)iVar1);
    *param_2 = iVar2;
                    /* try { // try from 005e54dc to 006e54ef has its CatchHandler @ 005e5b2c */
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + *(int *)(this + 0x1c);
                    /* try { // try from 005e54f0 to 006e54fb has its CatchHandler @ 005e5ad4 */
    return 1;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return 0;
}


