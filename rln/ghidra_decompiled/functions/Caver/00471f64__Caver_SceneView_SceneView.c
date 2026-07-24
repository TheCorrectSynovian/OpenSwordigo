/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00471f64
 * Function: Caver::SceneView::SceneView
 * Signature: undefined __thiscall SceneView(SceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneView::SceneView() */

void __thiscall Caver::SceneView::SceneView(SceneView *this)

{
  undefined *puVar1;
  
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e5a70;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  CameraController::CameraController((CameraController *)(this + 0x100));
  this[0x1a0] = (SceneView)0x0;
  return;
}


