/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3e84
 * Function: google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback
 * Signature: undefined __thiscall ReadLittleEndian64Fallback(CodedInputStream * this, ulong * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(unsigned long*) */

void __thiscall
google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback
          (CodedInputStream *this,ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *__src;
  ulong *puVar4;
  ulong *puVar5;
  size_t __n;
  long lVar6;
  int iVar7;
  ulong local_60;
  long local_58;
  
  puVar5 = &local_60;
  puVar4 = &local_60;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __src = *(ulong **)(this + 8);
  lVar6 = *(long *)(this + 0x10) - (long)__src;
  if ((uint)lVar6 < 8) {
    iVar7 = 8;
    do {
      __n = (size_t)(int)lVar6;
                    /* catch() { ... } // from try @ 005e34c0 with catch @ 005e3ed8 */
      memcpy(puVar5,__src,__n);
      *(size_t *)(this + 8) = *(long *)(this + 8) + __n;
      uVar2 = Refresh(this);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        goto LAB_005e3f50;
      }
      __src = *(ulong **)(this + 8);
      iVar7 = iVar7 - (int)lVar6;
      puVar5 = (ulong *)((long)puVar5 + __n);
      lVar6 = *(long *)(this + 0x10) - (long)__src;
    } while ((int)lVar6 < iVar7);
    memcpy(puVar5,__src,(long)iVar7);
    puVar5 = (ulong *)(*(long *)(this + 8) + (long)iVar7);
  }
  else {
    puVar5 = __src + 1;
    puVar4 = __src;
  }
  *(ulong **)(this + 8) = puVar5;
  uVar3 = 1;
  *param_1 = *puVar4;
LAB_005e3f50:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


