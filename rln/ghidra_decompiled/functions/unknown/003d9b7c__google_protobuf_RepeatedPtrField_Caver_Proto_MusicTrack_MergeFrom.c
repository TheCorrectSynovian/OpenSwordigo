/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9b7c
 * Function: google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom
 * Signature: undefined __thiscall MergeFrom(RepeatedPtrField<Caver::Proto::MusicTrack> * this, RepeatedPtrField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>
   const&) */

void __thiscall
google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom
          (RepeatedPtrField<Caver::Proto::MusicTrack> *this,RepeatedPtrField *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  MusicTrack *this_00;
  int iVar3;
  MusicTrack *pMVar4;
  long lVar5;
  int iVar6;
  
  internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)this,*(int *)(param_1 + 8) + *(int *)(this + 8));
  puVar2 = PTR__default_resource_name__007e7358;
  if (0 < *(int *)(param_1 + 8)) {
    lVar5 = 0;
    puVar1 = PTR_vtable_007e54f8 + 0x10;
    do {
      iVar6 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0xc);
      pMVar4 = *(MusicTrack **)(*(long *)param_1 + lVar5 * 8);
      if (iVar6 < iVar3) {
        *(int *)(this + 8) = iVar6 + 1;
        this_00 = *(MusicTrack **)(*(long *)this + (long)iVar6 * 8);
      }
      else {
        if (iVar3 == *(int *)(this + 0x10)) {
          internal::RepeatedPtrFieldBase::Reserve((RepeatedPtrFieldBase *)this,iVar3 + 1);
          iVar6 = *(int *)(this + 8);
          iVar3 = *(int *)(this + 0xc);
        }
        *(int *)(this + 0xc) = iVar3 + 1;
        this_00 = operator_new(0x20);
        *(undefined **)this_00 = puVar1;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined **)(this_00 + 0x10) = puVar2;
        *(long *)(this_00 + 0x18) = 0x3f800000;
        *(int *)(this + 8) = iVar6 + 1;
        *(MusicTrack **)(*(long *)this + (long)iVar6 * 8) = this_00;
      }
      Caver::Proto::MusicTrack::MergeFrom(this_00,pMVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  return;
}


