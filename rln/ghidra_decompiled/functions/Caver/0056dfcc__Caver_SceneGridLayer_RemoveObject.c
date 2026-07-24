/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056dfcc
 * Function: Caver::SceneGridLayer::RemoveObject
 * Signature: undefined __thiscall RemoveObject(SceneGridLayer * this, SceneGridEntry * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry*) */

void __thiscall Caver::SceneGridLayer::RemoveObject(SceneGridLayer *this,SceneGridEntry *param_1)

{
  int iVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  if (*(long *)param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x24);
    *(undefined8 *)param_1 = 0;
    uVar5 = (lVar3 << 0x10) >> 0x30;
    sVar2 = (short)((ulong)lVar3 >> 0x30);
                    /* catch() { ... } // from try @ 0056db44 with catch @ 0056e008 */
    if ((short)((ulong)lVar3 >> 0x20) <= sVar2) {
      iVar1 = (int)lVar3 >> 0x10;
      do {
        iVar4 = (int)uVar5;
        iVar6 = (short)lVar3 + -1;
        if ((short)lVar3 <= iVar1) {
          do {
            SceneGridCell::RemoveEntry
                      ((SceneGridCell *)
                       (*(long *)(this + 0x30) +
                       (long)(iVar6 + iVar4 * *(int *)(this + 0x28) + 1) * 0x10),param_1);
                    /* catch() { ... } // from try @ 0056db30 with catch @ 0056e040 */
            iVar6 = iVar6 + 1;
                    /* catch() { ... } // from try @ 0056dccc with catch @ 0056e044 */
          } while (iVar6 < iVar1);
        }
                    /* catch() { ... } // from try @ 0056dbc8 with catch @ 0056e04c */
        uVar5 = (ulong)(iVar4 + 1);
      } while (iVar4 < sVar2);
    }
  }
  return;
}


