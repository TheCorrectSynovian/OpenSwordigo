/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059dc70
 * Function: Caver::GUISwitch::UpdateFrameTexture
 * Signature: undefined __thiscall UpdateFrameTexture(GUISwitch * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::UpdateFrameTexture() */

void __thiscall Caver::GUISwitch::UpdateFrameTexture(GUISwitch *this)

{
                    /* try { // try from 0059dc70 to 0069dc7b has its CatchHandler @ 0059db60 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0059dc48 with catch @ 0059dc78
                        */
                    /* try { // try from 0059dc7c to 0069dd87 has its CatchHandler @ 0059dc7c
                       catch() { ... } // from try @ 0059dc7c with catch @ 0059dc7c
                       catch() { ... } // from try @ 0059ddf8 with catch @ 0059dc7c */
  if (this[0x148] != (GUISwitch)0x0) {
    GUIFrameView::SetFrameTexture
              (*(GUIFrameView **)(this + 0x138),(intrusive_ptr *)(this + 0x128),true);
    return;
  }
  GUIFrameView::SetFrameTexture
            (*(GUIFrameView **)(this + 0x138),(intrusive_ptr *)(this + 0x130),true);
  return;
}


