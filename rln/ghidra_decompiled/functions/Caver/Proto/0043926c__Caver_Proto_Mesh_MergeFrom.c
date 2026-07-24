/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043926c
 * Function: Caver::Proto::Mesh::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Mesh * this, Mesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Mesh::MergeFrom(Caver::Proto::Mesh const&) */

void __thiscall Caver::Proto::Mesh::MergeFrom(Mesh *this,Mesh *param_1)

{
  Mesh *pMVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  LogMessage *pLVar7;
  MeshData *pMVar8;
  MeshMaterial *this_00;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  Box *this_01;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x6a33);
    pLVar7 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 004392c8 to 005392cf has its CatchHandler @ 00439454 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar7);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::MeshData> *)(this + 0x30),
             (RepeatedPtrField *)(param_1 + 0x30));
  uVar2 = *(uint *)(param_1 + 0xa0);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 1;
      *(undefined4 *)(this + 0xc) = uVar3;
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 00439354 to 0053935b has its CatchHandler @ 0043944c */
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 2;
      *(undefined4 *)(this + 0x10) = uVar3;
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      pMVar8 = *(MeshData **)(this + 0x18);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 4;
      if (pMVar8 == (MeshData *)0x0) {
        pMVar8 = operator_new(0x20);
        puVar6 = PTR_vtable_007e7be0;
        lVar5 = DAT_0068aa60;
        *(long *)(pMVar8 + 0x10) = 0;
        *(long *)(pMVar8 + 0x18) = 0;
        *(undefined **)pMVar8 = puVar6 + 0x10;
        *(long *)(pMVar8 + 8) = lVar5;
        *(MeshData **)(this + 0x18) = pMVar8;
      }
                    /* try { // try from 004393a4 to 005393ab has its CatchHandler @ 00439448 */
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(param_1 + 0x18) != 0) {
        pMVar1 = param_1;
      }
      MeshData::MergeFrom(pMVar8,*(MeshData **)(pMVar1 + 0x18));
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
                    /* try { // try from 004393c8 to 005393f7 has its CatchHandler @ 00439458 */
    if ((uVar2 >> 3 & 1) != 0) {
      pMVar8 = *(MeshData **)(this + 0x20);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 8;
      if (pMVar8 == (MeshData *)0x0) {
        pMVar8 = operator_new(0x20);
        puVar6 = PTR_vtable_007e7be0;
        lVar5 = DAT_0068aa60;
                    /* try { // try from 004393f8 to 0053948b has its CatchHandler @ 00438f7c */
        *(long *)(pMVar8 + 0x10) = 0;
        *(long *)(pMVar8 + 0x18) = 0;
        *(undefined **)pMVar8 = puVar6 + 0x10;
        *(long *)(pMVar8 + 8) = lVar5;
        *(MeshData **)(this + 0x20) = pMVar8;
      }
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(param_1 + 0x20) != 0) {
        pMVar1 = param_1;
      }
      MeshData::MergeFrom(pMVar8,*(MeshData **)(pMVar1 + 0x20));
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
    if ((uVar2 >> 4 & 1) != 0) {
      pMVar8 = *(MeshData **)(this + 0x28);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x10;
      if (pMVar8 == (MeshData *)0x0) {
                    /* catch() { ... } // from try @ 004393a4 with catch @ 00439448 */
                    /* catch() { ... } // from try @ 00439354 with catch @ 0043944c */
        pMVar8 = operator_new(0x20);
        puVar6 = PTR_vtable_007e7be0;
        lVar5 = DAT_0068aa60;
                    /* catch() { ... } // from try @ 00439308 with catch @ 00439450 */
                    /* catch() { ... } // from try @ 004392c8 with catch @ 00439454 */
                    /* catch() { ... } // from try @ 004393c8 with catch @ 00439458 */
                    /* catch() { ... } // from try @ 004391c4 with catch @ 0043945c */
        *(long *)(pMVar8 + 0x10) = 0;
        *(long *)(pMVar8 + 0x18) = 0;
                    /* catch() { ... } // from try @ 00439254 with catch @ 00439468 */
        *(undefined **)pMVar8 = puVar6 + 0x10;
        *(long *)(pMVar8 + 8) = lVar5;
        *(MeshData **)(this + 0x28) = pMVar8;
      }
                    /* catch() { ... } // from try @ 00439144 with catch @ 00439474 */
                    /* catch() { ... } // from try @ 004390ac with catch @ 00439478 */
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(param_1 + 0x28) != 0) {
        pMVar1 = param_1;
      }
                    /* catch() { ... } // from try @ 00439508 with catch @ 0043948c
                       catch() { ... } // from try @ 00439524 with catch @ 0043948c */
      MeshData::MergeFrom(pMVar8,*(MeshData **)(pMVar1 + 0x28));
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
    if ((uVar2 >> 6 & 1) != 0) {
      pMVar8 = *(MeshData **)(this + 0x68);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x40;
      if (pMVar8 == (MeshData *)0x0) {
        pMVar8 = operator_new(0x20);
        puVar6 = PTR_vtable_007e7be0;
        lVar5 = DAT_0068aa60;
        *(long *)(pMVar8 + 0x10) = 0;
        *(long *)(pMVar8 + 0x18) = 0;
        *(undefined **)pMVar8 = puVar6 + 0x10;
        *(long *)(pMVar8 + 8) = lVar5;
        *(MeshData **)(this + 0x68) = pMVar8;
      }
                    /* try { // try from 004394e0 to 00539507 has its CatchHandler @ 00439518 */
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(param_1 + 0x68) != 0) {
        pMVar1 = param_1;
      }
      MeshData::MergeFrom(pMVar8,*(MeshData **)(pMVar1 + 0x68));
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
    if ((uVar2 >> 7 & 1) != 0) {
                    /* try { // try from 00439508 to 0053951b has its CatchHandler @ 0043948c */
      pMVar8 = *(MeshData **)(this + 0x70);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x80;
      if (pMVar8 == (MeshData *)0x0) {
                    /* catch() { ... } // from try @ 004394e0 with catch @ 00439518 */
                    /* try { // try from 0043951c to 00539523 has its CatchHandler @ 0043952c */
        pMVar8 = operator_new(0x20);
        puVar6 = PTR_vtable_007e7be0;
        lVar5 = DAT_0068aa60;
                    /* try { // try from 00439524 to 0053952f has its CatchHandler @ 0043948c */
                    /* catch() { ... } // from try @ 0043951c with catch @ 0043952c */
                    /* catch() { ... } // from try @ 004395d0 with catch @ 00439530 */
        *(long *)(pMVar8 + 0x10) = 0;
        *(long *)(pMVar8 + 0x18) = 0;
        *(undefined **)pMVar8 = puVar6 + 0x10;
        *(long *)(pMVar8 + 8) = lVar5;
        *(MeshData **)(this + 0x70) = pMVar8;
      }
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(param_1 + 0x70) != 0) {
        pMVar1 = param_1;
      }
      MeshData::MergeFrom(pMVar8,*(MeshData **)(pMVar1 + 0x70));
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      pMVar8 = *(MeshData **)(this + 0x78);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x100;
                    /* try { // try from 00439584 to 005395ab has its CatchHandler @ 004395c4 */
      if (pMVar8 == (MeshData *)0x0) {
        pMVar8 = operator_new(0x20);
        puVar6 = PTR_vtable_007e7be0;
        lVar5 = DAT_0068aa60;
        *(long *)(pMVar8 + 0x10) = 0;
        *(long *)(pMVar8 + 0x18) = 0;
        *(undefined **)pMVar8 = puVar6 + 0x10;
                    /* try { // try from 004395ac to 005395b3 has its CatchHandler @ 004395d8 */
        *(long *)(pMVar8 + 8) = lVar5;
        *(MeshData **)(this + 0x78) = pMVar8;
      }
                    /* catch() { ... } // from try @ 00439584 with catch @ 004395c4 */
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
                    /* try { // try from 004395c8 to 005395cf has its CatchHandler @ 004395d4 */
      if (*(long *)(param_1 + 0x78) != 0) {
        pMVar1 = param_1;
      }
                    /* try { // try from 004395d0 to 005395eb has its CatchHandler @ 00439530 */
      MeshData::MergeFrom(pMVar8,*(MeshData **)(pMVar1 + 0x78));
                    /* catch() { ... } // from try @ 004395c8 with catch @ 004395d4 */
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
                    /* catch() { ... } // from try @ 004395ac with catch @ 004395d8 */
    if ((uVar2 >> 9 & 1) != 0) {
      this_00 = *(MeshMaterial **)(this + 0x80);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x200;
      if (this_00 == (MeshMaterial *)0x0) {
        this_00 = operator_new(0x40);
        puVar6 = PTR_vtable_007e5a10;
        *(undefined4 *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x30) = 0;
        *(undefined4 *)(this_00 + 0x38) = 0;
        *(undefined4 *)(this_00 + 0x28) = 0;
        *(long *)(this_00 + 0x18) = 0;
        *(long *)(this_00 + 0x20) = 0;
        *(long *)(this_00 + 0x10) = 0;
        *(undefined **)this_00 = puVar6 + 0x10;
        *(MeshMaterial **)(this + 0x80) = this_00;
      }
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(param_1 + 0x80) != 0) {
        pMVar1 = param_1;
      }
                    /* catch() { ... } // from try @ 0043966c with catch @ 0043963c */
      MeshMaterial::MergeFrom(this_00,*(MeshMaterial **)(pMVar1 + 0x80));
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
    plVar10 = (long *)PTR__default_vertex_data__007e5ae0;
    if ((uVar2 >> 10 & 1) != 0) {
      this_01 = *(Box **)(this + 0x88);
                    /* try { // try from 00439658 to 0053966b has its CatchHandler @ 00439690 */
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x400;
      if (this_01 == (Box *)0x0) {
        this_01 = operator_new(0x28);
                    /* try { // try from 0043966c to 00539693 has its CatchHandler @ 0043963c */
        Box::Box(this_01);
        *(Box **)(this + 0x88) = this_01;
      }
      pMVar1 = *(Mesh **)PTR_default_instance__007e66e0;
      if (*(long *)(param_1 + 0x88) != 0) {
        pMVar1 = param_1;
      }
                    /* catch() { ... } // from try @ 00439658 with catch @ 00439690 */
      Box::MergeFrom(this_01,*(Box **)(pMVar1 + 0x88));
      uVar2 = *(uint *)(param_1 + 0xa0);
      plVar10 = (long *)PTR__default_vertex_data__007e5ae0;
    }
    PTR__default_vertex_data__007e5ae0 = (undefined *)plVar10;
    plVar9 = (long *)PTR__default_index_data__007e6c48;
    if ((uVar2 >> 0xb & 1) != 0) {
      plVar9 = *(long **)(this + 0x90);
      uVar11 = *(undefined8 *)(param_1 + 0x90);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x800;
      if (plVar9 == plVar10) {
        plVar9 = operator_new(8);
        *plVar9 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x90) = plVar9;
      }
      FUN_0066a6a8(plVar9,uVar11);
      uVar2 = *(uint *)(param_1 + 0xa0);
      plVar9 = (long *)PTR__default_index_data__007e6c48;
    }
    PTR__default_index_data__007e6c48 = (undefined *)plVar9;
    if ((uVar2 >> 0xc & 1) != 0) {
      plVar10 = *(long **)(this + 0x98);
      uVar11 = *(undefined8 *)(param_1 + 0x98);
      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x1000;
      if (plVar10 == plVar9) {
        plVar10 = operator_new(8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00439748 with catch @ 00439728
                       catch(type#1 @ 00000000) { ... } // from try @ 004397a0 with catch @ 00439728
                        */
        *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x98) = plVar10;
      }
      FUN_0066a6a8(plVar10,uVar11);
    }
  }
                    /* try { // try from 00439740 to 00539747 has its CatchHandler @ 00439778 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00439748 to 00539793 has its CatchHandler @ 00439728 */
  return;
}


