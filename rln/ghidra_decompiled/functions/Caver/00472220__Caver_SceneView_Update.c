/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00472220
 * Function: Caver::SceneView::Update
 * Signature: undefined __thiscall Update(SceneView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneView::Update(float) */

void __thiscall Caver::SceneView::Update(SceneView *this,float param_1)

{
  undefined4 in_register_00005004;
  
                    /* try { // try from 00472220 to 0057225f has its CatchHandler @ 00472194 */
  CameraController::Update(param_1);
                    /* catch() { ... } // from try @ 0047221c with catch @ 0047224c */
  (**(code **)(**(long **)(this + 0xf0) + 0x18))(CONCAT44(in_register_00005004,param_1));
                    /* try { // try from 00472260 to 0057228b has its CatchHandler @ 00472260
                       catch() { ... } // from try @ 00472260 with catch @ 00472260
                       catch() { ... } // from try @ 00472320 with catch @ 00472260 */
  GUIView::Update((GUIView *)this,param_1);
  return;
}


