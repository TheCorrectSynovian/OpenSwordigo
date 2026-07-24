/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9ccc
 * Function: Caver::Proto::MusicPlaylist::Swap
 * Signature: undefined __thiscall Swap(MusicPlaylist * this, MusicPlaylist * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::Swap(Caver::Proto::MusicPlaylist*) */

void __thiscall Caver::Proto::MusicPlaylist::Swap(MusicPlaylist *this,MusicPlaylist *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x18),(RepeatedPtrFieldBase *)(param_1 + 0x18));
    uVar1 = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


