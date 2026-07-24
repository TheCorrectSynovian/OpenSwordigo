/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3d88
 * Function: google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
 * Signature: undefined __thiscall ReadLittleEndian32Fallback(CodedInputStream * this, uint * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(unsigned int*) */

void __thiscall
google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
          (CodedInputStream *this,uint *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *__src;
  uint *puVar4;
  size_t __n;
  long lVar5;
  int iVar6;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __src = *(uint **)(this + 8);
  lVar5 = *(long *)(this + 0x10) - (long)__src;
  if ((uint)lVar5 < 4) {
    iVar6 = 4;
    puVar4 = &local_5c;
    do {
                    /* catch() { ... } // from try @ 005e3578 with catch @ 005e3dd8 */
      __n = (size_t)(int)lVar5;
      memcpy(puVar4,__src,__n);
      *(size_t *)(this + 8) = *(long *)(this + 8) + __n;
                    /* try { // try from 005e3dfc to 006e3e23 has its CatchHandler @ 005e3e28 */
      uVar2 = Refresh(this);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        goto LAB_005e3e54;
      }
      __src = *(uint **)(this + 8);
      iVar6 = iVar6 - (int)lVar5;
      puVar4 = (uint *)((long)puVar4 + __n);
      lVar5 = *(long *)(this + 0x10) - (long)__src;
    } while ((int)lVar5 < iVar6);
                    /* try { // try from 005e3e24 to 006e3ee3 has its CatchHandler @ 005e3474 */
                    /* catch() { ... } // from try @ 005e3b68 with catch @ 005e3e28
                       catch() { ... } // from try @ 005e3dfc with catch @ 005e3e28 */
                    /* catch() { ... } // from try @ 005e3608 with catch @ 005e3e2c */
    memcpy(puVar4,__src,(long)iVar6);
    puVar4 = (uint *)(*(long *)(this + 8) + (long)iVar6);
    __src = &local_5c;
  }
  else {
    puVar4 = __src + 1;
  }
  *(uint **)(this + 8) = puVar4;
  uVar3 = 1;
  *param_1 = *__src;
LAB_005e3e54:
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 005e35f0 with catch @ 005e3e64 */
                    /* catch() { ... } // from try @ 005e34d8 with catch @ 005e3e68 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


