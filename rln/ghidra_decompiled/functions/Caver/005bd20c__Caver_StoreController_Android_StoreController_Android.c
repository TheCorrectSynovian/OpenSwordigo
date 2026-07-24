/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bd20c
 * Function: Caver::StoreController_Android::StoreController_Android
 * Signature: undefined __thiscall StoreController_Android(StoreController_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::StoreController_Android() */

void __thiscall
Caver::StoreController_Android::StoreController_Android(StoreController_Android *this)

{
  undefined *puVar1;
  undefined *puVar2;
  StoreController_Android *pSVar3;
  
  puVar2 = PTR_vtable_007e6e90;
  puVar1 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 8) = puVar1 + 0x18;
  pSVar3 = this + 0x18;
  *(undefined8 *)pSVar3 = 0;
  *(StoreController_Android **)(this + 0x28) = pSVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005bd390 with catch @ 005bd23c
                       catch(type#1 @ 00000000) { ... } // from try @ 005bd60c with catch @ 005bd23c
                        */
  *(StoreController_Android **)(this + 0x30) = pSVar3;
  *(undefined8 *)(this + 0x38) = 0;
  pSVar3 = this + 0x48;
  *(undefined8 *)pSVar3 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(StoreController_Android **)(this + 0x58) = pSVar3;
  *(StoreController_Android **)(this + 0x60) = pSVar3;
  *(undefined8 *)(this + 0x68) = 0;
  pSVar3 = this + 0x78;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)pSVar3 = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(StoreController_Android **)(this + 0x88) = pSVar3;
  *(StoreController_Android **)(this + 0x90) = pSVar3;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xa0] = (StoreController_Android)0x0;
  return;
}


