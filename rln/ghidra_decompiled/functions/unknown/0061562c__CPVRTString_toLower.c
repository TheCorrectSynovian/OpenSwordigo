/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061562c
 * Function: CPVRTString::toLower
 * Signature: undefined __thiscall toLower(CPVRTString * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::toLower() */

void __thiscall CPVRTString::toLower(CPVRTString *this)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = 0;
  do {
    cVar1 = *(char *)(*(long *)(this + 8) + lVar2);
    uVar3 = (int)cVar1 + 0x20;
    if (0x19 < (int)cVar1 - 0x41U) {
      uVar3 = (uint)cVar1;
    }
    *(char *)(*(long *)(this + 8) + lVar2) = (char)uVar3;
    lVar2 = lVar2 + 1;
  } while ((uVar3 & 0xff) != 0);
  return;
}


