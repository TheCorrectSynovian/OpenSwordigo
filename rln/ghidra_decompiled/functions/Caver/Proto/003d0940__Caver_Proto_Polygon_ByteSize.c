/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0940
 * Function: Caver::Proto::Polygon::ByteSize
 * Signature: undefined __thiscall ByteSize(Polygon * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::ByteSize() const */

int __thiscall Caver::Proto::Polygon::ByteSize(Polygon *this)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(this + 0x4c);
  if ((uVar7 & 0x1fe) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar7 & 2;
    if ((uVar7 & 4) != 0) {
      uVar2 = (uVar7 & 2) + 2;
    }
  }
  uVar7 = *(uint *)(this + 0x18);
  uVar4 = (ulong)uVar7;
  iVar3 = uVar7 + uVar2;
  if (0 < (int)uVar7) {
    plVar5 = *(long **)(this + 0x10);
    do {
      lVar6 = *plVar5;
      bVar1 = *(byte *)(lVar6 + 0x14);
      uVar7 = (uint)bVar1;
      if (bVar1 != 0) {
        uVar7 = -(bVar1 & 1) & 5;
        if ((bVar1 & 2) != 0) {
          uVar7 = uVar7 + 5;
        }
      }
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + uVar7 + 1;
      plVar5 = plVar5 + 1;
      *(uint *)(lVar6 + 8) = uVar7;
    } while (uVar4 != 0);
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


