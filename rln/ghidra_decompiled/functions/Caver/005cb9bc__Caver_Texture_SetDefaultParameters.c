/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cb9bc
 * Function: Caver::Texture::SetDefaultParameters
 * Signature: undefined __thiscall SetDefaultParameters(Texture * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::SetDefaultParameters(bool) */

void __thiscall Caver::Texture::SetDefaultParameters(Texture *this,bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 005cb9bc to 006cb9c7 has its CatchHandler @ 005cbc20 */
                    /* try { // try from 005cb9c8 to 006cb9d3 has its CatchHandler @ 005cbbe8 */
  if ((param_1) && (lVar1 = RenderingContext::CurrentContext(), *(char *)(lVar1 + 100) != '\0')) {
    uVar2 = 0x2701;
  }
  else {
    uVar2 = 0x2601;
  }
  glTexParameteri(0xde1,0x2801,uVar2);
                    /* try { // try from 005cba00 to 006cba0f has its CatchHandler @ 005cbc90 */
  glTexParameteri(0xde1,0x2800,0x2601);
  return;
}


