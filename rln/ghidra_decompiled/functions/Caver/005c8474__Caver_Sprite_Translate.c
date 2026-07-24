/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c8474
 * Function: Caver::Sprite::Translate
 * Signature: undefined __thiscall Translate(Sprite * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::Translate(Caver::Vector2 const&) */

void __thiscall Caver::Sprite::Translate(Sprite *this,Vector2 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
                    /* catch() { ... } // from try @ 005c82f4 with catch @ 005c8484 */
  Rectangle::Translate((Rectangle *)(this + 8),param_1);
  iVar1 = *(int *)(this + 0x2c);
  if (0 < iVar1) {
    puVar3 = *(undefined8 **)(this + 0x38);
    iVar2 = *(int *)(this + 0x30);
    iVar4 = 0;
    do {
                    /* try { // try from 005c84a8 to 006c84cf has its CatchHandler @ 005c8604 */
      iVar4 = iVar4 + 1;
      *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) +
                         (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                         (float)*puVar3 + (float)*(undefined8 *)param_1);
      puVar3 = (undefined8 *)((long)puVar3 + (long)iVar2);
    } while (iVar4 < iVar1);
  }
                    /* try { // try from 005c84d0 to 006c85d3 has its CatchHandler @ 005c8154 */
  return;
}


