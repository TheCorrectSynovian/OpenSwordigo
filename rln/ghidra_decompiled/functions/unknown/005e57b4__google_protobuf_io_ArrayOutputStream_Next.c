/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e57b4
 * Function: google::protobuf::io::ArrayOutputStream::Next
 * Signature: undefined __thiscall Next(ArrayOutputStream * this, void * * param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayOutputStream::Next(void**, int*) */

undefined8 __thiscall
google::protobuf::io::ArrayOutputStream::Next(ArrayOutputStream *this,void **param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 < *(int *)(this + 0x10)) {
    iVar2 = *(int *)(this + 0x10) - iVar1;
    if (*(int *)(this + 0x14) <= iVar2) {
      iVar2 = *(int *)(this + 0x14);
    }
    *(int *)(this + 0x1c) = iVar2;
    *param_1 = (void *)(*(long *)(this + 8) + (long)iVar1);
    *param_2 = iVar2;
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + *(int *)(this + 0x1c);
    return 1;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return 0;
}


