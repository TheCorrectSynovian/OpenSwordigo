/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00413aac
 * Function: google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>
 * Signature: bool __cdecl ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(CodedInputStream * param_1, RepeatedField * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* bool google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,
   (google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream*,
   google::protobuf::RepeatedField<int>*) */

bool google::protobuf::internal::WireFormatLite::
     ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>
               (CodedInputStream *param_1,RepeatedField *param_2)

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
  ulong uVar9;
  RepeatedField *__src;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 004139c4 with catch @ 00413ad8 */
  pbVar1 = *(byte **)(param_1 + 8);
  if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
    local_70 = (uint)*pbVar1;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
  }
  else {
    uVar9 = io::CodedInputStream::ReadVarint32Fallback(param_1,&local_70);
    if ((uVar9 & 1) == 0) {
LAB_00413c18:
      bVar6 = false;
      goto LAB_00413c1c;
    }
  }
  iVar7 = io::CodedInputStream::PushLimit(param_1,local_70);
  iVar8 = io::CodedInputStream::BytesUntilLimit(param_1);
  if (0 < iVar8) {
    do {
      pbVar1 = *(byte **)(param_1 + 8);
                    /* try { // try from 00413b48 to 00513b53 has its CatchHandler @ 00413b74 */
      if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
                    /* try { // try from 00413b54 to 00513b77 has its CatchHandler @ 0041394c */
        local_6c = (uint)*pbVar1;
        *(byte **)(param_1 + 8) = pbVar1 + 1;
      }
      else {
        uVar9 = io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
                    /* catch() { ... } // from try @ 00413b48 with catch @ 00413b74 */
        if ((uVar9 & 1) == 0) goto LAB_00413c18;
      }
      uVar5 = local_6c;
      iVar8 = *(int *)(param_2 + 8);
      if (iVar8 == *(int *)(param_2 + 0xc)) {
        uVar2 = iVar8 * 2;
        if ((int)uVar2 < iVar8 + 1) {
          uVar2 = iVar8 + 1;
        }
        __src = *(RepeatedField **)param_2;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (long)(int)uVar2;
        *(uint *)(param_2 + 0xc) = uVar2;
        uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
        if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
          uVar9 = 0xffffffffffffffff;
        }
                    /* try { // try from 00413bb4 to 00513bb7 has its CatchHandler @ 00413ccc */
        __dest = operator_new__(uVar9);
        *(void **)param_2 = __dest;
        memcpy(__dest,__src,(long)iVar8 << 2);
        if ((__src != param_2 + 0x10) && (__src != (RepeatedField *)0x0)) {
                    /* try { // try from 00413bd8 to 00513bff has its CatchHandler @ 00413cac */
          operator_delete__(__src);
          iVar8 = *(int *)(param_2 + 8);
        }
      }
      *(int *)(param_2 + 8) = iVar8 + 1;
      *(uint *)(*(long *)param_2 + (long)iVar8 * 4) = uVar5;
      iVar8 = io::CodedInputStream::BytesUntilLimit(param_1);
    } while (0 < iVar8);
  }
                    /* try { // try from 00413c04 to 00513c07 has its CatchHandler @ 00413cc4 */
                    /* try { // try from 00413c0c to 00513c0f has its CatchHandler @ 00413cbc */
  io::CodedInputStream::PopLimit(param_1,iVar7);
  bVar6 = true;
                    /* try { // try from 00413c14 to 00513c17 has its CatchHandler @ 00413cb4 */
LAB_00413c1c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


