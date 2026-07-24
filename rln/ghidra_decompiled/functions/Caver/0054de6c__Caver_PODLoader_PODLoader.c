/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054de6c
 * Function: Caver::PODLoader::PODLoader
 * Signature: undefined __thiscall PODLoader(PODLoader * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PODLoader::PODLoader() */

void __thiscall Caver::PODLoader::PODLoader(PODLoader *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  PODLoader *pPVar3;
  
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  pPVar3 = this + 0x30;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)pPVar3 = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 0054de84 to 0064df33 has its CatchHandler @ 0054dbd8 */
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  uVar2 = _UNK_00683808;
  uVar1 = _DAT_00683800;
  *(PODLoader **)(this + 0x40) = pPVar3;
  *(PODLoader **)(this + 0x48) = pPVar3;
                    /* catch() { ... } // from try @ 0054de5c with catch @ 0054de98 */
  *(undefined4 *)(this + 0x20) = 0;
  pPVar3 = this + 0x78;
  *(undefined8 *)pPVar3 = 0;
                    /* catch() { ... } // from try @ 0054de14 with catch @ 0054dea0 */
  *(PODLoader **)(this + 0x88) = pPVar3;
  *(PODLoader **)(this + 0x90) = pPVar3;
  *(undefined8 *)(this + 0xa8) = uVar2;
  *(undefined8 *)(this + 0xa0) = uVar1;
  this[0xb0] = (PODLoader)0x1;
                    /* catch() { ... } // from try @ 0054ddcc with catch @ 0054deb0 */
  return;
}


