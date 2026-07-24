/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050ad04
 * Function: Caver::InventoryItemPanel::DrawRect
 * Signature: undefined __thiscall DrawRect(InventoryItemPanel * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::InventoryItemPanel::DrawRect
          (InventoryItemPanel *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
                    /* catch() { ... } // from try @ 0050ac68 with catch @ 0050ad04 */
                    /* catch() { ... } // from try @ 0050ac14 with catch @ 0050ad08 */
                    /* catch() { ... } // from try @ 0050abc0 with catch @ 0050ad0c */
                    /* catch() { ... } // from try @ 0050acb0 with catch @ 0050ad20 */
                    /* try { // try from 0050ad24 to 0060ad2b has its CatchHandler @ 0050ad34 */
                    /* try { // try from 0050ad2c to 0060ad37 has its CatchHandler @ 0050ab64 */
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
                    /* catch() { ... } // from try @ 0050ad24 with catch @ 0050ad34 */
                    /* catch() { ... } // from try @ 0050ada8 with catch @ 0050ad38
                       catch() { ... } // from try @ 0050adc4 with catch @ 0050ad38 */
  RenderingContext::SetIdentityMatrix(param_1);
  GUITexturedRect::Draw(*(GUITexturedRect **)(this + 0x110),param_1);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  return;
}


