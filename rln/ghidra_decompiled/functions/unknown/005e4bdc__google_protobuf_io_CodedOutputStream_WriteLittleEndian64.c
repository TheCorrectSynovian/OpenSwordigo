/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4bdc
 * Function: google::protobuf::io::CodedOutputStream::WriteLittleEndian64
 * Signature: undefined __thiscall WriteLittleEndian64(CodedOutputStream * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::WriteLittleEndian64(unsigned long) */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteLittleEndian64(CodedOutputStream *this,ulong param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  int iVar8;
  void *local_58;
  undefined1 local_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 < 8) {
    puVar6 = local_50;
  }
  else {
    puVar6 = *(undefined1 **)(this + 8);
  }
  puVar6[1] = (char)(param_1 >> 8);
  puVar6[2] = (char)(param_1 >> 0x10);
  puVar6[3] = (char)(param_1 >> 0x18);
  *puVar6 = (char)param_1;
  puVar6[4] = (char)(param_1 >> 0x20);
  puVar6[5] = (char)(param_1 >> 0x28);
  puVar6[6] = (char)(param_1 >> 0x30);
  puVar6[7] = (char)(param_1 >> 0x38);
  if (uVar1 < 8) {
    iVar5 = *(int *)(this + 0x10);
                    /* catch() { ... } // from try @ 005e4d50 with catch @ 005e4c7c
                       catch() { ... } // from try @ 005e4ea8 with catch @ 005e4c7c */
    if (iVar5 < 8) {
      iVar8 = 8;
      puVar6 = local_50;
      __dest = *(void **)(this + 8);
      do {
        memcpy(__dest,puVar6,(long)iVar5);
        iVar2 = *(int *)(this + 0x10);
        uVar4 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_58,this + 0x10);
        if ((uVar4 & 1) == 0) {
          *(undefined8 *)(this + 8) = 0;
          *(undefined4 *)(this + 0x10) = 0;
          this[0x18] = (CodedOutputStream)0x1;
          goto LAB_005e4d14;
        }
        iVar5 = *(int *)(this + 0x10);
        iVar8 = iVar8 - iVar2;
        puVar6 = puVar6 + iVar2;
                    /* try { // try from 005e4cd0 to 006e4cf7 has its CatchHandler @ 005e4de4 */
        *(void **)(this + 8) = local_58;
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + iVar5;
        __dest = local_58;
      } while (iVar5 < iVar8);
    }
    else {
      puVar6 = local_50;
      iVar8 = 8;
      local_58 = *(void **)(this + 8);
    }
    memcpy(local_58,puVar6,(long)iVar8);
                    /* try { // try from 005e4cfc to 006e4cff has its CatchHandler @ 005e4e04 */
                    /* try { // try from 005e4d04 to 006e4d07 has its CatchHandler @ 005e4df4 */
    lVar7 = *(long *)(this + 8) + (long)iVar8;
    iVar8 = *(int *)(this + 0x10) - iVar8;
  }
  else {
    lVar7 = *(long *)(this + 8) + 8;
    iVar8 = *(int *)(this + 0x10) + -8;
  }
  *(long *)(this + 8) = lVar7;
  *(int *)(this + 0x10) = iVar8;
LAB_005e4d14:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005e4d50 to 006e4deb has its CatchHandler @ 005e4c7c */
    __stack_chk_fail();
  }
                    /* try { // try from 005e4d28 to 006e4d4f has its CatchHandler @ 005e4ddc */
  return;
}


