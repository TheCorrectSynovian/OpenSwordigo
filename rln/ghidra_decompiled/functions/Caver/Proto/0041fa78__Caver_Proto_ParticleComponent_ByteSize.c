/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041fa78
 * Function: Caver::Proto::ParticleComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::ByteSize() const */

void __thiscall Caver::Proto::ParticleComponent::ByteSize(ParticleComponent *this)

{
  ParticleComponent PVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  
                    /* try { // try from 0041fa88 to 0051fa9f has its CatchHandler @ 0041fb84 */
  PVar1 = this[0x1c];
  uVar4 = (uint)(byte)PVar1;
  if (PVar1 == (ParticleComponent)0x0) {
    iVar2 = 0;
  }
  else {
    if (((byte)PVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      plVar5 = *(long **)(this + 0x10);
      uVar3 = (uint)*(undefined8 *)(*plVar5 + -0x18);
                    /* try { // try from 0041fab0 to 0051fabb has its CatchHandler @ 0041fbf8 */
      if (uVar3 < 0x80) {
        iVar2 = 1;
                    /* try { // try from 0041fabc to 0051fac3 has its CatchHandler @ 0041fb68 */
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
                    /* try { // try from 0041faf4 to 0051faf7 has its CatchHandler @ 0041fbf8 */
                    /* try { // try from 0041faf8 to 0051fc1b has its CatchHandler @ 0041f9d8 */
  return;
}


