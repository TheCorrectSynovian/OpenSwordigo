/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056dc70
 * Function: Caver::SceneGridLayer::AddObject
 * Signature: undefined __thiscall AddObject(SceneGridLayer * this, SceneGridEntry * param_1, Rectangle * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry*, Caver::Rectangle const&) */

void __thiscall
Caver::SceneGridLayer::AddObject(SceneGridLayer *this,SceneGridEntry *param_1,Rectangle *param_2)

{
  int iVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  
                    /* try { // try from 0056dc74 to 0066dc9b has its CatchHandler @ 0056e430 */
  if (*(long *)param_1 == 0) {
    *(SceneGridLayer **)param_1 = this;
    lVar3 = GridRectForAABB(this,param_2);
    *(long *)(param_1 + 0x24) = lVar3;
    uVar7 = *(undefined8 *)param_2;
    uVar5 = (lVar3 << 0x10) >> 0x30;
    sVar2 = (short)((ulong)lVar3 >> 0x30);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x14) = uVar7;
    if ((short)((ulong)lVar3 >> 0x20) <= sVar2) {
                    /* try { // try from 0056dccc to 0066dcf3 has its CatchHandler @ 0056e044 */
      iVar1 = (int)lVar3 >> 0x10;
      do {
        iVar4 = (int)uVar5;
        iVar6 = (short)lVar3 + -1;
        if ((short)lVar3 <= iVar1) {
          do {
                    /* try { // try from 0056dcf4 to 0066e0cf has its CatchHandler @ 0056d660 */
            SceneGridCell::AddEntry
                      ((SceneGridCell *)
                       (*(long *)(this + 0x30) +
                       (long)(iVar6 + iVar4 * *(int *)(this + 0x28) + 1) * 0x10),param_1);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
        }
        uVar5 = (ulong)(iVar4 + 1);
      } while (iVar4 < sVar2);
    }
  }
  return;
}


