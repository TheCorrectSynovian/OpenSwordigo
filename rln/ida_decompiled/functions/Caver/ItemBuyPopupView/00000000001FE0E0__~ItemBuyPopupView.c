/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE0E0
 * Mangled: ._ZN5Caver16ItemBuyPopupViewD2Ev
 * Demangled: Caver::ItemBuyPopupView::~ItemBuyPopupView()
 *
 * Callers: 1
 *   0x0000000000414AE4  Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>> *)
 *
 * Callees: 1
 *   0x0000000000414AE4  Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE0E8 string=0x00000000001FE0EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ItemBuyPopupView::~ItemBuyPopupView(Caver::ItemBuyPopupView *this)
{
  JUMPOUT(0x414C08);
}

