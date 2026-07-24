/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043de0c
 * Function: Caver::ConfigureOverlayViewController::ConfigureOverlayViewController
 * Signature: undefined __thiscall ConfigureOverlayViewController(ConfigureOverlayViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayViewController::ConfigureOverlayViewController() */

void __thiscall
Caver::ConfigureOverlayViewController::ConfigureOverlayViewController
          (ConfigureOverlayViewController *this)

{
  undefined *puVar1;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e5e58;
                    /* catch() { ... } // from try @ 0043ddfc with catch @ 0043de20 */
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined **)this = puVar1 + 0x10;
                    /* catch() { ... } // from try @ 0043df80 with catch @ 0043de3c
                       catch() { ... } // from try @ 0043e108 with catch @ 0043de3c */
  *(undefined **)(this + 0x48) = puVar1 + 0x88;
  return;
}


