/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0040
 * Function: Caver::Proto::Circle::ByteSize
 * Signature: undefined __thiscall ByteSize(Circle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::ByteSize() const */

uint __thiscall Caver::Proto::Circle::ByteSize(Circle *this)

{
  Circle *pCVar1;
  Circle CVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  CVar2 = this[0x1c];
  uVar4 = (uint)(byte)CVar2;
  uVar5 = uVar4;
  if (CVar2 != (Circle)0x0) {
    if (((byte)CVar2 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      pCVar1 = *(Circle **)PTR_default_instance__007e76b0;
      if (*(long *)(this + 0x10) != 0) {
        pCVar1 = this;
      }
      bVar3 = *(byte *)(*(long *)(pCVar1 + 0x10) + 0x14);
      uVar5 = (uint)bVar3;
      if (bVar3 != 0) {
        uVar5 = -(bVar3 & 1) & 5;
        if ((bVar3 & 2) != 0) {
          uVar5 = uVar5 + 5;
        }
      }
      *(uint *)(*(long *)(pCVar1 + 0x10) + 8) = uVar5;
      uVar4 = *(uint *)(this + 0x1c);
      uVar5 = uVar5 + 2;
    }
    if ((uVar4 & 2) != 0) {
      uVar5 = uVar5 + 5;
    }
  }
  *(uint *)(this + 8) = uVar5;
  return uVar5;
}


