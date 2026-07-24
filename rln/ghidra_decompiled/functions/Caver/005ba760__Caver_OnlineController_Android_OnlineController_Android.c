/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba760
 * Function: Caver::OnlineController_Android::OnlineController_Android
 * Signature: undefined __thiscall OnlineController_Android(OnlineController_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController_Android::OnlineController_Android() */

void __thiscall
Caver::OnlineController_Android::OnlineController_Android(OnlineController_Android *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e79d0 + 0x10;
  this[0x20] = (OnlineController_Android)0x0;
  *(OnlineController_Android **)(this + 0x10) = this + 0x10;
  *(OnlineController_Android **)(this + 0x18) = this + 0x10;
  *(undefined **)this = puVar1;
                    /* try { // try from 005ba784 to 006ba787 has its CatchHandler @ 005ba838 */
  *(undefined8 *)(this + 0x28) = 0xc0c3880000000000;
                    /* try { // try from 005ba788 to 006ba84b has its CatchHandler @ 005ba578 */
  return;
}


