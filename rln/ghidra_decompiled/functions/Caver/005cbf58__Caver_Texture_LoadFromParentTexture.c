/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cbf58
 * Function: Caver::Texture::LoadFromParentTexture
 * Signature: undefined __thiscall LoadFromParentTexture(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::LoadFromParentTexture() */

void __thiscall Caver::Texture::LoadFromParentTexture(Texture *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 005cbf5c to 006cbf8f has its CatchHandler @ 005cc174 */
  lVar2 = *(long *)(this + 0x70);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(lVar2 + 0x98);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar2 + 0x38);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(lVar2 + 0x44);
  uVar3 = *(undefined8 *)(lVar2 + 0x3c);
  *(undefined8 *)(this + 0x3c) = uVar3;
                    /* try { // try from 005cbf90 to 006cbfa3 has its CatchHandler @ 005cc0b8 */
  if (((int)uVar3 != 0) && ((int)((ulong)uVar3 >> 0x20) != 0)) {
    fVar5 = *(float *)(this + 0x6c);
    uVar3 = NEON_scvtf(uVar3,4);
    fVar4 = (float)((ulong)uVar3 >> 0x20);
    *(ulong *)(this + 0x5c) =
         CONCAT44(((float)((ulong)*(undefined8 *)(this + 0x4c) >> 0x20) * fVar5) / fVar4,
                  ((float)*(undefined8 *)(this + 0x4c) * fVar5) / (float)uVar3);
    *(ulong *)(this + 100) =
         CONCAT44(((float)((ulong)*(undefined8 *)(this + 0x54) >> 0x20) * fVar5) / fVar4,
                  ((float)*(undefined8 *)(this + 0x54) * fVar5) / (float)uVar3);
  }
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cbfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 005cbfd0 to 006cbfdf has its CatchHandler @ 005cc0c0 */
    (**(code **)*puVar1)(puVar1,this);
    return;
  }
  return;
}


