/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e7fe4
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add
 * Signature: undefined __thiscall Add(RepeatedPtrField<Caver::Proto::MapNode> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add() */

long * __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add
          (RepeatedPtrField<Caver::Proto::MapNode> *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(this + 8);
  iVar5 = *(int *)(this + 0xc);
  if (iVar6 < iVar5) {
    *(int *)(this + 8) = iVar6 + 1;
    plVar4 = *(long **)(*(long *)this + (long)iVar6 * 8);
  }
  else {
    if (iVar5 == *(int *)(this + 0x10)) {
      internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar5 + 1);
      iVar6 = *(int *)(this + 8);
      iVar5 = *(int *)(this + 0xc);
    }
    *(int *)(this + 0xc) = iVar5 + 1;
    plVar4 = operator_new(0x88);
    puVar3 = PTR_vtable_007e68a0;
    plVar4[5] = (long)(plVar4 + 8);
    plVar4[6] = 0;
    *(undefined4 *)(plVar4 + 1) = 0;
    *(undefined4 *)(plVar4 + 7) = 4;
    puVar1 = PTR__default_level_name__007e5878;
    plVar4[2] = 0;
    plVar4[0xe] = (long)PTR__default_music__007e7748;
    puVar2 = PTR__default_title__007e6348;
    *(undefined4 *)(plVar4 + 0xc) = 0;
    *(undefined1 *)((long)plVar4 + 100) = 0;
    *(undefined4 *)(plVar4 + 0xd) = 0;
    *(undefined1 *)(plVar4 + 0xf) = 0;
    *(undefined4 *)((long)plVar4 + 0x7c) = 0;
    *(undefined1 *)(plVar4 + 0x10) = 0;
    *plVar4 = (long)(puVar3 + 0x10);
    plVar4[4] = (long)puVar2;
    plVar4[3] = (long)puVar1;
    *(undefined4 *)((long)plVar4 + 0x84) = 0;
    *(int *)(this + 8) = iVar6 + 1;
    *(long **)(*(long *)this + (long)iVar6 * 8) = plVar4;
  }
  return plVar4;
}


