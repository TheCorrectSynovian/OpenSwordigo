/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4a84
 * Function: google::protobuf::io::CodedOutputStream::WriteLittleEndian32
 * Signature: undefined __thiscall WriteLittleEndian32(CodedOutputStream * this, uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::WriteLittleEndian32(unsigned int) */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteLittleEndian32(CodedOutputStream *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined1 *puVar8;
  void *local_58;
  undefined1 local_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 < 4) {
    puVar8 = local_4c;
  }
  else {
    puVar8 = *(undefined1 **)(this + 8);
  }
  *puVar8 = (char)param_1;
  puVar8[1] = (char)(param_1 >> 8);
  puVar8[2] = (char)(param_1 >> 0x10);
  puVar8[3] = (char)(param_1 >> 0x18);
  if (uVar1 < 4) {
    iVar5 = *(int *)(this + 0x10);
                    /* catch() { ... } // from try @ 005e4a18 with catch @ 005e4b04 */
    if (iVar5 < 4) {
      iVar7 = 4;
      puVar8 = local_4c;
      __dest = *(void **)(this + 8);
      do {
        memcpy(__dest,puVar8,(long)iVar5);
                    /* try { // try from 005e4b28 to 006e4b2f has its CatchHandler @ 005e4b34 */
        iVar2 = *(int *)(this + 0x10);
                    /* catch() { ... } // from try @ 005e4b28 with catch @ 005e4b34 */
                    /* catch() { ... } // from try @ 005e495c with catch @ 005e4b38
                       catch() { ... } // from try @ 005e4a48 with catch @ 005e4b38 */
        uVar4 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_58,this + 0x10);
        if ((uVar4 & 1) == 0) {
          *(undefined8 *)(this + 8) = 0;
          *(undefined4 *)(this + 0x10) = 0;
          this[0x18] = (CodedOutputStream)0x1;
          goto LAB_005e4b9c;
        }
        iVar5 = *(int *)(this + 0x10);
        iVar7 = iVar7 - iVar2;
        puVar8 = puVar8 + iVar2;
        *(void **)(this + 8) = local_58;
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + iVar5;
        __dest = local_58;
      } while (iVar5 < iVar7);
    }
    else {
      puVar8 = local_4c;
      iVar7 = 4;
      local_58 = *(void **)(this + 8);
    }
    memcpy(local_58,puVar8,(long)iVar7);
    lVar6 = *(long *)(this + 8) + (long)iVar7;
    iVar7 = *(int *)(this + 0x10) - iVar7;
  }
  else {
    lVar6 = *(long *)(this + 8) + 4;
    iVar7 = *(int *)(this + 0x10) + -4;
                    /* try { // try from 005e4afc to 006e4b27 has its CatchHandler @ 005e4378 */
  }
  *(long *)(this + 8) = lVar6;
  *(int *)(this + 0x10) = iVar7;
LAB_005e4b9c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


