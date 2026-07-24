/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c853c
 * Function: Caver::Sprite::Scale
 * Signature: undefined __thiscall Scale(Sprite * this, float param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::Scale(float, Caver::Vector2 const&) */

void __thiscall Caver::Sprite::Scale(Sprite *this,float param_1,Vector2 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(this + 0x2c);
                    /* catch() { ... } // from try @ 005c8194 with catch @ 005c8540 */
  if (0 < iVar1) {
    puVar4 = *(undefined8 **)(this + 0x38);
    iVar2 = *(int *)(this + 0x30);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      fVar5 = (float)*(undefined8 *)param_2;
      fVar6 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      *puVar4 = CONCAT44(fVar6 + param_1 * ((float)((ulong)*puVar4 >> 0x20) - fVar6),
                         fVar5 + param_1 * ((float)*puVar4 - fVar5));
      puVar4 = (undefined8 *)((long)puVar4 + (long)iVar2);
    } while (iVar3 < iVar1);
  }
  return;
}


