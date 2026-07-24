/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041d6e0
 * Function: google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>
 * Signature: bool __cdecl ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(CodedInputStream * param_1, RepeatedField * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* bool google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,
   (google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream*,
   google::protobuf::RepeatedField<float>*) */

bool google::protobuf::internal::WireFormatLite::
     ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>
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
  ulong uVar9;
  void *__dest;
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
    uVar9 = io::CodedInputStream::ReadVarint32Fallback(param_1,&local_70);
    if ((uVar9 & 1) == 0) {
LAB_0041d824:
      bVar6 = false;
      goto LAB_0041d828;
    }
  }
  iVar7 = io::CodedInputStream::PushLimit(param_1,local_70);
  iVar8 = io::CodedInputStream::BytesUntilLimit(param_1);
  if (0 < iVar8) {
    do {
                    /* try { // try from 0041d77c to 0051d7e7 has its CatchHandler @ 0041d77c
                       catch(type#1 @ 00000000) { ... } // from try @ 0041d77c with catch @ 0041d77c
                       catch(type#1 @ 00000000) { ... } // from try @ 0041d7f8 with catch @ 0041d77c
                       catch(type#1 @ 00000000) { ... } // from try @ 0041d870 with catch @ 0041d77c
                        */
      uVar9 = io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_6c);
      uVar5 = local_6c;
      if ((uVar9 & 1) == 0) goto LAB_0041d824;
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
        __dest = operator_new__(uVar9);
        *(void **)param_2 = __dest;
        memcpy(__dest,__src,(long)iVar8 << 2);
        if ((__src != param_2 + 0x10) && (__src != (RepeatedField *)0x0)) {
                    /* try { // try from 0041d7e8 to 0051d7f7 has its CatchHandler @ 0041d844 */
          operator_delete__(__src);
          iVar8 = *(int *)(param_2 + 8);
        }
      }
                    /* try { // try from 0041d7f8 to 0051d867 has its CatchHandler @ 0041d77c */
      *(int *)(param_2 + 8) = iVar8 + 1;
      *(uint *)(*(long *)param_2 + (long)iVar8 * 4) = uVar5;
      iVar8 = io::CodedInputStream::BytesUntilLimit(param_1);
    } while (0 < iVar8);
  }
  io::CodedInputStream::PopLimit(param_1,iVar7);
  bVar6 = true;
LAB_0041d828:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041d7e8 with catch @ 0041d844
                        */
  return bVar6;
}


