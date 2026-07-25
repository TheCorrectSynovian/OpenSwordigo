/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040AD04
 * Mangled: _ZN5Caver18InventoryItemPanel8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::InventoryItemPanel::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F8B80  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 5
 *   insn=0x000000000040AD24 string=0x000000000040AD28 ""
 *   insn=0x000000000040AD34 string=0x000000000040AD38 "6"
 *   insn=0x000000000040AD38 string=0x00000000001F7210 "0'"
 *   insn=0x000000000040AD44 string=0x00000000001F8B80 "0'"
 *   insn=0x000000000040AD64 string=0x00000000001F9850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryItemPanel::DrawRect(
        Caver::GUITexturedRect **this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  (*((void (__fastcall **)(Caver::GUITexturedRect **, Caver::RenderingContext *, const Caver::Matrix4 *))*this + 37))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::GUITexturedRect::Draw(this[34], a2);
  Caver::GUIView::DrawRect();
}

