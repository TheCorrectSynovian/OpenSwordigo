/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00559f04
 * Function: Caver::LightOverlay::LightOverlay
 * Signature: undefined __thiscall LightOverlay(LightOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightOverlay::LightOverlay() */

void __thiscall Caver::LightOverlay::LightOverlay(LightOverlay *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0xff00000000000000;
  *(undefined8 *)(this + 0x28) = 0;
  VertexArrayObject::VertexArrayObject((VertexArrayObject *)(this + 0x48));
                    /* try { // try from 00559f28 to 00659f3f has its CatchHandler @ 0055a574 */
  this[0x90] = (LightOverlay)0x0;
  *(undefined8 *)(this + 0x98) = 0;
  return;
}


