/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3b54
 * Function: google::protobuf::io::CodedInputStream::ReadRaw
 * Signature: undefined __thiscall ReadRaw(CodedInputStream * this, void * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadRaw(void*, int) */

undefined8 __thiscall
google::protobuf::io::CodedInputStream::ReadRaw(CodedInputStream *this,void *param_1,int param_2)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  long lVar2;
  
                    /* try { // try from 005e3b68 to 006e3c7f has its CatchHandler @ 005e3e28 */
  __src = *(void **)(this + 8);
  lVar2 = *(long *)(this + 0x10) - (long)__src;
  if ((int)lVar2 < param_2) {
    do {
      __n = (size_t)(int)lVar2;
                    /* catch() { ... } // from try @ 005e388c with catch @ 005e3b94 */
      memcpy(param_1,__src,__n);
      *(size_t *)(this + 8) = *(long *)(this + 8) + __n;
      uVar1 = Refresh(this);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      __src = *(void **)(this + 8);
      param_2 = param_2 - (int)lVar2;
      param_1 = (void *)((long)param_1 + __n);
      lVar2 = *(long *)(this + 0x10) - (long)__src;
    } while ((int)lVar2 < param_2);
  }
  memcpy(param_1,__src,(long)param_2);
                    /* catch() { ... } // from try @ 005e3800 with catch @ 005e3be4 */
  *(long *)(this + 8) = *(long *)(this + 8) + (long)param_2;
  return 1;
}


