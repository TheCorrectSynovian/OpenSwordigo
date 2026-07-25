/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFDC0
 * Mangled: ._ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_16ProgramComponentEEEvPSt6vectorIPT_SaIS5_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>> *)
 *
 * Callers: 2
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *
 * Callees: 1
 *   0x0000000000414AE4  Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFDC8 string=0x00000000001FFDCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>()
{
  return _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_16ProgramComponentEEEvPSt6vectorIPT_SaIS5_EE();
}

