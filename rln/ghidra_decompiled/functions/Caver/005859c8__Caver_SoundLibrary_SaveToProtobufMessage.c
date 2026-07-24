/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005859c8
 * Function: Caver::SoundLibrary::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SoundLibrary * this, SoundLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::SaveToProtobufMessage(Caver::Proto::SoundLibrary*) */

void __thiscall Caver::SoundLibrary::SaveToProtobufMessage(SoundLibrary *this,SoundLibrary *param_1)

{
  int iVar1;
  int iVar2;
  SoundLibrary *pSVar3;
  SoundEffect *this_00;
  SoundEffect *this_01;
  
                    /* try { // try from 005859d4 to 006859e7 has its CatchHandler @ 00585d94 */
  pSVar3 = *(SoundLibrary **)(this + 0x18);
                    /* try { // try from 005859e8 to 00685a53 has its CatchHandler @ 00585748 */
  if (this + 8 != pSVar3) {
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
      this_00 = *(SoundEffect **)(pSVar3 + 0x28);
      if (iVar1 < iVar2) {
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        this_01 = *(SoundEffect **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8);
      }
      else {
        if (iVar2 == *(int *)(param_1 + 0x20)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x10),iVar2 + 1);
          iVar2 = *(int *)(param_1 + 0x1c);
        }
        *(int *)(param_1 + 0x1c) = iVar2 + 1;
        this_01 = operator_new(0x30);
        Proto::SoundEffect::SoundEffect(this_01);
        iVar1 = *(int *)(param_1 + 0x18);
                    /* try { // try from 00585a54 to 00685a93 has its CatchHandler @ 00585e0c */
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        *(SoundEffect **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8) = this_01;
      }
      SoundEffect::SaveToProtobufMessage(this_00,this_01);
      pSVar3 = (SoundLibrary *)FUN_0064c640(pSVar3);
    } while (this + 8 != pSVar3);
  }
                    /* try { // try from 00585a94 to 00685b87 has its CatchHandler @ 00585748 */
  return;
}


