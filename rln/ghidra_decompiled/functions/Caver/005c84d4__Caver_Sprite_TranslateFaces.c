/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c84d4
 * Function: Caver::Sprite::TranslateFaces
 * Signature: undefined __thiscall TranslateFaces(Sprite * this, int param_1, int param_2, Vector2 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::TranslateFaces(int, int, Caver::Vector2 const&) */

void __thiscall Caver::Sprite::TranslateFaces(Sprite *this,int param_1,int param_2,Vector2 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 005c82b4 with catch @ 005c84d4
                       catch() { ... } // from try @ 005c833c with catch @ 005c84d4 */
                    /* catch() { ... } // from try @ 005c8240 with catch @ 005c84d8 */
  if (0 < param_2) {
                    /* catch() { ... } // from try @ 005c821c with catch @ 005c84dc */
    lVar1 = (long)*(int *)(this + 0x30);
                    /* catch() { ... } // from try @ 005c81f0 with catch @ 005c84e0 */
                    /* catch() { ... } // from try @ 005c81cc with catch @ 005c84e4 */
    puVar2 = (undefined8 *)(*(long *)(this + 0x38) + param_1 * lVar1 * 3);
    do {
      param_2 = param_2 + -1;
      *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) +
                         (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                         (float)*puVar2 + (float)*(undefined8 *)param_3);
      puVar2 = (undefined8 *)((long)puVar2 + lVar1);
      *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) +
                         (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                         (float)*puVar2 + (float)*(undefined8 *)param_3);
      puVar2 = (undefined8 *)((long)puVar2 + lVar1);
      *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) +
                         (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                         (float)*puVar2 + (float)*(undefined8 *)param_3);
      puVar2 = (undefined8 *)((long)puVar2 + lVar1);
    } while (param_2 != 0);
  }
  return;
}


