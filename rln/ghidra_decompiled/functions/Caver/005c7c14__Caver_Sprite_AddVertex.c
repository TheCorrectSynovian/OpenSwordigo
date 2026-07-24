/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7c14
 * Function: Caver::Sprite::AddVertex
 * Signature: undefined __thiscall AddVertex(Sprite * this, Vector2 * param_1, Vector2 * param_2, Color * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddVertex(Caver::Vector2 const&, Caver::Vector2 const&, Caver::Color const&) */

void __thiscall
Caver::Sprite::AddVertex(Sprite *this,Vector2 *param_1,Vector2 *param_2,Color *param_3)

{
  int iVar1;
  int iVar2;
  Sprite SVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *__dest;
  void *__src;
  int iVar9;
  
  iVar9 = *(int *)(this + 0x2c);
                    /* catch() { ... } // from try @ 005c7ad8 with catch @ 005c7c44 */
                    /* catch() { ... } // from try @ 005c7a70 with catch @ 005c7c48 */
  if (iVar9 < *(int *)(this + 0x28)) {
    __dest = *(void **)(this + 0x38);
    SVar3 = this[0x50];
  }
  else {
    iVar2 = *(int *)(this + 0x30);
    iVar4 = *(int *)(this + 0x28) * 2;
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    uVar5 = (ulong)(iVar2 * iVar4);
                    /* catch() { ... } // from try @ 005c7a64 with catch @ 005c7c80 */
                    /* catch() { ... } // from try @ 005c7a54 with catch @ 005c7c84 */
    if ((long)uVar5 < 0) {
      uVar5 = 0xffffffffffffffff;
    }
                    /* catch() { ... } // from try @ 005c7a18 with catch @ 005c7c88 */
    __dest = operator_new__(uVar5);
                    /* catch() { ... } // from try @ 005c79e8 with catch @ 005c7c98 */
    if (iVar9 < 1) {
      __src = *(void **)(this + 0x38);
      *(void **)(this + 0x38) = __dest;
    }
    else {
      __src = *(void **)(this + 0x38);
      iVar1 = iVar4;
      if (iVar9 <= iVar4) {
        iVar1 = iVar9;
      }
      memcpy(__dest,__src,(long)(iVar2 * iVar1));
      *(void **)(this + 0x38) = __dest;
    }
    if (__src != (void *)0x0) {
      operator_delete__(__src);
      __dest = *(void **)(this + 0x38);
    }
    SVar3 = this[0x50];
    lVar6 = (long)__dest + 0xc;
    *(int *)(this + 0x28) = iVar4;
    if (SVar3 != (Sprite)0x0) {
      *(long *)(this + 0x40) = lVar6;
      lVar6 = (long)__dest + 0x10;
    }
    iVar9 = *(int *)(this + 0x2c);
    *(long *)(this + 0x48) = lVar6;
  }
  puVar7 = (undefined8 *)((long)__dest + (long)*(int *)(this + 0x30) * (long)iVar9);
  *puVar7 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 005c7a24 with catch @ 005c7d08 */
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar8 = (undefined8 *)((long)puVar7 + 0xc);
  if (SVar3 != (Sprite)0x0) {
    puVar8 = puVar7 + 2;
    *(undefined4 *)((long)puVar7 + 0xc) = *(undefined4 *)param_3;
    iVar9 = *(int *)(this + 0x2c);
  }
  *puVar8 = *(undefined8 *)param_2;
  *(int *)(this + 0x2c) = iVar9 + 1;
  return;
}


