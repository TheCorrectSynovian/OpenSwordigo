/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3f80
 * Function: google::protobuf::io::CodedInputStream::ReadVarint32Slow
 * Signature: undefined __thiscall ReadVarint32Slow(CodedInputStream * this, uint * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadVarint32Slow(unsigned int*) */

void __thiscall
google::protobuf::io::CodedInputStream::ReadVarint32Slow(CodedInputStream *this,uint *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint local_30 [2];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = ReadVarint64Fallback(this,(ulong *)local_30);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
                    /* try { // try from 005e3fac to 006e4017 has its CatchHandler @ 005e3fac
                       catch() { ... } // from try @ 005e3fac with catch @ 005e3fac
                       catch() { ... } // from try @ 005e4084 with catch @ 005e3fac */
    *param_1 = local_30[0];
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


