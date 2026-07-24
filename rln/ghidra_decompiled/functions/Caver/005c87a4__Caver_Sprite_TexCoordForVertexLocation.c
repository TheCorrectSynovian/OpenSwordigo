/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c87a4
 * Function: Caver::Sprite::TexCoordForVertexLocation
 * Signature: undefined __cdecl TexCoordForVertexLocation(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::TexCoordForVertexLocation(Caver::Vector2 const&) */

void Caver::Sprite::TexCoordForVertexLocation(Vector2 *param_1)

{
  undefined8 *in_x1;
  undefined8 *in_x8;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(*(long *)param_1 + 100);
  uVar5 = *(undefined8 *)(*(long *)param_1 + 0x5c);
  uVar2 = 0;
                    /* catch() { ... } // from try @ 005c86ac with catch @ 005c87c4 */
  fVar1 = (float)uVar5 +
          ((float)uVar4 * ((float)*in_x1 - (float)*(undefined8 *)(param_1 + 8))) /
          (float)*(undefined8 *)(param_1 + 0x10);
  fVar3 = (float)((ulong)uVar5 >> 0x20) +
          ((float)((ulong)uVar4 >> 0x20) *
          ((float)((ulong)*in_x1 >> 0x20) - (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20))) /
          (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  *in_x8 = CONCAT44(fVar3,fVar1);
  if ((fVar1 < 0.0) || (uVar2 = 0x3f800000, 1.0 < fVar1)) {
    *(undefined4 *)in_x8 = uVar2;
  }
                    /* try { // try from 005c87e8 to 006c885f has its CatchHandler @ 005c8868 */
  uVar2 = 0;
  if ((fVar3 < 0.0) || (uVar2 = 0x3f800000, 1.0 < fVar3)) {
    *(undefined4 *)((long)in_x8 + 4) = uVar2;
  }
  return;
}


