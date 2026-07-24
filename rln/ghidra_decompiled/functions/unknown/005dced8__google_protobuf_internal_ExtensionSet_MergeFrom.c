/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dced8
 * Function: google::protobuf::internal::ExtensionSet::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ExtensionSet * this, ExtensionSet * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet
   const&) */

void __thiscall
google::protobuf::internal::ExtensionSet::MergeFrom(ExtensionSet *this,ExtensionSet *param_1)

{
  ExtensionSet *pEVar1;
  uint uVar2;
  ExtensionSet EVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  bool bVar9;
  long lVar10;
  ExtensionSet *pEVar11;
  ExtensionSet *pEVar12;
  void *pvVar13;
  long *plVar14;
  long *plVar15;
  RepeatedPtrField<std::string> *this_00;
  void *__src;
  size_t __n;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  ExtensionSet *pEVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  ExtensionSet *pEVar23;
  long *plVar24;
  bool bVar25;
  int iVar26;
  RepeatedPtrFieldBase *this_01;
  int iVar27;
  undefined8 uVar28;
  ulong uVar29;
  int iVar30;
  uint uStack_9c;
  
  lVar10 = DAT_0068b470;
  lVar8 = tpidr_el0;
  lVar16 = *(long *)(lVar8 + 0x28);
  pEVar19 = *(ExtensionSet **)(param_1 + 0x18);
  if (pEVar19 != param_1 + 8) {
    pEVar1 = this + 8;
    do {
      if (pEVar19[0x31] == (ExtensionSet)0x0) {
        if (pEVar19[0x32] == (ExtensionSet)0x0) {
          EVar3 = pEVar19[0x30];
          switch(*(undefined4 *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)EVar3 * 4)) {
          case 1:
            SetInt32(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,*(int *)(pEVar19 + 0x28),
                     *(FieldDescriptor **)(pEVar19 + 0x38));
            break;
          case 2:
                    /* catch() { ... } // from try @ 005dcc28 with catch @ 005dcfc4 */
                    /* catch() { ... } // from try @ 005dcc98 with catch @ 005dcfd0 */
            SetInt64(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,*(long *)(pEVar19 + 0x28),
                     *(FieldDescriptor **)(pEVar19 + 0x38));
            break;
          case 3:
            SetUInt32(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,*(uint *)(pEVar19 + 0x28),
                      *(FieldDescriptor **)(pEVar19 + 0x38));
            break;
          case 4:
                    /* catch() { ... } // from try @ 005dcd7c with catch @ 005dcfb8 */
            SetUInt64(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,*(ulong *)(pEVar19 + 0x28),
                      *(FieldDescriptor **)(pEVar19 + 0x38));
            break;
          case 5:
            SetDouble(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,*(double *)(pEVar19 + 0x28),
                      *(FieldDescriptor **)(pEVar19 + 0x38));
            break;
          case 6:
                    /* try { // try from 005dcff0 to 006dd017 has its CatchHandler @ 005dd020 */
            SetFloat(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,*(float *)(pEVar19 + 0x28),
                     *(FieldDescriptor **)(pEVar19 + 0x38));
            break;
          case 7:
                    /* try { // try from 005dd018 to 006dd023 has its CatchHandler @ 005dcac0 */
            SetBool(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,(bool)pEVar19[0x28],
                    *(FieldDescriptor **)(pEVar19 + 0x38));
            break;
          case 8:
            SetEnum(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,*(int *)(pEVar19 + 0x28),
                    *(FieldDescriptor **)(pEVar19 + 0x38));
            break;
          case 9:
                    /* catch() { ... } // from try @ 005dcff0 with catch @ 005dd020 */
                    /* try { // try from 005dd024 to 006dd133 has its CatchHandler @ 005dd024
                       catch() { ... } // from try @ 005dd024 with catch @ 005dd024
                       catch() { ... } // from try @ 005dd238 with catch @ 005dd024
                       catch() { ... } // from try @ 005dd418 with catch @ 005dd024 */
            uVar22 = *(undefined8 *)(pEVar19 + 0x28);
            uVar28 = MutableString(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,
                                   *(FieldDescriptor **)(pEVar19 + 0x38));
            FUN_0066a6a8(uVar28,uVar22);
            break;
          case 10:
            plVar14 = (long *)MutableMessage(this,*(int *)(pEVar19 + 0x20),(uchar)EVar3,
                                             *(MessageLite **)(pEVar19 + 0x28),
                                             *(FieldDescriptor **)(pEVar19 + 0x38));
            (**(code **)(*plVar14 + 0x38))(plVar14,*(undefined8 *)(pEVar19 + 0x28));
          }
        }
        goto switchD_005dd1d0_default;
      }
      iVar26 = *(int *)(pEVar19 + 0x20);
      uVar28 = *(undefined8 *)(pEVar19 + 0x38);
      pEVar11 = *(ExtensionSet **)(this + 0x10);
      pEVar23 = pEVar1;
      if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005dd0e4:
        if (pEVar23 != *(ExtensionSet **)(this + 0x18)) {
          pEVar12 = (ExtensionSet *)FUN_0064c700(pEVar23);
          goto LAB_005dd0f8;
        }
LAB_005dd104:
        if (pEVar23 == (ExtensionSet *)0x0) {
          pEVar12 = (ExtensionSet *)0x0;
          goto LAB_005dd12c;
        }
        bVar9 = true;
        if (pEVar1 == pEVar23) {
          bVar25 = true;
        }
        else {
          bVar25 = iVar26 < *(int *)(pEVar23 + 0x20);
        }
        pEVar12 = operator_new(0x48);
        *(int *)(pEVar12 + 0x20) = iVar26;
        *(undefined8 *)(pEVar12 + 0x2c) = 0;
        *(ulong *)(pEVar12 + 0x24) = (ulong)uStack_9c;
        *(undefined8 *)(pEVar12 + 0x3c) = 0;
        *(undefined8 *)(pEVar12 + 0x34) = 0;
        *(undefined4 *)(pEVar12 + 0x44) = 0;
                    /* try { // try from 005dd17c to 006dd1a3 has its CatchHandler @ 005dd264 */
        FUN_0064c8a0(bVar25,pEVar12,pEVar23,pEVar1);
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
        *(undefined8 *)(pEVar12 + 0x38) = uVar28;
        EVar3 = pEVar19[0x30];
        pEVar12[0x31] = (ExtensionSet)0x1;
        pEVar12[0x30] = EVar3;
      }
      else {
        do {
          pEVar12 = pEVar11;
          pEVar23 = pEVar12 + 0x10;
          if (*(int *)(pEVar12 + 0x20) <= iVar26) {
            pEVar23 = pEVar12 + 0x18;
          }
          pEVar11 = *(ExtensionSet **)pEVar23;
        } while (*(ExtensionSet **)pEVar23 != (ExtensionSet *)0x0);
        pEVar23 = pEVar12;
        if (iVar26 < *(int *)(pEVar12 + 0x20)) goto LAB_005dd0e4;
LAB_005dd0f8:
        if (*(int *)(pEVar12 + 0x20) < iVar26) goto LAB_005dd104;
LAB_005dd12c:
        bVar9 = false;
                    /* try { // try from 005dd134 to 006dd13f has its CatchHandler @ 005dd2bc */
        *(undefined8 *)(pEVar12 + 0x38) = uVar28;
      }
      pEVar12 = pEVar12 + 0x28;
                    /* try { // try from 005dd1c4 to 006dd1eb has its CatchHandler @ 005dd2bc */
      switch(*(undefined4 *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)pEVar19[0x30] * 4))
      {
      case 1:
      case 3:
      case 6:
      case 8:
        if (bVar9) {
          plVar14 = operator_new(0x20);
          plVar14[1] = lVar10;
          *plVar14 = (long)(plVar14 + 2);
          *(long **)pEVar12 = plVar14;
                    /* try { // try from 005dd1f4 to 006dd1ff has its CatchHandler @ 005dd2b8 */
        }
        else {
          plVar14 = *(long **)pEVar12;
        }
        puVar20 = *(undefined8 **)(pEVar19 + 0x28);
        iVar26 = (int)plVar14[1];
        uVar29 = (ulong)*(uint *)(puVar20 + 1);
                    /* try { // try from 005dd22c to 006dd237 has its CatchHandler @ 005dd2b4 */
        uVar2 = *(uint *)(puVar20 + 1) + iVar26;
        if (*(int *)((long)plVar14 + 0xc) < (int)uVar2) {
                    /* try { // try from 005dd238 to 006dd287 has its CatchHandler @ 005dd024 */
          uVar4 = *(int *)((long)plVar14 + 0xc) * 2;
          if ((int)uVar2 <= (int)uVar4) {
            uVar2 = uVar4;
          }
          plVar18 = (long *)*plVar14;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (long)(int)uVar2;
          *(uint *)((long)plVar14 + 0xc) = uVar2;
          uVar17 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
          if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
            uVar17 = 0xffffffffffffffff;
          }
                    /* catch() { ... } // from try @ 005dd17c with catch @ 005dd264 */
          pvVar13 = operator_new__(uVar17);
          *plVar14 = (long)pvVar13;
          memcpy(pvVar13,plVar18,(long)iVar26 << 2);
                    /* try { // try from 005dd288 to 006dd353 has its CatchHandler @ 005dd420 */
          if ((plVar18 != plVar14 + 2) && (plVar18 != (long *)0x0)) {
            operator_delete__(plVar18);
            iVar26 = (int)plVar14[1];
            uVar29 = (ulong)*(uint *)(puVar20 + 1);
          }
        }
        __src = (void *)*puVar20;
        __n = -(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2;
        pvVar13 = (void *)(*plVar14 + (long)iVar26 * 4);
        goto LAB_005dd534;
      case 2:
      case 4:
      case 5:
        if (bVar9) {
          plVar14 = operator_new(0x30);
          plVar14[1] = lVar10;
          *plVar14 = (long)(plVar14 + 2);
          *(long **)pEVar12 = plVar14;
        }
        else {
          plVar14 = *(long **)pEVar12;
        }
                    /* catch() { ... } // from try @ 005dd22c with catch @ 005dd2b4 */
        puVar20 = *(undefined8 **)(pEVar19 + 0x28);
                    /* catch() { ... } // from try @ 005dd1f4 with catch @ 005dd2b8 */
        iVar26 = (int)plVar14[1];
                    /* catch() { ... } // from try @ 005dd134 with catch @ 005dd2bc
                       catch() { ... } // from try @ 005dd1c4 with catch @ 005dd2bc */
        uVar29 = (ulong)*(uint *)(puVar20 + 1);
        uVar2 = *(uint *)(puVar20 + 1) + iVar26;
        if (*(int *)((long)plVar14 + 0xc) < (int)uVar2) {
          uVar4 = *(int *)((long)plVar14 + 0xc) * 2;
          if ((int)uVar2 <= (int)uVar4) {
            uVar2 = uVar4;
          }
          plVar18 = (long *)*plVar14;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (long)(int)uVar2;
          *(uint *)((long)plVar14 + 0xc) = uVar2;
          uVar17 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
          if (SUB168(auVar7 * ZEXT816(8),8) != 0) {
            uVar17 = 0xffffffffffffffff;
          }
          pvVar13 = operator_new__(uVar17);
          *plVar14 = (long)pvVar13;
          memcpy(pvVar13,plVar18,(long)iVar26 << 3);
          if ((plVar18 != plVar14 + 2) && (plVar18 != (long *)0x0)) {
            operator_delete__(plVar18);
            iVar26 = (int)plVar14[1];
            uVar29 = (ulong)*(uint *)(puVar20 + 1);
          }
        }
        __src = (void *)*puVar20;
        __n = -(uVar29 >> 0x1f) & 0xfffffff800000000 | uVar29 << 3;
        pvVar13 = (void *)(*plVar14 + (long)iVar26 * 8);
        goto LAB_005dd534;
      case 7:
        if (bVar9) {
          plVar14 = operator_new(0x18);
          plVar14[1] = lVar10;
          *plVar14 = (long)(plVar14 + 2);
          *(long **)pEVar12 = plVar14;
        }
        else {
          plVar14 = *(long **)pEVar12;
        }
        puVar20 = *(undefined8 **)(pEVar19 + 0x28);
        iVar27 = (int)plVar14[1];
        iVar30 = *(int *)(puVar20 + 1);
        iVar26 = iVar30 + iVar27;
        if (*(int *)((long)plVar14 + 0xc) < iVar26) {
          iVar5 = *(int *)((long)plVar14 + 0xc) * 2;
          if (iVar26 <= iVar5) {
            iVar26 = iVar5;
          }
          plVar18 = (long *)*plVar14;
          *(int *)((long)plVar14 + 0xc) = iVar26;
          uVar29 = (ulong)iVar26;
                    /* try { // try from 005dd4e8 to 006dd4f3 has its CatchHandler @ 005dd5bc */
          if ((long)uVar29 < 0) {
            uVar29 = 0xffffffffffffffff;
          }
          pvVar13 = operator_new__(uVar29);
          *plVar14 = (long)pvVar13;
                    /* try { // try from 005dd500 to 006dd517 has its CatchHandler @ 005dd5dc */
          memcpy(pvVar13,plVar18,(long)iVar27);
          if ((plVar18 != plVar14 + 2) && (plVar18 != (long *)0x0)) {
            operator_delete__(plVar18);
            iVar27 = (int)plVar14[1];
            iVar30 = *(int *)(puVar20 + 1);
          }
        }
        __src = (void *)*puVar20;
        __n = (size_t)iVar30;
        pvVar13 = (void *)(*plVar14 + (long)iVar27);
LAB_005dd534:
        memcpy(pvVar13,__src,__n);
        *(int *)(plVar14 + 1) = (int)plVar14[1] + *(int *)(puVar20 + 1);
        break;
      case 9:
        if (bVar9) {
          this_00 = operator_new(0x38);
          *(RepeatedPtrField<std::string> **)this_00 = this_00 + 0x18;
          *(long *)(this_00 + 8) = 0;
          *(undefined4 *)(this_00 + 0x10) = 4;
          *(RepeatedPtrField<std::string> **)pEVar12 = this_00;
        }
        else {
          this_00 = *(RepeatedPtrField<std::string> **)pEVar12;
        }
        RepeatedPtrField<std::string>::MergeFrom(this_00,*(RepeatedPtrField **)(pEVar19 + 0x28));
        break;
      case 10:
        if (bVar9) {
          plVar14 = operator_new(0x38);
          *plVar14 = (long)(plVar14 + 3);
          plVar14[1] = 0;
          *(undefined4 *)(plVar14 + 2) = 4;
          *(long **)pEVar12 = plVar14;
        }
        plVar14 = *(long **)(pEVar19 + 0x28);
        if (0 < (int)plVar14[1]) {
          lVar21 = 0;
          do {
            plVar18 = *(long **)pEVar12;
            iVar26 = (int)plVar18[1];
                    /* try { // try from 005dd384 to 006dd3ab has its CatchHandler @ 005dd42c */
            plVar24 = *(long **)(*plVar14 + lVar21 * 8);
            if (iVar26 < *(int *)((long)plVar18 + 0xc)) {
              *(int *)(plVar18 + 1) = iVar26 + 1;
              plVar18 = *(long **)(*plVar18 + (long)iVar26 * 8);
              if (plVar18 == (long *)0x0) goto LAB_005dd3a8;
            }
            else {
LAB_005dd3a8:
              plVar18 = (long *)(**(code **)(*plVar24 + 0x18))(plVar24);
              this_01 = *(RepeatedPtrFieldBase **)pEVar12;
              iVar26 = *(int *)(this_01 + 8);
              if (iVar26 == *(int *)(this_01 + 0x10)) {
                RepeatedPtrFieldBase::Reserve(this_01,iVar26 + 1);
                iVar27 = *(int *)(this_01 + 0xc);
LAB_005dd428:
                *(int *)(this_01 + 0xc) = iVar27 + 1;
              }
              else {
                    /* try { // try from 005dd3e8 to 006dd417 has its CatchHandler @ 005dd420 */
                iVar27 = *(int *)(this_01 + 0xc);
                if (iVar27 != *(int *)(this_01 + 0x10)) {
                  if (iVar26 < iVar27) {
                    /* try { // try from 005dd418 to 006dd44f has its CatchHandler @ 005dd024 */
                    /* catch() { ... } // from try @ 005dd288 with catch @ 005dd420
                       catch() { ... } // from try @ 005dd3e8 with catch @ 005dd420 */
                    *(undefined8 *)(*(long *)this_01 + (long)iVar27 * 8) =
                         *(undefined8 *)(*(long *)this_01 + (long)iVar26 * 8);
                  }
                  goto LAB_005dd428;
                }
                plVar15 = *(long **)(*(long *)this_01 + (long)iVar26 * 8);
                if (plVar15 != (long *)0x0) {
                  (**(code **)(*plVar15 + 8))();
                }
              }
                    /* catch() { ... } // from try @ 005dd384 with catch @ 005dd42c */
              iVar26 = *(int *)(this_01 + 8);
              *(int *)(this_01 + 8) = iVar26 + 1;
              *(long **)(*(long *)this_01 + (long)iVar26 * 8) = plVar18;
            }
                    /* try { // try from 005dd450 to 006dd4e7 has its CatchHandler @ 005dd450
                       catch() { ... } // from try @ 005dd450 with catch @ 005dd450
                       catch() { ... } // from try @ 005dd578 with catch @ 005dd450 */
            (**(code **)(*plVar18 + 0x38))(plVar18,plVar24);
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)plVar14[1]);
        }
      }
switchD_005dd1d0_default:
      pEVar19 = (ExtensionSet *)FUN_0064c6a0(pEVar19);
                    /* try { // try from 005dd550 to 006dd577 has its CatchHandler @ 005dd5c0 */
    } while (pEVar19 != param_1 + 8);
  }
  if (*(long *)(lVar8 + 0x28) != lVar16) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005dd578 to 006dd60b has its CatchHandler @ 005dd450 */
  return;
}


