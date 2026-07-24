/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c068
 * Function: google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>
 * Signature: bool __cdecl ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int param_1, uint param_2, CodedInputStream * param_3, RepeatedField * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* bool google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,
   (google::protobuf::internal::WireFormatLite::FieldType)15>(int, unsigned int,
   google::protobuf::io::CodedInputStream*, google::protobuf::RepeatedField<int>*) */

bool google::protobuf::internal::WireFormatLite::
     ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>
               (int param_1,uint param_2,CodedInputStream *param_3,RepeatedField *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  long lVar7;
  bool bVar8;
  ulong uVar9;
  void *__dest;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  RepeatedField *__src;
  int iVar13;
  uint local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar9 = io::CodedInputStream::ReadLittleEndian32Fallback(param_3,&local_6c);
  if ((uVar9 & 1) == 0) {
    bVar8 = false;
  }
  else {
    iVar13 = *(int *)(param_4 + 8);
    if (iVar13 == *(int *)(param_4 + 0xc)) {
      uVar4 = iVar13 * 2;
      if ((int)uVar4 < iVar13 + 1) {
        uVar4 = iVar13 + 1;
      }
      __src = *(RepeatedField **)param_4;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (long)(int)uVar4;
      *(uint *)(param_4 + 0xc) = uVar4;
      uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
      if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar9);
      *(void **)param_4 = __dest;
      memcpy(__dest,__src,(long)iVar13 << 2);
      if ((__src != param_4 + 0x10) && (__src != (RepeatedField *)0x0)) {
        operator_delete__(__src);
        iVar13 = *(int *)(param_4 + 8);
      }
    }
    lVar10 = *(long *)param_4;
    *(int *)(param_4 + 8) = iVar13 + 1;
    *(uint *)(lVar10 + (long)iVar13 * 4) = local_6c;
    pbVar11 = *(byte **)(param_3 + 8);
    iVar13 = *(int *)(param_3 + 0x10) - (int)pbVar11;
    if (0 < iVar13) {
      iVar1 = param_1 + 4;
      iVar5 = 0;
      if (iVar1 != 0) {
        iVar5 = iVar13 / iVar1;
      }
      if (*(int *)(param_4 + 0xc) - *(int *)(param_4 + 8) <= iVar5) {
        iVar5 = *(int *)(param_4 + 0xc) - *(int *)(param_4 + 8);
      }
      if (iVar5 < 1) {
        iVar13 = 0;
      }
      else {
        iVar13 = 0;
        do {
          if (param_2 < 0x80) {
            pbVar12 = pbVar11 + 1;
            if (*pbVar11 != param_2) break;
          }
          else {
                    /* try { // try from 0043c1b0 to 0053c203 has its CatchHandler @ 0043c1b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0043c1b0 with catch @ 0043c1b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0043c234 with catch @ 0043c1b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0043c2ac with catch @ 0043c1b0
                        */
            if (((param_2 >> 0xe != 0) || ((param_2 & 0x7f | 0x80) != (uint)*pbVar11)) ||
               ((uint)pbVar11[1] != (param_2 >> 7 & 0xff))) break;
            pbVar12 = pbVar11 + 2;
          }
          pbVar11 = pbVar12 + 4;
          uVar2 = *(undefined4 *)pbVar12;
          iVar3 = *(int *)(param_4 + 8);
          iVar13 = iVar13 + 1;
          *(int *)(param_4 + 8) = iVar3 + 1;
          *(undefined4 *)(lVar10 + (long)iVar3 * 4) = uVar2;
        } while (iVar13 < iVar5);
      }
      if (0 < iVar13 * iVar1) {
        io::CodedInputStream::Skip(param_3,iVar13 * iVar1);
      }
    }
    bVar8 = true;
  }
                    /* try { // try from 0043c204 to 0053c233 has its CatchHandler @ 0043c280 */
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}


