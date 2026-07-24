/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004721e4
 * Function: Caver::SceneView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(SceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneView::LayoutSubviews() */

void __thiscall Caver::SceneView::LayoutSubviews(SceneView *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(this + 0x158);
  uVar2 = *(undefined8 *)(this + 0x84);
  puVar1[1] = *(undefined8 *)(this + 0x8c);
  *puVar1 = uVar2;
  Camera::SetAspectRatio
            (*(Camera **)(this + 0x158),*(float *)(this + 0x8c) / *(float *)(this + 0x90));
                    /* try { // try from 0047221c to 0057221f has its CatchHandler @ 0047224c */
  GUIView::LayoutSubviews((GUIView *)this);
  return;
}


