/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c6588
 * Function: Caver::FontText::TranslateLine
 * Signature: undefined __thiscall TranslateLine(FontText * this, int param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::TranslateLine(int, Caver::Vector2 const&) */

void __thiscall Caver::FontText::TranslateLine(FontText *this,int param_1,Vector2 *param_2)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = (int *)(*(long *)(this + 200) + (long)param_1 * 8 + 4);
  if (0 < *piVar8) {
                    /* try { // try from 005c65b8 to 006c65bb has its CatchHandler @ 005c7244 */
                    /* try { // try from 005c65bc to 006c66c3 has its CatchHandler @ 005c6574 */
    piVar1 = (int *)(*(long *)(this + 200) + (long)param_1 * 8);
    lVar6 = *(long *)(this + 0xb0);
    lVar5 = (long)*piVar1;
    uVar2 = lVar5 + *piVar8;
    uVar7 = (*(long *)(this + 0xb8) - lVar6 >> 2) * -0x71c71c71c71c71c7;
    if (uVar7 < uVar2 || uVar7 - uVar2 == 0) {
      uVar4 = *(uint *)(this + 0x50);
    }
    else {
      uVar4 = (uint)*(ushort *)(lVar6 + uVar2 * 0x24 + 0x1c);
    }
    uVar3 = (uint)*(ushort *)(lVar6 + lVar5 * 0x24 + 0x1c);
    Sprite::TranslateFaces((Sprite *)(this + 0x58),uVar3,uVar4 - uVar3,param_2);
    if (0 < *piVar8) {
      iVar9 = 0;
      do {
        lVar6 = *(long *)(this + 0xb0) + (long)(iVar9 + *piVar1) * 0x24;
        *(ulong *)(lVar6 + 0x14) =
             CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar6 + 0x14) >> 0x20),
                      (float)*(undefined8 *)param_2 + (float)*(undefined8 *)(lVar6 + 0x14));
        Rectangle::Translate((Rectangle *)(lVar6 + 4),param_2);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *piVar8);
    }
  }
  return;
}


