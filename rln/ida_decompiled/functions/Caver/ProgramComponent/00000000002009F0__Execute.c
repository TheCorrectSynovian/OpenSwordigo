/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002009F0
 * Mangled: ._ZN5Caver16ProgramComponent7ExecuteEv
 * Demangled: Caver::ProgramComponent::Execute(void)
 *
 * Callers: 5
 *   0x0000000000232984  Caver::ProgramComponent::RegisterLibrary(void)
 *   0x0000000000232AD8  Caver::ProgramComponent::HandleMessage(int,void *)
 *   0x0000000000232C7C  sub_232C7C
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *
 * Callees: 1
 *   0x0000000000232710  Caver::ProgramComponent::Execute(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002009F8 string=0x00000000002009FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramComponent::Execute(Caver::ProgramComponent *this)
{
  return _ZN5Caver16ProgramComponent7ExecuteEv(this);
}

