/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9018
 * Function: Caver::Proto::MusicTrack::ByteSize
 * Signature: undefined __thiscall ByteSize(MusicTrack * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicTrack::ByteSize() const */

void __thiscall Caver::Proto::MusicTrack::ByteSize(MusicTrack *this)

{
  MusicTrack MVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  
  MVar1 = this[0x1c];
  uVar4 = (uint)(byte)MVar1;
  if (MVar1 == (MusicTrack)0x0) {
    iVar2 = 0;
  }
  else {
    if (((byte)MVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      plVar5 = *(long **)(this + 0x10);
      uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x1c);
        uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
      }
      iVar2 = iVar2 + uVar3 + 1;
    }
    if ((uVar4 & 2) != 0) {
      iVar2 = iVar2 + 5;
    }
  }
  *(int *)(this + 8) = iVar2;
  return;
}


