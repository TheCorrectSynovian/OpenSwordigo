/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c749c
 * Function: Caver::Sprite::AddQuad
 * Signature: undefined __thiscall AddQuad(Sprite * this, Vector2 * param_1, Vector2 * param_2, Color * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddQuad(Caver::Vector2 const*, Caver::Vector2 const*, Caver::Color const*) */

void __thiscall
Caver::Sprite::AddQuad(Sprite *this,Vector2 *param_1,Vector2 *param_2,Color *param_3)

{
  int iVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x2c);
                    /* try { // try from 005c74d4 to 006c757f has its CatchHandler @ 005c6574 */
                    /* catch() { ... } // from try @ 005c68e8 with catch @ 005c74d8 */
    AddVertex(this,param_1,param_2,param_3);
                    /* catch() { ... } // from try @ 005c6a54 with catch @ 005c74ec */
    AddVertex(this,param_1 + 8,param_2 + 8,param_3 + 4);
    AddVertex(this,param_1 + 0x18,param_2 + 0x18,param_3 + 0xc);
    AddVertex(this,param_1 + 0x10,param_2 + 0x10,param_3 + 8);
    AddFace(this,iVar1,iVar1 + 1,iVar1 + 2);
                    /* catch() { ... } // from try @ 005c6a34 with catch @ 005c754c
                       catch() { ... } // from try @ 005c6ad0 with catch @ 005c754c */
                    /* catch() { ... } // from try @ 005c6ce8 with catch @ 005c755c
                       catch() { ... } // from try @ 005c6e18 with catch @ 005c755c
                       catch() { ... } // from try @ 005c6e74 with catch @ 005c755c */
    AddFace(this,iVar1 + 3,iVar1 + 2,iVar1 + 1);
    return;
  }
  AddVertex(this,param_1,param_2,param_3);
                    /* try { // try from 005c7580 to 006c762f has its CatchHandler @ 005c7650 */
  AddVertex(this,param_1 + 8,param_2 + 8,param_3 + 4);
  AddVertex(this,param_1 + 0x18,param_2 + 0x18,param_3 + 0xc);
  AddVertex(this,param_1 + 0x18,param_2 + 0x18,param_3 + 0xc);
  AddVertex(this,param_1 + 8,param_2 + 8,param_3 + 4);
  AddVertex(this,param_1 + 0x10,param_2 + 0x10,param_3 + 8);
  return;
}


