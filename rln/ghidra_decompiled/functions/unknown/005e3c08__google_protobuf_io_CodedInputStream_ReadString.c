/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3c08
 * Function: google::protobuf::io::CodedInputStream::ReadString
 * Signature: undefined __thiscall ReadString(CodedInputStream * this, string * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadString(std::string*, int) */

undefined8 __thiscall
google::protobuf::io::CodedInputStream::ReadString
          (CodedInputStream *this,string *param_1,int param_2)

{
  undefined8 uVar1;
  void *__dest;
  size_t __n;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 005e3774 with catch @ 005e3c34 */
    if (*(int *)(this + 0x10) - *(int *)(this + 8) < param_2) {
      uVar1 = ReadStringFallback(this,param_1,param_2);
      return uVar1;
    }
    __n = (size_t)param_2;
    FUN_00669650(param_1,__n,0);
    __dest = *(void **)param_1;
    if (*(long *)((long)__dest + -0x18) == 0) {
      __dest = (void *)0x0;
    }
    else if (-1 < *(int *)((long)__dest + -8)) {
                    /* try { // try from 005e3c80 to 006e3dfb has its CatchHandler @ 005e3474 */
                    /* catch() { ... } // from try @ 005e39f8 with catch @ 005e3c84 */
      FUN_00668ea8(param_1);
      __dest = *(void **)param_1;
    }
    memcpy(__dest,*(void **)(this + 8),__n);
    uVar1 = 1;
    *(size_t *)(this + 8) = *(long *)(this + 8) + __n;
  }
                    /* catch() { ... } // from try @ 005e39e0 with catch @ 005e3cbc */
  return uVar1;
}


