/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2bc8
 * Function: google::protobuf::internal::WireFormatLite::ReadPackedEnumNoInline
 * Signature: undefined __cdecl ReadPackedEnumNoInline(CodedInputStream * param_1, _func_bool_int * param_2, RepeatedField * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::ReadPackedEnumNoInline(google::protobuf::io::CodedInputStream*,
   bool (*)(int), google::protobuf::RepeatedField<int>*) */

void google::protobuf::internal::WireFormatLite::ReadPackedEnumNoInline
               (CodedInputStream *param_1,_func_bool_int *param_2,RepeatedField *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  void *__dest;
  undefined8 uVar9;
  ulong uVar10;
  RepeatedField *__src;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar1 = *(byte **)(param_1 + 8);
  if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
    local_70 = (uint)*pbVar1;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
  }
  else {
    uVar10 = io::CodedInputStream::ReadVarint32Fallback(param_1,&local_70);
    if ((uVar10 & 1) == 0) {
LAB_005e2d44:
      uVar9 = 0;
      goto LAB_005e2d48;
    }
  }
  iVar7 = io::CodedInputStream::PushLimit(param_1,local_70);
                    /* try { // try from 005e2c4c to 006e2c57 has its CatchHandler @ 005e326c */
  iVar8 = io::CodedInputStream::BytesUntilLimit(param_1);
  if (0 < iVar8) {
    do {
      pbVar1 = *(byte **)(param_1 + 8);
      if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
        local_6c = (uint)*pbVar1;
        *(byte **)(param_1 + 8) = pbVar1 + 1;
      }
      else {
        uVar10 = io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
                    /* try { // try from 005e2c94 to 006e2cbb has its CatchHandler @ 005e3108 */
        if ((uVar10 & 1) == 0) goto LAB_005e2d44;
      }
      uVar5 = local_6c;
      bVar6 = (*param_2)(local_6c);
      if (bVar6) {
        iVar8 = *(int *)(param_3 + 8);
        if (iVar8 == *(int *)(param_3 + 0xc)) {
          uVar2 = iVar8 * 2;
          if ((int)uVar2 < iVar8 + 1) {
            uVar2 = iVar8 + 1;
          }
          __src = *(RepeatedField **)param_3;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (long)(int)uVar2;
          *(uint *)(param_3 + 0xc) = uVar2;
          uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
          if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
            uVar10 = 0xffffffffffffffff;
          }
                    /* try { // try from 005e2ce4 to 006e2cef has its CatchHandler @ 005e3248 */
          __dest = operator_new__(uVar10);
          *(void **)param_3 = __dest;
          memcpy(__dest,__src,(long)iVar8 << 2);
          if ((__src != param_3 + 0x10) && (__src != (RepeatedField *)0x0)) {
            operator_delete__(__src);
            iVar8 = *(int *)(param_3 + 8);
          }
        }
        *(int *)(param_3 + 8) = iVar8 + 1;
        *(uint *)(*(long *)param_3 + (long)iVar8 * 4) = uVar5;
      }
      iVar8 = io::CodedInputStream::BytesUntilLimit(param_1);
                    /* try { // try from 005e2d28 to 006e2d4f has its CatchHandler @ 005e3108 */
    } while (0 < iVar8);
  }
  io::CodedInputStream::PopLimit(param_1,iVar7);
  uVar9 = 1;
LAB_005e2d48:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
                    /* try { // try from 005e2d68 to 006e2d6f has its CatchHandler @ 005e325c */
                    /* try { // try from 005e2d70 to 006e2d83 has its CatchHandler @ 005e3244 */
  return;
}


