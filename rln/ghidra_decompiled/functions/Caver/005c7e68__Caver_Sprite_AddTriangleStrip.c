/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7e68
 * Function: Caver::Sprite::AddTriangleStrip
 * Signature: undefined __thiscall AddTriangleStrip(Sprite * this, int param_1, Vector2 * param_2, Vector2 * param_3, Color * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddTriangleStrip(int, Caver::Vector2 const*, Caver::Vector2 const*, Caver::Color
   const&) */

void __thiscall
Caver::Sprite::AddTriangleStrip
          (Sprite *this,int param_1,Vector2 *param_2,Vector2 *param_3,Color *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
                    /* try { // try from 005c7e70 to 006c7e97 has its CatchHandler @ 005c8084 */
  uVar6 = (ulong)(uint)param_1;
  if (*(float *)(this + 0x10) < DAT_00683734) {
    *(undefined8 *)(this + 8) = *(undefined8 *)param_2;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (0 < param_1) {
                    /* try { // try from 005c7eb8 to 006c7edf has its CatchHandler @ 005c80ec */
    iVar4 = *(int *)(this + 0x2c);
    do {
      Rectangle::ExpandToIncludePoint((Rectangle *)(this + 8),param_2);
      AddVertex(this,param_2,param_3,param_4);
                    /* try { // try from 005c7ee4 to 006c7eef has its CatchHandler @ 005c80e8 */
      param_2 = param_2 + 8;
      uVar6 = uVar6 - 1;
      param_3 = param_3 + 8;
    } while (uVar6 != 0);
    if (2 < param_1) {
      bVar1 = false;
      iVar5 = param_1 + -2;
      do {
        if (bVar1) {
          iVar2 = iVar4 + 1;
          iVar3 = iVar4;
        }
        else {
          iVar3 = iVar4 + 1;
          iVar2 = iVar4;
        }
        AddFace(this,iVar2,iVar3,iVar4 + 2);
        bVar1 = (bool)(bVar1 ^ 1);
                    /* try { // try from 005c7f30 to 006c7f57 has its CatchHandler @ 005c8034 */
        iVar5 = iVar5 + -1;
        iVar4 = iVar4 + 1;
      } while (iVar5 != 0);
    }
  }
  return;
}


